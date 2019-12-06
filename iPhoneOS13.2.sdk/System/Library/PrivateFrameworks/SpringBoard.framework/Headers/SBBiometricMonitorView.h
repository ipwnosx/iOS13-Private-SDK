//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface SBBiometricMonitorView : UIView
{
    UIView *_stateView;
    UIView *_presenceView;
    UIView *_poseView;
    long long _matchState;
    long long _presenceDetectState;
    long long _poseState;
}

@property(nonatomic) long long poseState; // @synthesize poseState=_poseState;
@property(nonatomic) long long presenceDetectState; // @synthesize presenceDetectState=_presenceDetectState;
@property(nonatomic) long long matchState; // @synthesize matchState=_matchState;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

