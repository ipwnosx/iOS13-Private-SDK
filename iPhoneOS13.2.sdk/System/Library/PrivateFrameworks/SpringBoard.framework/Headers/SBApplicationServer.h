//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSServiceFacility.h>

@protocol SBApplicationServerHarmonyDelegate, SBApplicationServerMiscDelegate, SBApplicationServerMultiwindowDelegate, SBApplicationServerShortcutDelegate;

@interface SBApplicationServer : FBSServiceFacility
{
    id <SBApplicationServerMiscDelegate> _miscDelegate;
    id <SBApplicationServerHarmonyDelegate> _harmonyDelegate;
    id <SBApplicationServerShortcutDelegate> _shortcutDelegate;
    id <SBApplicationServerMultiwindowDelegate> _multiwindowDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <SBApplicationServerMultiwindowDelegate> multiwindowDelegate; // @synthesize multiwindowDelegate=_multiwindowDelegate;
@property(nonatomic) __weak id <SBApplicationServerShortcutDelegate> shortcutDelegate; // @synthesize shortcutDelegate=_shortcutDelegate;
@property(nonatomic) __weak id <SBApplicationServerHarmonyDelegate> harmonyDelegate; // @synthesize harmonyDelegate=_harmonyDelegate;
@property(nonatomic) __weak id <SBApplicationServerMiscDelegate> miscDelegate; // @synthesize miscDelegate=_miscDelegate;
// - (void).cxx_destruct;
- (void)_handleMultiwindowShortcutServiceClientMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutUpdateDynamicApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutFetchApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleDeleteApplicationSnapshots:(id)arg1 fromClient:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)dealloc;
- (id)_init;

@end

