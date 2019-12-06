//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SiriContext;

@interface SASActivationRequest : NSObject
{
    int _waketimeMIB[12];
    NSUInteger _waketimeMIBSize;
    long long _activationType;
    long long _activationEvent;
    SiriContext *_context;
    double _activationTime;
    double _buttonDownTime;
    long long _requestSource;
}

+ (long long)requestSourceForButtonIdentifier:(long long)arg1;
@property(nonatomic) long long requestSource; // @synthesize requestSource=_requestSource;
@property(nonatomic) double buttonDownTime; // @synthesize buttonDownTime=_buttonDownTime;
@property(nonatomic) double activationTime; // @synthesize activationTime=_activationTime;
@property(retain, nonatomic) SiriContext *context; // @synthesize context=_context;
@property(nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
@property(nonatomic) long long activationType; // @synthesize activationType=_activationType;
// - (void).cxx_destruct;
- (BOOL)isSpotlightRequest;
- (BOOL)isBluetoothRequest;
- (BOOL)isContinuityRequest;
- (BOOL)isDirectActionRequest;
- (BOOL)isUIFreeRequestSource;
- (BOOL)isEyesFreeRequestSource;
- (BOOL)isTestingRequest;
- (BOOL)isDeviceButtonRequest;
- (BOOL)isButtonRequest;
- (BOOL)isHoldToTalkSource;
- (BOOL)isVoiceRequest;
- (double)buttonDownTimestamp;
- (double)computedActivationTime;
- (id)description;
- (id)eventSource;
- (id)initWithTestingContext:(id)arg1;
- (id)initWithVoiceTriggerRequest;
- (id)initWithSpotlightContext:(id)arg1;
- (id)initWithSimpleActivation:(long long)arg1;
- (id)initWithBreadcrumbRequest;
- (id)initWithVoiceTriggerContext:(id)arg1;
- (id)initWithContinuityContext:(id)arg1;
- (id)initWithDirectActionEvent:(long long)arg1 context:(id)arg2;
- (id)initWithButtonIdentifier:(long long)arg1 context:(id)arg2;
- (id)init;

@end

