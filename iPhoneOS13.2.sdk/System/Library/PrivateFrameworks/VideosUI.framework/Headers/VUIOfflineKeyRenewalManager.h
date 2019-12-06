//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, TVPContentKeySession, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUIOfflineKeyRenewalManager : NSObject
{
    BOOL _networkErrorOccurredDuringInvalidation;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_keyLoaders;
    NSTimer *_keyRenewalTimer;
    NSTimer *_expirationTimer;
    TVPContentKeySession *_contentKeySession;
    NSUInteger _backgroundTaskIdentifier;
}

+ (id)sharedInstance;
@property(nonatomic) NSUInteger backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) TVPContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(retain, nonatomic) NSTimer *keyRenewalTimer; // @synthesize keyRenewalTimer=_keyRenewalTimer;
@property(nonatomic) BOOL networkErrorOccurredDuringInvalidation; // @synthesize networkErrorOccurredDuringInvalidation=_networkErrorOccurredDuringInvalidation;
@property(retain, nonatomic) NSMutableArray *keyLoaders; // @synthesize keyLoaders=_keyLoaders;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
// - (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (void)_sendRenewalRequestForFirstArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_expirationTimerDidFire:(id)arg1;
- (void)_renewalTimerDidFire:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)updateKeyRenewalAndExpiration;
- (id)init;

@end

