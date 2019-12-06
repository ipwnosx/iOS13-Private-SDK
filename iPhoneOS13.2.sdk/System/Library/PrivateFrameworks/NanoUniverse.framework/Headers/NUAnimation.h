//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol NUAnimatable, NUAnimationObserver;

@interface NUAnimation : NSObject
{
    MISSING_TYPE *_ctrl1;
    MISSING_TYPE *_ctrl2;
    MISSING_TYPE *_values[75];
    int _valuesCount;
    float _prevTime;
    float _pauseTime;
    BOOL _repeat;
    BOOL _paused;
    float _startTime;
    float _duration;
    float _delay;
    int _frameInterval;
    NSUInteger _function;
    NSUInteger _key;
    id <NUAnimatable> _animatable;
    id <NUAnimationObserver> _observer;
    MISSING_TYPE *_from;
    MISSING_TYPE *_to;
}

@property(nonatomic) __weak id <NUAnimationObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <NUAnimatable> animatable; // @synthesize animatable=_animatable;
@property(nonatomic) NSUInteger key; // @synthesize key=_key;
@property(nonatomic) NSUInteger function; // @synthesize function=_function;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isRepeat) BOOL repeat; // @synthesize repeat=_repeat;
@property(nonatomic) MISSING_TYPE *to; // @synthesize to=_to;
@property(nonatomic) MISSING_TYPE *from; // @synthesize from=_from;
@property(nonatomic) int frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) float delay; // @synthesize delay=_delay;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
// - (void).cxx_destruct;
- (void)apply:(float)arg1;
- (BOOL)update:(float)arg1;
- (id)initWithAnimatable:(id)arg1 values:(MISSING_TYPE *)arg2 count:(int)arg3 key:(NSUInteger)arg4;

@end

