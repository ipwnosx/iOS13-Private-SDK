//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CADisplayLink, CALayer, CKAnimatedImage, CKElasticFunction, NSArray, NSMutableDictionary, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol CKBrowserDragViewControllerDelegate;

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver>
{
    BOOL _canScale;
    BOOL _canRotate;
    BOOL _canPeel;
    BOOL _pressed;
    BOOL _scaledDown;
    BOOL _hasMovedToWindow;
    id <CKBrowserDragViewControllerDelegate> _delegate;
    double _dragViewScale;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CKAnimatedImage *_dragImage;
    NSMutableDictionary *_peelMaskImageCache;
    UIImage *_currentFrameImage;
    NSArray *_dragImageFrames;
    UIView *_dragView;
    UIView *_plusImageView;
    UIView *_whiteBackground;
    CALayer *_peelImageLayer;
    CALayer *_peelMaskLayer;
    double _initialScale;
    double _rotationAngle;
    CALayer *_shineLayer;
    CALayer *_shadowLayer;
    CALayer *_dropShadowLayer;
    CALayer *_peelLayer;
    CALayer *_meshLayer;
    CALayer *_perspectiveLayer;
    CADisplayLink *_displayLink;
    double _elasticLastTime;
    double _elasticRemainingTime;
    CKElasticFunction *_elasticFunctionPositionX;
    CKElasticFunction *_elasticFunctionPositionY;
    CKElasticFunction *_elasticFunctionRotation;
    double _elasticRotationAngle;
    CKElasticFunction *_elasticFunctionScaleX;
    CKElasticFunction *_elasticFunctionScaleY;
    double _elasticScaleX;
    double _elasticScaleY;
    CGPoint _anchorOffset;
    CGSize _initialSize;
    CGPoint _initialDragStartPosition;
    CGSize _rasterizedImageSize;
    CGPoint _previousPanLocationInView;
    CGPoint _meshLayerStartPosition;
    CGPoint _peelLayerStartPosition;
    CGPoint _shineLayerStartPosition;
    CGPoint _shadowLayerStartPosition;
    CGPoint _dropShadowLayerStartPosition;
    CGRect _sourceRect;
}

+ (id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2;
+ (id)meshTransform;
+ (BOOL)supportsForceTouch;
@property(nonatomic) BOOL hasMovedToWindow; // @synthesize hasMovedToWindow=_hasMovedToWindow;
@property(nonatomic, getter=isScaledDown) BOOL scaledDown; // @synthesize scaledDown=_scaledDown;
@property(nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic) double elasticScaleY; // @synthesize elasticScaleY=_elasticScaleY;
@property(nonatomic) double elasticScaleX; // @synthesize elasticScaleX=_elasticScaleX;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionScaleY; // @synthesize elasticFunctionScaleY=_elasticFunctionScaleY;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionScaleX; // @synthesize elasticFunctionScaleX=_elasticFunctionScaleX;
@property(nonatomic) double elasticRotationAngle; // @synthesize elasticRotationAngle=_elasticRotationAngle;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionRotation; // @synthesize elasticFunctionRotation=_elasticFunctionRotation;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionPositionY; // @synthesize elasticFunctionPositionY=_elasticFunctionPositionY;
@property(retain, nonatomic) CKElasticFunction *elasticFunctionPositionX; // @synthesize elasticFunctionPositionX=_elasticFunctionPositionX;
@property(nonatomic) double elasticRemainingTime; // @synthesize elasticRemainingTime=_elasticRemainingTime;
@property(nonatomic) double elasticLastTime; // @synthesize elasticLastTime=_elasticLastTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) CGPoint dropShadowLayerStartPosition; // @synthesize dropShadowLayerStartPosition=_dropShadowLayerStartPosition;
@property(nonatomic) CGPoint shadowLayerStartPosition; // @synthesize shadowLayerStartPosition=_shadowLayerStartPosition;
@property(nonatomic) CGPoint shineLayerStartPosition; // @synthesize shineLayerStartPosition=_shineLayerStartPosition;
@property(nonatomic) CGPoint peelLayerStartPosition; // @synthesize peelLayerStartPosition=_peelLayerStartPosition;
@property(nonatomic) CGPoint meshLayerStartPosition; // @synthesize meshLayerStartPosition=_meshLayerStartPosition;
@property(nonatomic) CALayer *perspectiveLayer; // @synthesize perspectiveLayer=_perspectiveLayer;
@property(nonatomic) CALayer *meshLayer; // @synthesize meshLayer=_meshLayer;
@property(nonatomic) CALayer *peelLayer; // @synthesize peelLayer=_peelLayer;
@property(nonatomic) CALayer *dropShadowLayer; // @synthesize dropShadowLayer=_dropShadowLayer;
@property(nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) CALayer *shineLayer; // @synthesize shineLayer=_shineLayer;
@property(nonatomic) CGPoint previousPanLocationInView; // @synthesize previousPanLocationInView=_previousPanLocationInView;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) CGSize rasterizedImageSize; // @synthesize rasterizedImageSize=_rasterizedImageSize;
@property(nonatomic) CGPoint initialDragStartPosition; // @synthesize initialDragStartPosition=_initialDragStartPosition;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) CGSize initialSize; // @synthesize initialSize=_initialSize;
@property(nonatomic) CGPoint anchorOffset; // @synthesize anchorOffset=_anchorOffset;
@property(nonatomic) CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) CALayer *peelMaskLayer; // @synthesize peelMaskLayer=_peelMaskLayer;
@property(retain, nonatomic) CALayer *peelImageLayer; // @synthesize peelImageLayer=_peelImageLayer;
@property(retain, nonatomic) UIView *whiteBackground; // @synthesize whiteBackground=_whiteBackground;
@property(retain, nonatomic) UIView *plusImageView; // @synthesize plusImageView=_plusImageView;
@property(retain, nonatomic) UIView *dragView; // @synthesize dragView=_dragView;
@property(retain, nonatomic) NSArray *dragImageFrames; // @synthesize dragImageFrames=_dragImageFrames;
@property(retain, nonatomic) UIImage *currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
@property(retain, nonatomic) NSMutableDictionary *peelMaskImageCache; // @synthesize peelMaskImageCache=_peelMaskImageCache;
@property(retain, nonatomic) CKAnimatedImage *dragImage; // @synthesize dragImage=_dragImage;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) double dragViewScale; // @synthesize dragViewScale=_dragViewScale;
@property(nonatomic) BOOL canPeel; // @synthesize canPeel=_canPeel;
@property(nonatomic) BOOL canRotate; // @synthesize canRotate=_canRotate;
@property(nonatomic) BOOL canScale; // @synthesize canScale=_canScale;
@property(nonatomic) __weak id <CKBrowserDragViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)reversePeelAnimationToPoint:(CGPoint)arg1 forPlacement:(BOOL)arg2 shouldShrink:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)animateScaleDown;
- (void)animatePeelWithCompletion:(CDUnknownBlockType)arg1;
- (void)setUpPeelLayers;
- (id)scaleImage:(id)arg1 toSize:(CGSize)arg2;
- (id)peelMaskImageFromImage:(id)arg1;
- (void)animationTimerFired:(NSUInteger)arg1;
- (void)updateAnimationTimerObserving;
- (void)applyTransforms;
- (double)dragViewScaleUp;
- (void)commitDrag;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_displayLinkCallback:(id)arg1;
- (void)_detachElasticEffects;
- (void)_updateElasticEffectsForLocation:(CGPoint)arg1;
- (void)_attachElasticEffectsForLocation:(CGPoint)arg1;
- (BOOL)_orbScalingEnabled;
- (void)panGestureRecognized:(id)arg1;
- (void)manuallyUpdateDragPositionToPoint:(CGPoint)arg1;
- (void)manuallyInitializeDragAtPoint:(CGPoint)arg1;
- (void)gestureRecognized:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setPlusImageViewHidden:(BOOL)arg1;
- (void)animatePlacementAtPoint:(CGPoint)arg1 shouldShrink:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)animateBackToSourceCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double absoluteScale;
@property(readonly, nonatomic) double dragViewRotation;
@property(readonly, nonatomic) CGPoint dragViewCenter;
- (id)initWithDragImage:(id)arg1 inSourceRect:(CGRect)arg2 withSourcePoint:(CGPoint)arg3 withGestureRecognizer:(id)arg4;
- (void)dealloc;

@end

