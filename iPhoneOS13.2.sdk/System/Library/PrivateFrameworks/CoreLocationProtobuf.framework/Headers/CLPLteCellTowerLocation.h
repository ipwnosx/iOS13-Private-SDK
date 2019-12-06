//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPLteCellTowerLocation : PBCodable <NSCopying>
{
    double _cellLatitude;
    double _cellLongitude;
    NSString *_appBundleId;
    int _bandInfo;
    int _bandwidth;
    int _ci;
    int _ecn0;
    CLPLocation *_location;
    int _mcc;
    int _mnc;
    CLPCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    NSString *_operatorName;
    int _pid;
    int _rscp;
    int _rssi;
    int _serverHash;
    NSString *_serviceProviderName;
    int _tac;
    int _uarfcn;
    BOOL _isLimitedService;
    struct {
        unsigned int cellLatitude:1;
        unsigned int cellLongitude:1;
        unsigned int bandInfo:1;
        unsigned int bandwidth:1;
        unsigned int ecn0:1;
        unsigned int pid:1;
        unsigned int rscp:1;
        unsigned int rssi:1;
        unsigned int serverHash:1;
        unsigned int uarfcn:1;
        unsigned int isLimitedService:1;
    } _has;
}

+ (Class)neighborType;
@property(retain, nonatomic) NSString *serviceProviderName; // @synthesize serviceProviderName=_serviceProviderName;
@property(nonatomic) BOOL isLimitedService; // @synthesize isLimitedService=_isLimitedService;
@property(nonatomic) int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(nonatomic) double cellLongitude; // @synthesize cellLongitude=_cellLongitude;
@property(nonatomic) double cellLatitude; // @synthesize cellLatitude=_cellLatitude;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) int bandInfo; // @synthesize bandInfo=_bandInfo;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;
@property(nonatomic) int ci; // @synthesize ci=_ci;
@property(nonatomic) int tac; // @synthesize tac=_tac;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
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
@property(readonly, nonatomic) BOOL hasServiceProviderName;
@property(nonatomic) BOOL hasIsLimitedService;
@property(nonatomic) BOOL hasBandwidth;
@property(readonly, nonatomic) BOOL hasNeighborGroup;
- (id)neighborAtIndex:(NSUInteger)arg1;
- (NSUInteger)neighborsCount;
- (void)addNeighbor:(id)arg1;
- (void)clearNeighbors;
@property(nonatomic) BOOL hasRssi;
@property(nonatomic) BOOL hasRscp;
@property(nonatomic) BOOL hasEcn0;
@property(nonatomic) BOOL hasServerHash;
@property(nonatomic) BOOL hasCellLongitude;
@property(nonatomic) BOOL hasCellLatitude;
@property(readonly, nonatomic) BOOL hasOperatorName;
@property(readonly, nonatomic) BOOL hasAppBundleId;
@property(nonatomic) BOOL hasBandInfo;
@property(nonatomic) BOOL hasPid;
@property(nonatomic) BOOL hasUarfcn;

@end

