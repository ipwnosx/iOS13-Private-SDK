//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppSwitcherSnapshotCacheEntry, SBDeviceApplicationSceneHandle;

@interface SBAppSwitcherSnapshotViewState : NSObject
{
    BOOL _animatingTransition;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBAppSwitcherSnapshotCacheEntry *_cacheEntry;
}

@property(nonatomic, getter=isAnimatingTransition) BOOL animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property(retain, nonatomic) SBAppSwitcherSnapshotCacheEntry *cacheEntry; // @synthesize cacheEntry=_cacheEntry;
@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
// - (void).cxx_destruct;

@end
