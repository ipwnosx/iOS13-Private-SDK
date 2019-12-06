//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class NSError, NSUUID;

__attribute__((visibility("hidden")))
@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver>
{
    NSUUID *_lastGuidanceSignID;
    NSError *_previousSuppressedRerouteError;
}

// - (void).cxx_destruct;
- (id)_stringForLocationType:(NSUInteger)arg1;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(NSUInteger)arg3 forRoute:(id)arg4;
- (void)navigationSessionDidTimeoutInArrivalRegion:(id)arg1;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (id)init;

@end

