//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _UIPlatterMenuPanningTransformer;

@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEnterTransitionNotchForTransformedPosition:(CGPoint)arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEndPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 velocity:(CGVector)arg4;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 touchPosition:(CGPoint)arg4 velocity:(CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(int)arg7;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didBeginPanToTransformedPosition:(CGPoint)arg2;
@end

