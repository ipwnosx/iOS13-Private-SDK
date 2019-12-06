//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray;

@interface NNMKProtoMoreMessagesBatchRequest : PBRequest <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSMutableArray *_moreMessagesRequests;
//     CDStruct_a125a100 _has;
}

+ (Class)moreMessagesRequestType;
@property(retain, nonatomic) NSMutableArray *moreMessagesRequests; // @synthesize moreMessagesRequests=_moreMessagesRequests;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)moreMessagesRequestAtIndex:(NSUInteger)arg1;
- (NSUInteger)moreMessagesRequestsCount;
- (void)addMoreMessagesRequest:(id)arg1;
- (void)clearMoreMessagesRequests;
@property(nonatomic) BOOL hasFullSyncVersion;

@end

