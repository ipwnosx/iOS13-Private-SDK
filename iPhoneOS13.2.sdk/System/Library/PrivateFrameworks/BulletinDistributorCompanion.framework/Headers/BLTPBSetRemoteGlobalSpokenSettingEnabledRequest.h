//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@interface BLTPBSetRemoteGlobalSpokenSettingEnabledRequest : PBRequest <NSCopying>
{
    double _settingDate;
    BOOL _settingEnabled;
   struct {
        unsigned int settingDate:1;
        unsigned int settingEnabled:1;
    } _has;
}

@property(nonatomic) double settingDate; // @synthesize settingDate=_settingDate;
@property(nonatomic) BOOL settingEnabled; // @synthesize settingEnabled=_settingEnabled;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSettingDate;
@property(nonatomic) BOOL hasSettingEnabled;

@end

