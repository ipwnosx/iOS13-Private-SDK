//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying>
{
    long long _retryAfterMillis;
    NSString *_resource;
    BOOL _allowed;
   struct {
        unsigned int retryAfterMillis:1;
        unsigned int allowed:1;
    } _has;
}

@property(nonatomic) long long retryAfterMillis; // @synthesize retryAfterMillis=_retryAfterMillis;
@property(nonatomic) BOOL allowed; // @synthesize allowed=_allowed;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
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
@property(nonatomic) BOOL hasRetryAfterMillis;
@property(nonatomic) BOOL hasAllowed;
@property(readonly, nonatomic) BOOL hasResource;

@end

