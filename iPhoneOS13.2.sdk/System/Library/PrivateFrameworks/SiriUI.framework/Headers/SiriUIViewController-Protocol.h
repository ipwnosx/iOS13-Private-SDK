//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFDialogPhase, AceObject, NSString;
@protocol SiriUIViewController;

@protocol SiriUIViewController <NSObject>
@property(nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property(retain, nonatomic) AceObject *aceObject;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;

@optional
- (void)siriDidReceiveViewsWithDialogPhase:(AFDialogPhase *)arg1;
- (BOOL)shouldHidePriorViews;
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(BOOL)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (double)baselineOffsetFromBottom;
- (double)desiredPinnedTopPadding;
- (double)desiredTopPaddingBelowController:(id <SiriUIViewController>)arg1;
- (void)siriDidScrollVisible:(BOOL)arg1;
- (void)siriWillBeginScrolling;
- (void)handleAceCommand:(AceObject *)arg1;
- (void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (NSString *)navigationTitle;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredHeight;
@end

