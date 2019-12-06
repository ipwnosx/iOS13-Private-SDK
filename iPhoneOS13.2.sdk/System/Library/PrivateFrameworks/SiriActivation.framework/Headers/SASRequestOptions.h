//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AFBulletin, AFRequestInfo, AFSpeechRequestOptions, NSArray, NSDictionary, NSNumber, NSString, NSURL, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext;

@interface SASRequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestSource;
    BOOL _pronunciationRequest;
    BOOL _isForCarDND;
    BOOL _isConnectedToCarPlay;
    BOOL _initialBringUp;
    BOOL _useAutomaticEndpointing;
    BOOL _useStreamingDictation;
    BOOL _acousticIdEnabled;
    BOOL _releaseAudioSessionOnRecordingCompletion;
    BOOL _predictedRecordRouteIsZLL;
    NSString *_activationDeviceIdentifier;
    AFBulletin *_bulletin;
    NSString *_appBundleIdentifier;
    NSDictionary *_messagesDirectActionContext;
    SAGuidanceCheckForGuideUpdateContext *_checkForGuideUpdateContext;
    long long _directActionEvent;
    NSString *_serverCommandId;
    SASPronunciationContext *_pronunciationContext;
    NSString *_text;
    NSURL *_speechFileURL;
    double _expectedTimestamp;
    double _timestamp;
    double _buttonDownTimestamp;
    NSArray *_currentCarPlaySupportedOEMAppIdList;
    NSUInteger _carDNDStatus;
    NSNumber *_homeButtonUpFromBeep;
    NSDictionary *_continuityInfo;
    AFRequestInfo *_requestInfo;
    AFSpeechRequestOptions *_speechRequestOptions;
    NSString *_uiPresentationIdentifier;
    NSArray *_contextAppInfosForSiriViewController;
    NSDictionary *_testingContext;
    NSUInteger _currentLockState;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger currentLockState; // @synthesize currentLockState=_currentLockState;
@property(retain, nonatomic) NSDictionary *testingContext; // @synthesize testingContext=_testingContext;
@property(retain, nonatomic) NSArray *contextAppInfosForSiriViewController; // @synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController;
@property(retain, nonatomic) NSString *uiPresentationIdentifier; // @synthesize uiPresentationIdentifier=_uiPresentationIdentifier;
@property(nonatomic) BOOL predictedRecordRouteIsZLL; // @synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL;
@property(nonatomic) BOOL releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(nonatomic) BOOL acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(retain, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy, nonatomic) NSDictionary *continuityInfo; // @synthesize continuityInfo=_continuityInfo;
@property(retain, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) BOOL useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) BOOL useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(nonatomic, getter=isInitialBringUp) BOOL initialBringUp; // @synthesize initialBringUp=_initialBringUp;
@property(nonatomic) NSUInteger carDNDStatus; // @synthesize carDNDStatus=_carDNDStatus;
@property(nonatomic) BOOL isConnectedToCarPlay; // @synthesize isConnectedToCarPlay=_isConnectedToCarPlay;
@property(nonatomic) BOOL isForCarDND; // @synthesize isForCarDND=_isForCarDND;
@property(retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // @synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList;
@property(nonatomic) double buttonDownTimestamp; // @synthesize buttonDownTimestamp=_buttonDownTimestamp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double expectedTimestamp; // @synthesize expectedTimestamp=_expectedTimestamp;
@property(copy, nonatomic) NSURL *speechFileURL; // @synthesize speechFileURL=_speechFileURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) SASPronunciationContext *pronunciationContext; // @synthesize pronunciationContext=_pronunciationContext;
@property(nonatomic, getter=isPronunciationRequest) BOOL pronunciationRequest; // @synthesize pronunciationRequest=_pronunciationRequest;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) long long directActionEvent; // @synthesize directActionEvent=_directActionEvent;
@property(copy, nonatomic) SAGuidanceCheckForGuideUpdateContext *checkForGuideUpdateContext; // @synthesize checkForGuideUpdateContext=_checkForGuideUpdateContext;
@property(copy, nonatomic) NSDictionary *messagesDirectActionContext; // @synthesize messagesDirectActionContext=_messagesDirectActionContext;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) AFBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSString *activationDeviceIdentifier; // @synthesize activationDeviceIdentifier=_activationDeviceIdentifier;
// - (void).cxx_destruct;
- (BOOL)_isTypeToSiriPermittedAndEnabledForRequestOptions;
- (BOOL)isHTTRequestSource;
@property(readonly, nonatomic, getter=isMessagesDirectAction) BOOL messagesDirectAction;
- (BOOL)isB288Activation;
@property(readonly, nonatomic, getter=isForStark) BOOL forStark;
@property(readonly, nonatomic, getter=isForSpeechRequest) BOOL forSpeechRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_configureStreamingDictationForSource:(long long)arg1;
@property(nonatomic) long long requestSource;
- (id)init;
- (id)initWithRequestSource:(long long)arg1;
- (id)initWithRequestSource:(long long)arg1 uiPresentationIdentifier:(id)arg2;

@end

