//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
    _Bool _currentRouteIsWired;
    _Bool _playingAppIsActivelyPlaying;
    _Bool _suppressReadyStateForLock;
    _Bool _suppressStateChangesForObscured;
    unsigned long long _policyStateSerialNumber;
}

@property(readonly, nonatomic) unsigned long long policyStateSerialNumber; // @synthesize policyStateSerialNumber=_policyStateSerialNumber;
@property(readonly, nonatomic) _Bool suppressStateChangesForObscured; // @synthesize suppressStateChangesForObscured=_suppressStateChangesForObscured;
@property(readonly, nonatomic) _Bool suppressReadyStateForLock; // @synthesize suppressReadyStateForLock=_suppressReadyStateForLock;
@property(readonly, nonatomic) _Bool playingAppIsActivelyPlaying; // @synthesize playingAppIsActivelyPlaying=_playingAppIsActivelyPlaying;
@property(readonly, nonatomic) _Bool currentRouteIsWired; // @synthesize currentRouteIsWired=_currentRouteIsWired;
@property(readonly, copy, nonatomic) NSSet *allPlayingBundleIDs; // @synthesize allPlayingBundleIDs=_allPlayingBundleIDs;
@property(readonly, copy, nonatomic) NSSet *allForegroundBundleIDs; // @synthesize allForegroundBundleIDs=_allForegroundBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundPlayingBundleIDs; // @synthesize foregroundPlayingBundleIDs=_foregroundPlayingBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundReadyBundleIDs; // @synthesize foregroundReadyBundleIDs=_foregroundReadyBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundIneligibleBundleIDs; // @synthesize foregroundIneligibleBundleIDs=_foregroundIneligibleBundleIDs;
@property(readonly, copy, nonatomic) NSSet *foregroundEligibleBundleIDs; // @synthesize foregroundEligibleBundleIDs=_foregroundEligibleBundleIDs;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) _Bool anyAppIsPlaying;
@property(readonly, nonatomic) _Bool anyPlayingAppIsForeground;
@property(readonly, nonatomic) _Bool anyReadyAppIsForeground;
@property(readonly, nonatomic) _Bool anyEligibleAppIsForeground;
@property(readonly, nonatomic) _Bool anyIneligibleAppIsForeground;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
