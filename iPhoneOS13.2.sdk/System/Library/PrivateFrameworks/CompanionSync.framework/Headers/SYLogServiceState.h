//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSDictionary, NSMutableArray, NSString, SYLogDeviceState, SYLogEngineState, SYLogSessionState;

__attribute__((visibility("hidden")))
@interface SYLogServiceState : PBCodable <NSCopying>
{
    SYLogEngineState *_engine;
    int _enqueuedSyncType;
    NSString *_name;
    NSString *_peerGenerationID;
    NSString *_peerID;
    int _serviceType;
    SYLogSessionState *_session;
    SYLogDeviceState *_targetedDevice;
    NSMutableArray *_transportOptions;
    BOOL _sessionQueueRunning;
   struct {
        unsigned int serviceType:1;
    } _has;
}

+ (Class)transportOptionsType;
@property(retain, nonatomic) NSString *peerGenerationID; // @synthesize peerGenerationID=_peerGenerationID;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) NSMutableArray *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(nonatomic) int enqueuedSyncType; // @synthesize enqueuedSyncType=_enqueuedSyncType;
@property(retain, nonatomic) SYLogDeviceState *targetedDevice; // @synthesize targetedDevice=_targetedDevice;
@property(nonatomic) BOOL sessionQueueRunning; // @synthesize sessionQueueRunning=_sessionQueueRunning;
@property(retain, nonatomic) SYLogSessionState *session; // @synthesize session=_session;
@property(retain, nonatomic) SYLogEngineState *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
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
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) BOOL hasPeerGenerationID;
@property(readonly, nonatomic) BOOL hasPeerID;
- (id)transportOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)transportOptionsCount;
- (void)addTransportOptions:(id)arg1;
- (void)clearTransportOptions;
- (int)StringAsEnqueuedSyncType:(id)arg1;
- (id)enqueuedSyncTypeAsString:(int)arg1;
@property(readonly, nonatomic) BOOL hasTargetedDevice;
@property(readonly, nonatomic) BOOL hasSession;
@property(readonly, nonatomic) BOOL hasEngine;
@property(retain, nonatomic) NSDictionary *cocoaTransportOptions;

@end

