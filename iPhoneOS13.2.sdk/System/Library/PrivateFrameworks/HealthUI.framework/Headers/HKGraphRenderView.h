//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HealthUI/HKGraphRenderer-Protocol.h>

@protocol HKGraphRenderDelegate;

@interface HKGraphRenderView : UIView <HKGraphRenderer>
{
    id <HKGraphRenderDelegate> renderDelegate;
    CGRect _axisRect;
}

@property(nonatomic) CGRect axisRect; // @synthesize axisRect=_axisRect;
@property(nonatomic) __weak id <HKGraphRenderDelegate> renderDelegate; // @synthesize renderDelegate;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (void)setNeedsRender;
- (CGSize)drawText:(id)arg1 atPoint:(CGPoint)arg2 spaceAvailable:(id)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(id)arg6 font:(id)arg7 clipToAxis:(BOOL)arg8 exclusion:(id)arg9;
- (void)fillRect:(CGRect)arg1 withTexture:(id)arg2;
- (void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 blendMode:(int)arg6 clipToAxes:(BOOL)arg7;
- (id)initWithFrame:(CGRect)arg1;

@end

