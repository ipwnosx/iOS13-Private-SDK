//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying>
{
    NSMutableArray *_setupFields;
    BOOL _cameraFirstProvisioningEnabled;
   struct {
        unsigned int cameraFirstProvisioningEnabled:1;
    } _has;
}

+ (Class)setupFieldsType;
@property(retain, nonatomic) NSMutableArray *setupFields; // @synthesize setupFields=_setupFields;
@property(nonatomic) BOOL cameraFirstProvisioningEnabled; // @synthesize cameraFirstProvisioningEnabled=_cameraFirstProvisioningEnabled;
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
- (id)setupFieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)setupFieldsCount;
- (void)addSetupFields:(id)arg1;
- (void)clearSetupFields;
@property(nonatomic) BOOL hasCameraFirstProvisioningEnabled;

@end

