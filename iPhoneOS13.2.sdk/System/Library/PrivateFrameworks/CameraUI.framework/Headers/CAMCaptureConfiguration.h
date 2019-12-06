//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMCaptureConfiguration : NSObject
{
    BOOL _photoBooth;
    long long _mode;
    long long _device;
    long long _videoConfiguration;
    long long _audioConfiguration;
    long long _flashMode;
    long long _torchMode;
    long long _HDRMode;
    long long _timerDuration;
    long long _irisMode;
    long long _photoModeAspectRatioCrop;
    long long _photoModeEffectFilterType;
    long long _squareModeEffectFilterType;
    long long _portraitModeEffectFilterType;
    long long _portraitModeLightingEffectType;
    double _portraitModeApertureValue;
    double _portraitModeIntensityValue;
}

+ (id)configuration:(id)arg1 withDevice:(long long)arg2;
+ (id)tinyConfigurationForConfiguration:(id)arg1 preserveFilters:(BOOL)arg2;
+ (long long)_fallbackVideoConfigurationForUnsupportedConfiguration:(long long)arg1;
+ (long long)sanitizeVideoConfigurationForDesiredConfiguration:(long long)arg1 mode:(long long)arg2 device:(long long)arg3;
+ (long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2 emulationMode:(long long)arg3 duringCall:(BOOL)arg4 forceMonoAudioRecording:(BOOL)arg5;
+ (id)captureGraphConfigurationUsingConfiguration:(id)arg1;
@property(readonly, nonatomic, getter=isPhotoBooth) BOOL photoBooth; // @synthesize photoBooth=_photoBooth;
@property(readonly, nonatomic) double portraitModeIntensityValue; // @synthesize portraitModeIntensityValue=_portraitModeIntensityValue;
@property(readonly, nonatomic) double portraitModeApertureValue; // @synthesize portraitModeApertureValue=_portraitModeApertureValue;
@property(readonly, nonatomic) long long portraitModeLightingEffectType; // @synthesize portraitModeLightingEffectType=_portraitModeLightingEffectType;
@property(readonly, nonatomic) long long portraitModeEffectFilterType; // @synthesize portraitModeEffectFilterType=_portraitModeEffectFilterType;
@property(readonly, nonatomic) long long squareModeEffectFilterType; // @synthesize squareModeEffectFilterType=_squareModeEffectFilterType;
@property(readonly, nonatomic) long long photoModeEffectFilterType; // @synthesize photoModeEffectFilterType=_photoModeEffectFilterType;
@property(readonly, nonatomic) long long photoModeAspectRatioCrop; // @synthesize photoModeAspectRatioCrop=_photoModeAspectRatioCrop;
@property(readonly, nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property(readonly, nonatomic) long long timerDuration; // @synthesize timerDuration=_timerDuration;
@property(readonly, nonatomic) long long HDRMode; // @synthesize HDRMode=_HDRMode;
@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) long long audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (id)_previewFilters;
- (id)initForPhotoBoothWithCaptureDevice:(long long)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 flashMode:(long long)arg5 torchMode:(long long)arg6 HDRMode:(long long)arg7 irisMode:(long long)arg8 timerDuration:(long long)arg9 photoModeAspectRatioCrop:(long long)arg10 photoModeEffectFilterType:(long long)arg11 squareModeEffectFilterType:(long long)arg12 portraitModeEffectFilterType:(long long)arg13 portraitModeLightingEffectType:(long long)arg14 portraitModeApertureValue:(double)arg15 portraitModeIntensityValue:(double)arg16;

@end

