//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue, _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol;

__attribute__((visibility("hidden")))
@interface _UIKBRTRecognizer : NSObject
{
    BOOL _isWaiting;
    BOOL _disableHomeRowReturn;
    id <_UIKBRTRecognizerDelegate> _delegate;
    id <_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;
    id <_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;
    NSMutableSet *_definitiveRules;
    NSMutableSet *_averagingRules;
    double _maximumNonRestMoveDistance;
    NSObject<OS_dispatch_queue> *_touchQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_touchInfos;
    NSMutableSet *_activeTouches;
    NSObject<OS_dispatch_queue> *_activeTouchesQueue;
    NSMutableArray *_ignoredTouches;
    NSObject<OS_dispatch_queue> *_ignoredTouchesQueue;
    NSUInteger _numProlongedTouches;
    double _touchIntervalAverage;
    CGSize _clusterRestHaloSize;
}

@property(nonatomic) double touchIntervalAverage; // @synthesize touchIntervalAverage=_touchIntervalAverage;
@property(nonatomic) NSUInteger numProlongedTouches; // @synthesize numProlongedTouches=_numProlongedTouches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue; // @synthesize ignoredTouchesQueue=_ignoredTouchesQueue;
@property(retain, nonatomic) NSMutableArray *ignoredTouches; // @synthesize ignoredTouches=_ignoredTouches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue; // @synthesize activeTouchesQueue=_activeTouchesQueue;
@property(retain, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(retain, nonatomic) NSMutableArray *touchInfos; // @synthesize touchInfos=_touchInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // @synthesize touchQueue=_touchQueue;
@property(nonatomic) double maximumNonRestMoveDistance; // @synthesize maximumNonRestMoveDistance=_maximumNonRestMoveDistance;
@property(nonatomic) CGSize clusterRestHaloSize; // @synthesize clusterRestHaloSize=_clusterRestHaloSize;
@property(nonatomic) BOOL disableHomeRowReturn; // @synthesize disableHomeRowReturn=_disableHomeRowReturn;
@property(readonly, nonatomic) NSMutableSet *averagingRules; // @synthesize averagingRules=_averagingRules;
@property(readonly, nonatomic) NSMutableSet *definitiveRules; // @synthesize definitiveRules=_definitiveRules;
@property(retain, nonatomic) id <_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker; // @synthesize touchTracker=_touchTracker;
@property(retain, nonatomic) id <_UIKBRTRecognizerTouchLoggingProtocol> touchLogger; // @synthesize touchLogger=_touchLogger;
@property(nonatomic) id <_UIKBRTRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)kbStatusMessage:(id)arg1;
- (void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2;
- (void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 withMessage:(id)arg3;
- (void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 because:(id)arg3;
- (BOOL)makeTouchActive:(id)arg1;
- (void)cancelTouchOnLayoutWithTouchInfo:(id)arg1;
- (void)notifyDelegateOfRestingTouch:(id)arg1;
- (void)notifyDelegateOfIgnoringTouch:(id)arg1;
- (BOOL)queryDelegateOfRestingTouch:(id)arg1;
- (BOOL)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(BOOL)arg2;
- (void)notifyDelegateOfMovedIgnoredTouch:(id)arg1;
- (BOOL)notifyDelegateOfMovedTouch:(id)arg1;
- (void)notifyDelegateOfCancelledTouch:(id)arg1;
- (void)notifyDelegateOfSuccessfulTouch:(id)arg1;
- (BOOL)queryDelegateToBeginTouch:(id)arg1 forBeginState:(NSUInteger)arg2 restartIfNecessary:(BOOL)arg3;
- (BOOL)removedFromActiveTouches:(id)arg1;
- (BOOL)addedToActiveTouches:(id)arg1;
- (void)processTouchInfo:(id)arg1;
- (void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(BOOL)arg3;
- (void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2;
- (void)_doIgnoreTouchWithTouchInfo:(id)arg1;
- (void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2;
- (void)_doMarkTouchProcessedWithTouchInfo:(id)arg1;
- (void)touchCancelled:(id)arg1 withIdentifier:(id)arg2;
- (void)_doCancelledTouchWithTouchInfo:(id)arg1;
- (void)touchUp:(id)arg1 withIdentifier:(id)arg2;
- (void)_doEndedTouchWithTouchInfo:(id)arg1;
- (void)touchDragged:(id)arg1 withIdentifier:(id)arg2;
- (void)_doMovedTouchWithTouchInfo:(id)arg1;
- (void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3;
- (void)_doBeginTouchWithTouchInfo:(id)arg1;
- (void)letRulesModifyPendingTouchInfo:(id)arg1;
- (float)letRulesModifyNewTouchInfo:(id)arg1;
- (void)setStandardKeyPixelSize:(CGSize)arg1;
- (void)reset;
- (id)init;

@end

