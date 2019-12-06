//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TUGutterView;

@interface UIView (AccessibilityBridging)
+ (void)ts_executeWithAnimated:(BOOL)arg1 duration:(double)arg2 setupBlock:(CDUnknownBlockType)arg3 animationBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) NSUInteger ts_accessibilityInterfaceStyleIntent;
- (void)ts_setPlusLCompositingFilter;
- (void)ts_setPlusDCompositingFilter;
- (BOOL)ts_safeAreaWidthExceedsReadableWidth;
- (void)ts_setFrameUsingCenterAndBounds:(CGRect)arg1;
@property(nonatomic, readonly) CGRect ts_frameUsingCenterAndBounds;
- (void)expandWidthToGutterViewBounds;
- (void)unclipUpToGutterView;
@property(nonatomic, readonly) TUGutterView *gutterView;
@end

