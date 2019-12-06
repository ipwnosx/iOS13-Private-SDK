//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/CMPocketStateDelegate-Protocol.h>

@class CMPocketStateManager;

@interface SASSiriPocketStateManager : NSObject <CMPocketStateDelegate>
{
    BOOL _pocketStateShouldPreventVoiceTrigger;
    CMPocketStateManager *_pocketStateManager;
    long long _currentPocketState;
}

+ (id)new;
+ (id)sharedManager;
@property(nonatomic, getter=_pocketStateShouldPreventVoiceTrigger, setter=_setPocketStateShouldPreventVoiceTrigger:) BOOL pocketStateShouldPreventVoiceTrigger; // @synthesize pocketStateShouldPreventVoiceTrigger=_pocketStateShouldPreventVoiceTrigger;
@property(nonatomic, getter=_currentPocketState, setter=_setCurrentPocketState:) long long currentPocketState; // @synthesize currentPocketState=_currentPocketState;
@property(retain, nonatomic, getter=_pocketStateManager, setter=_setPocketStateManager:) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
// - (void).cxx_destruct;
- (id)_stringForPocketState:(long long)arg1;
- (void)_updateForPocketState:(long long)arg1;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (long long)currentPocketState;
- (void)queryForPocketStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)_init;

@end

