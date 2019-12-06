//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PRGetPowerStatsResponse : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _numPacketsReceived;
    unsigned short _numPacketsTransmitted;
    unsigned int _sleepDuration;
    unsigned int _wakeDuration;
    unsigned int _singleAntennaSearchDuration;
    unsigned int _dualAntennaSearchDuration;
    unsigned int _singleChainRxPacketDuration;
    unsigned int _dualChainRxPacketDuration;
    unsigned int _tripleChainRxPacketDuration;
    unsigned int _dspProcessingDuration;
    unsigned int _txDuration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short numPacketsTransmitted; // @synthesize numPacketsTransmitted=_numPacketsTransmitted;
@property(readonly, nonatomic) unsigned short numPacketsReceived; // @synthesize numPacketsReceived=_numPacketsReceived;
@property(readonly, nonatomic) unsigned int txDuration; // @synthesize txDuration=_txDuration;
@property(readonly, nonatomic) unsigned int dspProcessingDuration; // @synthesize dspProcessingDuration=_dspProcessingDuration;
@property(readonly, nonatomic) unsigned int tripleChainRxPacketDuration; // @synthesize tripleChainRxPacketDuration=_tripleChainRxPacketDuration;
@property(readonly, nonatomic) unsigned int dualChainRxPacketDuration; // @synthesize dualChainRxPacketDuration=_dualChainRxPacketDuration;
@property(readonly, nonatomic) unsigned int singleChainRxPacketDuration; // @synthesize singleChainRxPacketDuration=_singleChainRxPacketDuration;
@property(readonly, nonatomic) unsigned int dualAntennaSearchDuration; // @synthesize dualAntennaSearchDuration=_dualAntennaSearchDuration;
@property(readonly, nonatomic) unsigned int singleAntennaSearchDuration; // @synthesize singleAntennaSearchDuration=_singleAntennaSearchDuration;
@property(readonly, nonatomic) unsigned int wakeDuration; // @synthesize wakeDuration=_wakeDuration;
@property(readonly, nonatomic) unsigned int sleepDuration; // @synthesize sleepDuration=_sleepDuration;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)initWithGetPowerStatsResponse:(const struct GetPowerStatsResponse )arg1;
- (id)initWithSleepDuration:(unsigned int)arg1 wakeDuration:(unsigned int)arg2 singleAntennaSearchDuration:(unsigned int)arg3 dualAntennaSearchDuration:(unsigned int)arg4 singleChainRxPacketDuration:(unsigned int)arg5 dualChainRxPacketDuration:(unsigned int)arg6 tripleChainRxPacketDuration:(unsigned int)arg7 dspProcessingDuration:(unsigned int)arg8 txDuration:(unsigned int)arg9 numPacketsReceived:(unsigned short)arg10 numPacketsTransmitted:(unsigned short)arg11;

@end

