//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAEmailVettingRequest : AARequest
{
    ACAccount *_account;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

