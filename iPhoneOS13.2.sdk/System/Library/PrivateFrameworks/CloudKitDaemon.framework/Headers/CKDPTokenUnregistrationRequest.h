//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CKDPTokenRegistrationBody;

__attribute__((visibility("hidden")))
@interface CKDPTokenUnregistrationRequest : PBRequest <NSCopying>
{
    CKDPTokenRegistrationBody *_tokenRegistrationBody;
}

+ (id)options;
@property(retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody; // @synthesize tokenRegistrationBody=_tokenRegistrationBody;
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
@property(readonly, nonatomic) BOOL hasTokenRegistrationBody;

@end

