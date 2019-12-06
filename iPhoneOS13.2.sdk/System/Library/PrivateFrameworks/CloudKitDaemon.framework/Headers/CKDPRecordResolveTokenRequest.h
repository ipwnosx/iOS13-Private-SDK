//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying>
{
    NSMutableArray *_rootRecordDesiredKeys;
    NSString *_routingKey;
    NSData *_shortTokenHash;
    BOOL _forceFetch;
    BOOL _shouldFetchRootRecord;
   struct {
        unsigned int forceFetch:1;
        unsigned int shouldFetchRootRecord:1;
    } _has;
}

+ (Class)rootRecordDesiredKeysType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property(nonatomic) BOOL forceFetch; // @synthesize forceFetch=_forceFetch;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)rootRecordDesiredKeysAtIndex:(NSUInteger)arg1;
- (NSUInteger)rootRecordDesiredKeysCount;
- (void)addRootRecordDesiredKeys:(id)arg1;
- (void)clearRootRecordDesiredKeys;
@property(nonatomic) BOOL hasShouldFetchRootRecord;
@property(nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(nonatomic) BOOL hasForceFetch;
@property(readonly, nonatomic) BOOL hasShortTokenHash;
@property(readonly, nonatomic) BOOL hasRoutingKey;

@end

