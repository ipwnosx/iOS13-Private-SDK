//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperationHeader : PBCodable <NSCopying>
{
    NSMutableArray *_assetAuthorizationResponses;
}

+ (Class)assetAuthorizationResponsesType;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
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
- (id)assetAuthorizationResponsesAtIndex:(NSUInteger)arg1;
- (NSUInteger)assetAuthorizationResponsesCount;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (void)clearAssetAuthorizationResponses;

@end

