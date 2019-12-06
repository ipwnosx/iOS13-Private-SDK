//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSDestination, NSString, TUAnswerRequest, TUDialRequest, TUProxyCall;

@protocol TUCallServicesProxyCallActions <NSObject>
- (oneway void)shouldSuppressInCallStatusBar:(BOOL)arg1;
- (oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)sendMMIOrUSSDCodeWithRequest:(TUDialRequest *)arg1;
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(NSString *)arg1 presentationState:(int)arg2;
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(NSString *)arg1 size:(CGSize)arg2;
- (oneway void)enteredBackgroundForAllCalls;
- (oneway void)willEnterBackgroundForAllCalls;
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)updateCallWithProxy:(TUProxyCall *)arg1;
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)pullHostedCallsFromPairedHostDevice;
- (oneway void)pushHostedCallsToDestination:(IDSDestination *)arg1;
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(NSString *)arg1;
- (oneway void)pullRelayingCallsFromClient;
- (oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)disconnectAllCalls;
- (oneway void)disconnectCurrentCallAndActivateHeld;
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(NSString *)arg1 key:(unsigned char)arg2;
- (oneway void)swapCalls;
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)groupCallWithUniqueProxyIdentifier:(NSString *)arg1 withOtherCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)unholdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)holdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)answerCallWithRequest:(TUAnswerRequest *)arg1;
@end

