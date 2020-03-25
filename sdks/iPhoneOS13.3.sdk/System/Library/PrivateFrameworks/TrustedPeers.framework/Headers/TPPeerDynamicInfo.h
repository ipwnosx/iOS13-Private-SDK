//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSSet;

@interface TPPeerDynamicInfo : NSObject
{
    NSUInteger _clock;
    NSSet *_includedPeerIDs;
    NSSet *_excludedPeerIDs;
    NSDictionary *_dispositions;
    NSSet *_preapprovals;
    NSData *_data;
    NSData *_sig;
}

+ (id)dynamicInfoWithData:(id)arg1 sig:(id)arg2;
+ (id)dynamicInfoWithClock:(NSUInteger)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 signingKeyPair:(id)arg6 error:(id )arg7;
+ (id)dynamicInfoPBWithClock:(NSUInteger)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5;
@property(retain, nonatomic) NSData *sig; // @synthesize sig=_sig;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSSet *preapprovals; // @synthesize preapprovals=_preapprovals;
@property(retain, nonatomic) NSDictionary *dispositions; // @synthesize dispositions=_dispositions;
@property(readonly, nonatomic) NSSet *excludedPeerIDs; // @synthesize excludedPeerIDs=_excludedPeerIDs;
@property(readonly, nonatomic) NSSet *includedPeerIDs; // @synthesize includedPeerIDs=_includedPeerIDs;
@property(readonly, nonatomic) NSUInteger clock; // @synthesize clock=_clock;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPeerDynamicInfo:(id)arg1;
- (BOOL)checkSignatureWithKey:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3;

@end
