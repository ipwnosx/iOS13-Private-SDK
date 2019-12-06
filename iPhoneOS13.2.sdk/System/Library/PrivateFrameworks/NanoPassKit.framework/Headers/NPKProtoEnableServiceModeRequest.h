//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface NPKProtoEnableServiceModeRequest : PBRequest <NSCopying>
{
    NSString *_uniqueID;
    BOOL _cancelOutstandingRequests;
   struct {
        unsigned int cancelOutstandingRequests:1;
    } _has;
}

@property(nonatomic) BOOL cancelOutstandingRequests; // @synthesize cancelOutstandingRequests=_cancelOutstandingRequests;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
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
@property(nonatomic) BOOL hasCancelOutstandingRequests;
@property(readonly, nonatomic) BOOL hasUniqueID;

@end

