//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject
{
    NSNumber *_entityID;
    NSString *_token;
    NSString *_dsid;
    long long _submissionType;
}

@property(readonly, nonatomic) long long submissionType; // @synthesize submissionType=_submissionType;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSNumber *entityID; // @synthesize entityID=_entityID;
// - (void).cxx_destruct;
- (id)compiledEntityID;
- (id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4;

@end

