//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreContactManagementConsentCheck-Protocol.h>

@class STManagementState;
@protocol CNSchedulerProvider;

@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck>
{
    STManagementState *_managementState;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (NSUInteger)contactManagementConsentStateFromSTContactManagementState:(long long)arg1;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) STManagementState *managementState; // @synthesize managementState=_managementState;
// - (void).cxx_destruct;
- (id)contactManagementConsentStateFutureForDSID:(id)arg1;
- (NSUInteger)contactManagementConsentStateOfDelegateWithInfo:(id)arg1;
- (id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

@end

