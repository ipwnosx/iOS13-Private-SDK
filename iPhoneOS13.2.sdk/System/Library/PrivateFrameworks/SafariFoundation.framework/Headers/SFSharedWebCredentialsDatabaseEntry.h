//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject
{
    BOOL _approved;
    NSString *_domain;
    NSString *_appID;
    long long _service;
}

@property(readonly, nonatomic, getter=isApproved) BOOL approved; // @synthesize approved=_approved;
@property(readonly, nonatomic) long long service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (id)description;
- (id)_initWithDomain:(id)arg1 appID:(id)arg2 service:(long long)arg3 isApproved:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1;

@end

