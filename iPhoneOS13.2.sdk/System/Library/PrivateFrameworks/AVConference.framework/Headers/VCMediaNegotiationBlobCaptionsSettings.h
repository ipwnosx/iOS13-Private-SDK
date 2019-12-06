//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying>
{
    unsigned int _senderLanguages;
    BOOL _canDisplayCaptions;
    struct {
        unsigned int senderLanguages:1;
        unsigned int canDisplayCaptions:1;
    } _has;
}

@property(nonatomic) unsigned int senderLanguages; // @synthesize senderLanguages=_senderLanguages;
@property(nonatomic) BOOL canDisplayCaptions; // @synthesize canDisplayCaptions=_canDisplayCaptions;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSenderLanguages;
@property(nonatomic) BOOL hasCanDisplayCaptions;

@end

