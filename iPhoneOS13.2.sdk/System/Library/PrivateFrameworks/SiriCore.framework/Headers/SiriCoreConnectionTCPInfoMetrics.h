//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SiriCoreConnectionTCPInfoMetrics : NSObject
{
    NSString *_interfaceName;
    NSNumber *_rttCurrent;
    NSNumber *_rttSmoothed;
    NSNumber *_rttVariance;
    NSNumber *_rttBest;
    NSNumber *_packetsSent;
    NSNumber *_bytesSent;
    NSNumber *_bytesRetransmitted;
    NSNumber *_bytesUnacked;
    NSNumber *_packetsReceived;
    NSNumber *_bytesReceived;
    NSNumber *_duplicateBytesReceived;
    NSNumber *_outOfOrderBytesReceived;
    NSNumber *_sendBandwidth;
    NSNumber *_synRetransmits;
    NSNumber *_tfoSynDataAcked;
}

@property(readonly, copy, nonatomic) NSNumber *tfoSynDataAcked; // @synthesize tfoSynDataAcked=_tfoSynDataAcked;
@property(readonly, copy, nonatomic) NSNumber *synRetransmits; // @synthesize synRetransmits=_synRetransmits;
@property(readonly, copy, nonatomic) NSNumber *sendBandwidth; // @synthesize sendBandwidth=_sendBandwidth;
@property(readonly, copy, nonatomic) NSNumber *outOfOrderBytesReceived; // @synthesize outOfOrderBytesReceived=_outOfOrderBytesReceived;
@property(readonly, copy, nonatomic) NSNumber *duplicateBytesReceived; // @synthesize duplicateBytesReceived=_duplicateBytesReceived;
@property(readonly, copy, nonatomic) NSNumber *bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, copy, nonatomic) NSNumber *packetsReceived; // @synthesize packetsReceived=_packetsReceived;
@property(readonly, copy, nonatomic) NSNumber *bytesUnacked; // @synthesize bytesUnacked=_bytesUnacked;
@property(readonly, copy, nonatomic) NSNumber *bytesRetransmitted; // @synthesize bytesRetransmitted=_bytesRetransmitted;
@property(readonly, copy, nonatomic) NSNumber *bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, copy, nonatomic) NSNumber *packetsSent; // @synthesize packetsSent=_packetsSent;
@property(readonly, copy, nonatomic) NSNumber *rttBest; // @synthesize rttBest=_rttBest;
@property(readonly, copy, nonatomic) NSNumber *rttVariance; // @synthesize rttVariance=_rttVariance;
@property(readonly, copy, nonatomic) NSNumber *rttSmoothed; // @synthesize rttSmoothed=_rttSmoothed;
@property(readonly, copy, nonatomic) NSNumber *rttCurrent; // @synthesize rttCurrent=_rttCurrent;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
// - (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithInterfaceName:(id)arg1 rttCurrent:(id)arg2 rttSmoothed:(id)arg3 rttVariance:(id)arg4 rttBest:(id)arg5 packetsSent:(id)arg6 bytesSent:(id)arg7 bytesRetransmitted:(id)arg8 bytesUnacked:(id)arg9 packetsReceived:(id)arg10 bytesReceived:(id)arg11 duplicateBytesReceived:(id)arg12 outOfOrderBytesReceived:(id)arg13 sendBandwidth:(id)arg14 synRetransmits:(id)arg15 tfoSynDataAcked:(id)arg16;

@end

