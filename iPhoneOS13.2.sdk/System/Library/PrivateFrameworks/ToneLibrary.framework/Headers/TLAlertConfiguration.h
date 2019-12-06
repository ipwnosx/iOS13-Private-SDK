//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURL;

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFrozen;
    BOOL _hasCustomRepeatingFlag;
    BOOL _hasCustomAudioVolume;
    BOOL _forPreview;
    BOOL _shouldRepeat;
    BOOL _shouldIgnoreRingerSwitch;
    BOOL _shouldForcePlayingAtUserSelectedAudioVolume;
    float _audioVolume;
    double _audioPlaybackInitiationDelay;
    double _audioVolumeRampingDuration;
    long long _type;
    NSString *_topic;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_externalToneFileURL;
    NSUInteger _externalToneMediaLibraryItemIdentifier;
    NSDictionary *_externalVibrationPattern;
    NSURL *_externalVibrationPatternFileURL;
    NSString *_audioCategory;
    double _maximumDuration;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldForcePlayingAtUserSelectedAudioVolume; // @synthesize shouldForcePlayingAtUserSelectedAudioVolume=_shouldForcePlayingAtUserSelectedAudioVolume;
@property(nonatomic) BOOL shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(nonatomic) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(nonatomic, getter=isForPreview) BOOL forPreview; // @synthesize forPreview=_forPreview;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(copy, nonatomic) NSURL *externalVibrationPatternFileURL; // @synthesize externalVibrationPatternFileURL=_externalVibrationPatternFileURL;
@property(copy, nonatomic) NSDictionary *externalVibrationPattern; // @synthesize externalVibrationPattern=_externalVibrationPattern;
@property(nonatomic) NSUInteger externalToneMediaLibraryItemIdentifier; // @synthesize externalToneMediaLibraryItemIdentifier=_externalToneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSURL *externalToneFileURL; // @synthesize externalToneFileURL=_externalToneFileURL;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, setter=_setAudioVolumeRampingDuration:) double _audioVolumeRampingDuration; // @synthesize _audioVolumeRampingDuration;
@property(nonatomic, setter=_setAudioPlaybackInitiationDelay:) double _audioPlaybackInitiationDelay; // @synthesize _audioPlaybackInitiationDelay;
@property(readonly, nonatomic) BOOL _hasCustomAudioVolume; // @synthesize _hasCustomAudioVolume;
// - (void).cxx_destruct;
- (void)_throwForFrozenInstance;
- (void)_freeze;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithType:(long long)arg1;

@end

