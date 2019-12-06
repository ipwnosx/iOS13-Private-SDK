//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/AFUISiriSessionDelegate-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesisDelegate-Protocol.h>
#import <AssistantUI/SiriUIPresentationRemoteControlling-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSValue, SASRequestOptions;
@protocol AFUISiriSession, AFUISpeechSynthesis;

@protocol SRSiriViewControllerServing <NSObject, AFUISiriSessionDelegate, AFUISpeechSynthesisDelegate, SiriUIPresentationRemoteControlling>
- (void)setWaitingForTelephonyToStart:(BOOL)arg1;
- (void)setRunningPPT:(BOOL)arg1 withTestName:(NSString *)arg2 testOptions:(NSDictionary *)arg3;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationWillEnterForeground;
- (void)hostApplicationWillResignActive;
- (void)didReceiveDismissalAction:(BOOL)arg1 delayForTTS:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)didReceiveShortTapAction;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSpeechSynthesis:(id <AFUISpeechSynthesis>)arg1;
- (void)setSession:(id <AFUISiriSession>)arg1;
// - (void)siriKeyboardViewDidChange:(CDStruct_a82615c4 )arg1;
- (void)startRequestForText:(NSString *)arg1;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidDeactivateWithCompletion:(void (^)(void))arg1;
- (void)showPresentationWithIdentifier:(NSString *)arg1 properties:(NSDictionary *)arg2 lockState:(NSUInteger)arg3;
- (void)preloadPluginBundles;
- (void)preloadPresentationBundleWithIdentifier:(NSString *)arg1;
- (void)setRequestOptions:(SASRequestOptions *)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)setStatusViewHeightNumber:(NSNumber *)arg1;
- (void)setStatusBarFrameValue:(NSValue *)arg1;
- (void)setHostFrontMostAppOrientation:(long long)arg1;
@end

