//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class VCAudioRelayIO;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications>
{
    BOOL _isRelayRunning;
    double _IOBufferDuration;
//     struct _opaque_pthread_t _relayThread;
//     struct _opaque_pthread_cond_t _wakeUpCondition;
//     struct _opaque_pthread_mutex_t _wakeUpMutex;
//     struct OpaqueAudioConverter _clientToRemoteConverter;
//     struct OpaqueAudioConverter _remoteToClientConverter;
    VCAudioRelayIO *_remoteIO;
    VCAudioRelayIO *_clientIO;
//     struct _opaque_pthread_mutex_t _relayLock;
//     struct _opaque_pthread_mutex_t _clientIOLock;
//     struct _opaque_pthread_mutex_t _remoteIOLock;
    NSObject<OS_dispatch_source> *_periodicHealthPrintDispatchSource;
    unsigned int _blocksRelayedCount;
    float _clientUplinkPowerMovingAverage;
    float _clientDownlinkPowerMovingAverage;
//     struct _VCRemoteCodecInfo _remoteCodecInfo;
}

@property(readonly) float clientUplinkPowerMovingAverage; // @synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage;
@property(readonly) float clientDownlinkPowerMovingAverage; // @synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage;
@property(readonly) unsigned int blocksRelayedCount; // @synthesize blocksRelayedCount=_blocksRelayedCount;
@property(readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource; // @synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource;
// @property(readonly) struct OpaqueAudioConverter clientToRemoteConverter; // @synthesize clientToRemoteConverter=_clientToRemoteConverter;
// @property(readonly) struct OpaqueAudioConverter remoteToClientConverter; // @synthesize remoteToClientConverter=_remoteToClientConverter;
@property(readonly) double IOBufferDuration; // @synthesize IOBufferDuration=_IOBufferDuration;
@property(readonly) BOOL isRelayRunning; // @synthesize isRelayRunning=_isRelayRunning;
@property(copy, nonatomic) VCAudioRelayIO *clientIO; // @synthesize clientIO=_clientIO;
@property(copy, nonatomic) VCAudioRelayIO *remoteIO; // @synthesize remoteIO=_remoteIO;
// - (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo )arg1;
- (void)relayCallback;
- (void)relayProcessSamples;
- (void)startPeriodicHealthPrint;
- (void)updateRealTimeStats;
// - (void)sleepTillTime:(struct timespec )arg1;
// - (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter )arg3;
- (float)rmsPowerOfBuffer:(float )arg1 numSamples:(unsigned int)arg2;
- (void)printStreamFormats;
- (void)destroyAudioConverters;
// - (struct OpaqueAudioConverter )newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription )arg1 outputFormat:(struct AudioStreamBasicDescription )arg2 withError:(id )arg3;
- (BOOL)createAudioConvertersWithError:(id )arg1;
- (void)stopRelayThread;
- (BOOL)startRelayThreadWithError:(id )arg1;
- (BOOL)canSetPropertyWithError:(id )arg1;
- (void)stopRemoteIO;
- (void)stopClientIO;
- (BOOL)stopRelayIO:(id)arg1;
- (BOOL)startRemoteIO;
- (BOOL)startClientIO;
- (BOOL)startRelayIO:(id)arg1 name:(id)arg2 recordingsName:(id)arg3;
- (BOOL)setClientIO:(id)arg1 withError:(id )arg2;
- (BOOL)setRemoteIO:(id)arg1 withError:(id )arg2;
// - (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo )arg1;
- (BOOL)setIOBufferDuration:(double)arg1 withError:(id )arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

