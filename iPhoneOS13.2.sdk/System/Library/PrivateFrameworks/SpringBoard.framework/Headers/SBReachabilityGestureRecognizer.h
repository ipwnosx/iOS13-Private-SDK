//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBReachabilitySettings, SBTouchHistory, UITouch;

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer
{
    BOOL _everTranslatedUpwards;
    BOOL _movedPastHysteresis;
    SBTouchHistory *_touchHistory;
    UITouch *_activeTouch;
    SBReachabilitySettings *_settings;
    CGPoint _initialTouchLocation;
}

@property(retain, nonatomic) SBReachabilitySettings *settings; // @synthesize settings=_settings;
@property(nonatomic) BOOL movedPastHysteresis; // @synthesize movedPastHysteresis=_movedPastHysteresis;
@property(nonatomic) BOOL everTranslatedUpwards; // @synthesize everTranslatedUpwards=_everTranslatedUpwards;
@property(nonatomic) CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
// - (void).cxx_destruct;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

