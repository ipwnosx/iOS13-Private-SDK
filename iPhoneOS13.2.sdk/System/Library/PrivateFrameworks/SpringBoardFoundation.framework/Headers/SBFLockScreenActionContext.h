//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBFLockScreenActionContext : NSObject
{
    NSString *_lockLabel;
    NSString *_shortLockLabel;
    NSString *_unlockDestination;
    id /* CDUnknownBlockType */ _action;
    NSString *_identifier;
    double _fontSize;
    BOOL _requiresUIUnlock;
    BOOL _deactivateAwayController;
    BOOL _canBypassPinLock;
    BOOL _wantsBiometricPresentation;
    int _source;
    int _intent;
    BOOL _confirmedNotInPocket;
    BOOL _requiresAuthentication;
}

@property(nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) BOOL confirmedNotInPocket; // @synthesize confirmedNotInPocket=_confirmedNotInPocket;
@property(nonatomic) BOOL wantsBiometricPresentation; // @synthesize wantsBiometricPresentation=_wantsBiometricPresentation;
@property(nonatomic) BOOL canBypassPinLock; // @synthesize canBypassPinLock=_canBypassPinLock;
@property(nonatomic) BOOL deactivateAwayController; // @synthesize deactivateAwayController=_deactivateAwayController;
@property(nonatomic) BOOL requiresUIUnlock; // @synthesize requiresUIUnlock=_requiresUIUnlock;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ action; // @synthesize action=_action;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(retain, nonatomic) NSString *shortLockLabel; // @synthesize shortLockLabel=_shortLockLabel;
@property(retain, nonatomic) NSString *lockLabel; // @synthesize lockLabel=_lockLabel;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasCustomUnlockLabel;
- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(CDUnknownBlockType)arg3 identifier:(id)arg4;

@end

