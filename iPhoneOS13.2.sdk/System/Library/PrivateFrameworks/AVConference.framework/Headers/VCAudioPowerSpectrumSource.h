//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

#import <AVConference/VCAudioIOSink-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink>
{
    long long _streamToken;
//     struct _VCAudioPowerSpectrumSourceRealtimeContext _realtimeContext;
}

@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)unregisterAudioPowerSpectrumSink:(id)arg1;
- (void)registerAudioPowerSpectrumSink:(id)arg1 callback:(/* void * CDUnknownFunctionPointerType */)arg2;
// @property(readonly, nonatomic) struct _VCAudioPowerSpectrumSourceRealtimeContext realtimeContext;
// - (void)pushAudioSamples:(struct opaqueVCAudioBufferList )arg1;
- (void)cleanupAudioPowerSpectrumSinks;
// - (void)cleanupQueue:(struct opaqueCMSimpleQueue )arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;

@end

