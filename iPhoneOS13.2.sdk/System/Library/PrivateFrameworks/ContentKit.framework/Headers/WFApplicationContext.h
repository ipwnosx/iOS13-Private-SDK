//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSLock, NSMutableDictionary, NSString;
@protocol WFApplicationContextProvider;

@interface WFApplicationContext : NSObject
{
    BOOL _canLoadShortcutsDatabase;
    BOOL _inactive;
    BOOL _inBackground;
    BOOL _canLoadShortcutsDatabaseEntitlementChecked;
    id <WFApplicationContextProvider> _provider;
    NSBundle *_applicationBundle;
    NSMutableDictionary *_applicationStateObserversByEvent;
    NSLock *_observersLock;
}

+ (id)sharedContext;
+ (id)imageNamed:(id)arg1;
@property(nonatomic) BOOL canLoadShortcutsDatabaseEntitlementChecked; // @synthesize canLoadShortcutsDatabaseEntitlementChecked=_canLoadShortcutsDatabaseEntitlementChecked;
@property(nonatomic) BOOL inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) BOOL inactive; // @synthesize inactive=_inactive;
@property(readonly, nonatomic) NSLock *observersLock; // @synthesize observersLock=_observersLock;
@property(retain, nonatomic) NSMutableDictionary *applicationStateObserversByEvent; // @synthesize applicationStateObserversByEvent=_applicationStateObserversByEvent;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canLoadShortcutsDatabase; // @synthesize canLoadShortcutsDatabase=_canLoadShortcutsDatabase;
@property(nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
- (id)applicationOrNil;
- (id)keyWindow;
@property(readonly, nonatomic) BOOL shouldReverseLayoutDirection;
@property(readonly, nonatomic) NSBundle *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property(readonly, nonatomic) NSString *currentUserInterfaceType;
@property(readonly, nonatomic) NSBundle *bundle;
@property(readonly, nonatomic) NSArray *applicationBundleURLSchemes;
- (void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
@property(readonly, nonatomic) long long applicationState;
- (void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)handleApplicationStateEvent:(long long)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)dealloc;
@property(retain, nonatomic) id <WFApplicationContextProvider> provider; // @synthesize provider=_provider;
- (id)init;

@end

