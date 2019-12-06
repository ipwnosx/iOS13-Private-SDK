//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying>
{
    float _ingestionProgress;
    int _ingestionState;
    NSString *_physicalCardImageURL;
    NSString *_subtitle;
    NSString *_title;
   struct {
        unsigned int ingestionProgress:1;
        unsigned int ingestionState:1;
    } _has;
}

@property(nonatomic) float ingestionProgress; // @synthesize ingestionProgress=_ingestionProgress;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *physicalCardImageURL; // @synthesize physicalCardImageURL=_physicalCardImageURL;
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
@property(nonatomic) BOOL hasIngestionProgress;
- (int)StringAsIngestionState:(id)arg1;
- (id)ingestionStateAsString:(int)arg1;
@property(nonatomic) BOOL hasIngestionState;
@property(nonatomic) int ingestionState; // @synthesize ingestionState=_ingestionState;
@property(readonly, nonatomic) BOOL hasSubtitle;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) BOOL hasPhysicalCardImageURL;

@end

