//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDGetUserPrivacySettingsOperation : CKDOperation
{
    long long _discoverable;
}

@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (void)main;
- (void)_handleRetrievedPrivacySettings:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

