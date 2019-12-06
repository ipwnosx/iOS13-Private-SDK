//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MNNavigationServiceObserver-Protocol.h>

@class GEOSharedNavState, NSString;
@protocol MSPNavigationListenerDelegate;

__attribute__((visibility("hidden")))
@interface MSPNavigationListener : NSObject <MNNavigationServiceObserver>
{
    GEOSharedNavState *_state;
    NSString *_navSessionID;
    id <MSPNavigationListenerDelegate> _delegate;
    GEOSharedNavState *_currentState;
}

@property(retain, nonatomic) GEOSharedNavState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <MSPNavigationListenerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)navigationServiceDidArrive:(id)arg1;
- (void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2;
- (void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationService:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)navigationService:(id)arg1 didFailWithError:(id)arg2;
- (int)_referenceFrameForDestination:(id)arg1;
- (void)_updateETA:(double)arg1 distance:(double)arg2;
- (void)_updateLocation:(id)arg1;
- (void)_updateTraffic:(id)arg1;
- (void)_updateRoute:(id)arg1;
@property(readonly, nonatomic) BOOL isInNavigatingState;
- (void)dealloc;
- (void)_initState;
- (id)init;

@end

