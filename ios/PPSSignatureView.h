#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@class RSSignatureViewManager;

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;
@property (nonatomic, strong) RSSignatureViewManager *manager;
@property ( nonatomic) int distance;
@property ( nonatomic) int totalDistance;

- (void)erase;

- (UIImage *) signatureImage;
- (UIImage *) signatureImage: (BOOL) rotatedImage;
- (UIImage *) signatureImage: (BOOL) rotatedImage withSquare:(BOOL)square;

@end
