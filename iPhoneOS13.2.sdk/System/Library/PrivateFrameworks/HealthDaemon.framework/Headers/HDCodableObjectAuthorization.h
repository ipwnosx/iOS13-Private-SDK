//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying>
{
    NSMutableArray *_authorizations;
    NSData *_objectUUID;
}

+ (Class)authorizationsType;
@property(retain, nonatomic) NSMutableArray *authorizations; // @synthesize authorizations=_authorizations;
@property(retain, nonatomic) NSData *objectUUID; // @synthesize objectUUID=_objectUUID;
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
- (id)authorizationsAtIndex:(NSUInteger)arg1;
- (NSUInteger)authorizationsCount;
- (void)addAuthorizations:(id)arg1;
- (void)clearAuthorizations;
@property(readonly, nonatomic) BOOL hasObjectUUID;

@end

