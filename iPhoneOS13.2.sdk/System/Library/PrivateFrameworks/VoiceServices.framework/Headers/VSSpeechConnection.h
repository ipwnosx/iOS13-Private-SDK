//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, VSPresynthesizedAudioRequest, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

__attribute__((visibility("hidden")))
@interface VSSpeechConnection : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSString *_identifier;
    id <VSSpeechConnectionDelegate> _delegate;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    NSObject<OS_dispatch_queue> *_threadSafeQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue; // @synthesize threadSafeQueue=_threadSafeQueue;
@property(retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)killDaemon;
- (void)forwardStreamObject:(id)arg1;
- (void)getTTSServerVoicesWithFilter:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)setLogToFile:(BOOL)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (void)continueCurrentSpeechRequest;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)startSynthesisRequest:(id)arg1;
- (void)stopPresynthesizedAudioRequest;
- (void)cachePresynthesizedAudioRequest:(id)arg1;
- (void)startPresynthesizedAudioRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)endAudioPowerUpdate;
- (void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (BOOL)isSystemSpeaking;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)estimateDurationWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)queryPhaticCapabilityWithRequest:(id)arg1;
- (void)prewarmIfNeededWithRequest:(id)arg1;
- (void)updateWithConnectionIdentifier:(id)arg1;
@property(readonly, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
- (id)concurrentSynthesisRequests;
@property(readonly, nonatomic) VSSpeechRequest *request;
- (void)_connectionInvalidated;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObject;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)dealloc;
- (id)init;

@end

