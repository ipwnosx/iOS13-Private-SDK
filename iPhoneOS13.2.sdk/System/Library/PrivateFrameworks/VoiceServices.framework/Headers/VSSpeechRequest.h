//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSAttributedString, NSDictionary, NSString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldCache;
    BOOL _disableCompactVoiceFallback;
    BOOL _forceServerTTS;
    BOOL _canUseServerTTS;
    BOOL _retryDeviceOnNetworkStall;
    BOOL _useCustomVoice;
    BOOL _audioSessionIDIsValid;
    BOOL _maintainsInput;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSString *_languageCode;
    long long _footprint;
    long long _voiceType;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    NSDictionary *_contextInfo;
    NSURL *_resourceListURL;
    NSURL *_resourceSearchPathURL;
    NSAttributedString *_attributedText;
    NSString *_utterance;
    NSString *_clientBundleIdentifier;
    NSUInteger _requestCreatedTimestamp;
    id /* CDUnknownBlockType */ _stopHandler;
    id /* CDUnknownBlockType */ _pauseHandler;
    long long _pointer;
    NSString *_voiceName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(nonatomic) long long pointer; // @synthesize pointer=_pointer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stopHandler; // @synthesize stopHandler=_stopHandler;
@property(nonatomic) NSUInteger requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) BOOL maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) BOOL audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) BOOL useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSURL *resourceSearchPathURL; // @synthesize resourceSearchPathURL=_resourceSearchPathURL;
@property(copy, nonatomic) NSURL *resourceListURL; // @synthesize resourceListURL=_resourceListURL;
@property(nonatomic) BOOL retryDeviceOnNetworkStall; // @synthesize retryDeviceOnNetworkStall=_retryDeviceOnNetworkStall;
@property(nonatomic) BOOL canUseServerTTS; // @synthesize canUseServerTTS=_canUseServerTTS;
@property(nonatomic) BOOL forceServerTTS; // @synthesize forceServerTTS=_forceServerTTS;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) BOOL disableCompactVoiceFallback; // @synthesize disableCompactVoiceFallback=_disableCompactVoiceFallback;
@property(copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)contextInfoString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isSimilarTo:(id)arg1;
- (id)description;
- (id)init;

@end

