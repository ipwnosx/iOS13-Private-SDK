//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVCAudioPowerSpectrum, AVCAudioPowerSpectrumMeter, NSDictionary;

@protocol AVCAudioPowerSpectrumMeterDelegate <NSObject>

@optional
- (void)meterServerDidDisconnect:(AVCAudioPowerSpectrumMeter *)arg1;
- (void)audioPowerSpectrumMeter:(AVCAudioPowerSpectrumMeter *)arg1 didUpdateLocalAudioPowerSpectrum:(AVCAudioPowerSpectrum *)arg2 remoteAudioPowerSpectrums:(NSDictionary *)arg3;
- (void)audioPowerSpectrumMeter:(AVCAudioPowerSpectrumMeter *)arg1 didUpdateAudioPowerSpectrums:(NSDictionary *)arg2;
@end

