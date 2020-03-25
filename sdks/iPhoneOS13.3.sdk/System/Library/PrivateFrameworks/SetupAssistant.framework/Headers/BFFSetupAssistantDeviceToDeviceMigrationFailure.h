//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface BFFSetupAssistantDeviceToDeviceMigrationFailure : PBCodable <NSCopying>
{
    long long _errorCode;
    NSUInteger _timestamp;
    long long _underlyingErrorCode;
    int _connectionType;
    NSString *_errorDomain;
    NSString *_sourceDeviceModel;
    NSString *_sourceDeviceProductVersion;
    NSString *_targetDeviceModel;
    NSString *_targetDeviceProductVersion;
    NSString *_underlyingErrorDomain;
    BOOL _inAppleStore;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int underlyingErrorCode:1;
        unsigned int connectionType:1;
        unsigned int inAppleStore:1;
    } _has;
}

@property(nonatomic) BOOL inAppleStore; // @synthesize inAppleStore=_inAppleStore;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *targetDeviceProductVersion; // @synthesize targetDeviceProductVersion=_targetDeviceProductVersion;
@property(retain, nonatomic) NSString *targetDeviceModel; // @synthesize targetDeviceModel=_targetDeviceModel;
@property(retain, nonatomic) NSString *sourceDeviceProductVersion; // @synthesize sourceDeviceProductVersion=_sourceDeviceProductVersion;
@property(retain, nonatomic) NSString *sourceDeviceModel; // @synthesize sourceDeviceModel=_sourceDeviceModel;
@property(nonatomic) long long underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasInAppleStore;
@property(nonatomic) BOOL hasConnectionType;
@property(readonly, nonatomic) BOOL hasTargetDeviceProductVersion;
@property(readonly, nonatomic) BOOL hasTargetDeviceModel;
@property(readonly, nonatomic) BOOL hasSourceDeviceProductVersion;
@property(readonly, nonatomic) BOOL hasSourceDeviceModel;
@property(nonatomic) BOOL hasUnderlyingErrorCode;
@property(readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasTimestamp;

@end
