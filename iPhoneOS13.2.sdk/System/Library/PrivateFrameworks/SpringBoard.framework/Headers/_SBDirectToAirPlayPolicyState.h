//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _SBDirectToAirPlayPolicyState : NSObject
{
    NSString *_routeName;
    NSSet *_foregroundIneligibleBundleIDs;
    NSSet *_foregroundEligibleBundleIDs;
    NSSet *_foregroundReadyBundleIDs;
    NSSet *_foregroundPlayingBundleIDs;
    NSSet *_allForegroundBundleIDs;
    NSSet *_allPlayingBundleIDs;
    BOOL _currentRouteIsWired;
    BOOL _playingAppIsActivelyPlaying;
    BOOL _suppressReadyStateForLock;
    BOOL _suppressStateChangesForObscured;
    NSUInteger _policyStateSerialNumber;
}

@property(readonly, nonatomic) NSUInteger policyStateSerialNumber; // @synthesize policyStateSerialNumber=_policyStateSerialNumber;
@property(readonly, nonatomic) BOOL suppressStateChangesForObscured; // @synthesize suppressStateChangesForObscured=_suppressStateChangesForObscured;
@property(readonly, nonatomic) BOOL suppressReadyStateForLock; // @synthesize suppressReadyStateForLock=_suppressReadyStateForLock;
@property(readonly, nonatomic) BOOL playingAppIsActivelyPlaying; // @synthesize playingAppIsActivelyPlaying=_playingAppIsActivelyPlaying;
@property(readonly, nonatomic) BOOL currentRouteIsWired; // @synthesize currentRouteIsWired=_currentRouteIsWired;
@property(readonly, copy, nonatomic) NSSet *allPlayingBundleIDs; // @synthesize allPlayingBundleIDs=_allPlayingBundleIDs;
@property(readonly, copy, nonatomic) NSSet *allForegroundBundleIDs; // @synthesize allForegroundBundleIDs=_allForegroundBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundPlayingBundleIDs; // @synthesize foregroundPlayingBundleIDs=_foregroundPlayingBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundReadyBundleIDs; // @synthesize foregroundReadyBundleIDs=_foregroundReadyBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundIneligibleBundleIDs; // @synthesize foregroundIneligibleBundleIDs=_foregroundIneligibleBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundEligibleBundleIDs; // @synthesize foregroundEligibleBundleIDs=_foregroundEligibleBundleIDs;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL anyAppIsPlaying;
@property(readonly, nonatomic) BOOL anyPlayingAppIsForeground;
@property(readonly, nonatomic) BOOL anyReadyAppIsForeground;
@property(readonly, nonatomic) BOOL anyEligibleAppIsForeground;
@property(readonly, nonatomic) BOOL anyIneligibleAppIsForeground;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

