//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying>
{
    NSString *_composedMessageId;
    int _progress;
   struct {
        unsigned int progress:1;
    } _has;
}

@property(nonatomic) int progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *composedMessageId; // @synthesize composedMessageId=_composedMessageId;
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
@property(nonatomic) BOOL hasProgress;
@property(readonly, nonatomic) BOOL hasComposedMessageId;

@end

