//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSgPTPPortStatistics : NSObject
{
    int _portType;
    int _portRole;
    unsigned int _receivedSyncCounter;
    unsigned int _receivedFollowUpCounter;
    unsigned int _receivedAnnounceCounter;
    unsigned int _receivedSignalCounter;
    unsigned int _receivedPacketDiscardCounter;
    unsigned int _syncReceiptTimeoutCounter;
    unsigned int _announceReceiptTimeoutCounter;
    unsigned int _allowedLostResponsesExceededCounter;
    unsigned int _transmittedSyncCounter;
    unsigned int _transmittedFollowUpCounter;
    unsigned int _transmittedAnnounceCounter;
    unsigned int _transmittedSignalCounter;
    unsigned int _transmittedPacketDiscardCounter;
    unsigned int _attemptedSyncCounter;
    unsigned int _attemptedFollowUpCounter;
    unsigned int _attemptedAnnounceCounter;
    unsigned int _attemptedSignalCounter;
    unsigned int _rawDelayExceededCounter;
    unsigned int _rawDelayMeasurementCounter;
    unsigned int _receivedPDelayRequestCounter;
    unsigned int _transmittedPDelayResponseCounter;
    unsigned int _transmittedPDelayResponseFollowUpCounter;
    unsigned int _attemptedPDelayResponseCounter;
    unsigned int _attemptedPDelayResponseFollowUpCounter;
    unsigned int _transmittedPDelayRequestCounter;
    unsigned int _attemptedPDelayRequestCounter;
    unsigned int _receivedPDelayResponseCounter;
    unsigned int _receivedPDelayResponseFollowUpCounter;
    unsigned int _receivedDelayRequestCounter;
    unsigned int _transmittedDelayResponseCounter;
    unsigned int _attemptedDelayResponseCounter;
    unsigned int _transmittedDelayRequestCounter;
    unsigned int _attemptedDelayRequestCounter;
    unsigned int _receivedDelayResponseCounter;
    NSString *_portIdentifier;
}

@property(readonly, nonatomic) unsigned int receivedDelayResponseCounter; // @synthesize receivedDelayResponseCounter=_receivedDelayResponseCounter;
@property(readonly, nonatomic) unsigned int attemptedDelayRequestCounter; // @synthesize attemptedDelayRequestCounter=_attemptedDelayRequestCounter;
@property(readonly, nonatomic) unsigned int transmittedDelayRequestCounter; // @synthesize transmittedDelayRequestCounter=_transmittedDelayRequestCounter;
@property(readonly, nonatomic) unsigned int attemptedDelayResponseCounter; // @synthesize attemptedDelayResponseCounter=_attemptedDelayResponseCounter;
@property(readonly, nonatomic) unsigned int transmittedDelayResponseCounter; // @synthesize transmittedDelayResponseCounter=_transmittedDelayResponseCounter;
@property(readonly, nonatomic) unsigned int receivedDelayRequestCounter; // @synthesize receivedDelayRequestCounter=_receivedDelayRequestCounter;
@property(readonly, nonatomic) unsigned int receivedPDelayResponseFollowUpCounter; // @synthesize receivedPDelayResponseFollowUpCounter=_receivedPDelayResponseFollowUpCounter;
@property(readonly, nonatomic) unsigned int receivedPDelayResponseCounter; // @synthesize receivedPDelayResponseCounter=_receivedPDelayResponseCounter;
@property(readonly, nonatomic) unsigned int attemptedPDelayRequestCounter; // @synthesize attemptedPDelayRequestCounter=_attemptedPDelayRequestCounter;
@property(readonly, nonatomic) unsigned int transmittedPDelayRequestCounter; // @synthesize transmittedPDelayRequestCounter=_transmittedPDelayRequestCounter;
@property(readonly, nonatomic) unsigned int attemptedPDelayResponseFollowUpCounter; // @synthesize attemptedPDelayResponseFollowUpCounter=_attemptedPDelayResponseFollowUpCounter;
@property(readonly, nonatomic) unsigned int attemptedPDelayResponseCounter; // @synthesize attemptedPDelayResponseCounter=_attemptedPDelayResponseCounter;
@property(readonly, nonatomic) unsigned int transmittedPDelayResponseFollowUpCounter; // @synthesize transmittedPDelayResponseFollowUpCounter=_transmittedPDelayResponseFollowUpCounter;
@property(readonly, nonatomic) unsigned int transmittedPDelayResponseCounter; // @synthesize transmittedPDelayResponseCounter=_transmittedPDelayResponseCounter;
@property(readonly, nonatomic) unsigned int receivedPDelayRequestCounter; // @synthesize receivedPDelayRequestCounter=_receivedPDelayRequestCounter;
@property(readonly, nonatomic) unsigned int rawDelayMeasurementCounter; // @synthesize rawDelayMeasurementCounter=_rawDelayMeasurementCounter;
@property(readonly, nonatomic) unsigned int rawDelayExceededCounter; // @synthesize rawDelayExceededCounter=_rawDelayExceededCounter;
@property(readonly, nonatomic) unsigned int attemptedSignalCounter; // @synthesize attemptedSignalCounter=_attemptedSignalCounter;
@property(readonly, nonatomic) unsigned int attemptedAnnounceCounter; // @synthesize attemptedAnnounceCounter=_attemptedAnnounceCounter;
@property(readonly, nonatomic) unsigned int attemptedFollowUpCounter; // @synthesize attemptedFollowUpCounter=_attemptedFollowUpCounter;
@property(readonly, nonatomic) unsigned int attemptedSyncCounter; // @synthesize attemptedSyncCounter=_attemptedSyncCounter;
@property(readonly, nonatomic) unsigned int transmittedPacketDiscardCounter; // @synthesize transmittedPacketDiscardCounter=_transmittedPacketDiscardCounter;
@property(readonly, nonatomic) unsigned int transmittedSignalCounter; // @synthesize transmittedSignalCounter=_transmittedSignalCounter;
@property(readonly, nonatomic) unsigned int transmittedAnnounceCounter; // @synthesize transmittedAnnounceCounter=_transmittedAnnounceCounter;
@property(readonly, nonatomic) unsigned int transmittedFollowUpCounter; // @synthesize transmittedFollowUpCounter=_transmittedFollowUpCounter;
@property(readonly, nonatomic) unsigned int transmittedSyncCounter; // @synthesize transmittedSyncCounter=_transmittedSyncCounter;
@property(readonly, nonatomic) unsigned int allowedLostResponsesExceededCounter; // @synthesize allowedLostResponsesExceededCounter=_allowedLostResponsesExceededCounter;
@property(readonly, nonatomic) unsigned int announceReceiptTimeoutCounter; // @synthesize announceReceiptTimeoutCounter=_announceReceiptTimeoutCounter;
@property(readonly, nonatomic) unsigned int syncReceiptTimeoutCounter; // @synthesize syncReceiptTimeoutCounter=_syncReceiptTimeoutCounter;
@property(readonly, nonatomic) unsigned int receivedPacketDiscardCounter; // @synthesize receivedPacketDiscardCounter=_receivedPacketDiscardCounter;
@property(readonly, nonatomic) unsigned int receivedSignalCounter; // @synthesize receivedSignalCounter=_receivedSignalCounter;
@property(readonly, nonatomic) unsigned int receivedAnnounceCounter; // @synthesize receivedAnnounceCounter=_receivedAnnounceCounter;
@property(readonly, nonatomic) unsigned int receivedFollowUpCounter; // @synthesize receivedFollowUpCounter=_receivedFollowUpCounter;
@property(readonly, nonatomic) unsigned int receivedSyncCounter; // @synthesize receivedSyncCounter=_receivedSyncCounter;
@property(readonly, nonatomic) int portRole; // @synthesize portRole=_portRole;
@property(readonly, nonatomic) int portType; // @synthesize portType=_portType;
@property(readonly, copy, nonatomic) NSString *portIdentifier; // @synthesize portIdentifier=_portIdentifier;
- (void)dealloc;
- (id)initWithPort:(id)arg1;
- (id)init;

@end

