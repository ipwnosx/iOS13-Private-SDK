//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer;

@interface CAMZoomDialDotsView : UIView
{
    double _dotSpacingAngle;
    CALayer *__dotLayer;
}

+ (Class)layerClass;
@property(readonly, nonatomic) CALayer *_dotLayer; // @synthesize _dotLayer=__dotLayer;
@property(nonatomic) double dotSpacingAngle; // @synthesize dotSpacingAngle=_dotSpacingAngle;
// - (void).cxx_destruct;
@property(nonatomic) CGPoint dotCenter;
@property(nonatomic) long long dotCount;
- (id)initWithDotImage:(id)arg1;
- (id)_replicatorLayer;

@end

