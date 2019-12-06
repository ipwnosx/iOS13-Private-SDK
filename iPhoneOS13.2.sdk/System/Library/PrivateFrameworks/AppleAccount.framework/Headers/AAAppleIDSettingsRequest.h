//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAAppleIDSettingsRequest : AARequest
{
    ACAccountStore *_store;
    BOOL _forceGSToken;
    ACAccount *_grandSlamAccount;
}

+ (Class)responseClass;
@property(nonatomic) BOOL forceGSToken; // @synthesize forceGSToken=_forceGSToken;
@property(readonly, nonatomic) ACAccount *grandSlamAccount; // @synthesize grandSlamAccount=_grandSlamAccount;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;

@end

