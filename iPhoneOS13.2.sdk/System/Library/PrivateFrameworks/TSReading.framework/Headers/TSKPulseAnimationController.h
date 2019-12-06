//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKHighlightController.h>

@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController
{
    id <TSKPulseAnimationControllerProtocol> _delegate;
    BOOL _pulsating;
    BOOL _autohide;
    double _duration;
    double _pulseOffset;
}

@property(nonatomic) double pulseOffset; // @synthesize pulseOffset=_pulseOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL autohide; // @synthesize autohide=_autohide;
@property(nonatomic) BOOL pulsating; // @synthesize pulsating=_pulsating;
- (void)startAnimating;
- (BOOL)drawRoundedRect;
- (void)stop;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)disconnect;
- (void)reset;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

