//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CK_UIFeedBackImpactBehavior;

@interface CKImpactEffectHapticsGenerator : NSObject
{
    BOOL _sendFeedbackImpactBehavior;
    NSObject<CK_UIFeedBackImpactBehavior> *_expressiveSendFeedbackImpactBehavior;
    double _feedbackImpactBehaviorDispatchDelay;
}

@property(nonatomic) BOOL sendFeedbackImpactBehavior; // @synthesize sendFeedbackImpactBehavior=_sendFeedbackImpactBehavior;
@property(nonatomic) double feedbackImpactBehaviorDispatchDelay; // @synthesize feedbackImpactBehaviorDispatchDelay=_feedbackImpactBehaviorDispatchDelay;
@property(retain, nonatomic) NSObject<CK_UIFeedBackImpactBehavior> *expressiveSendFeedbackImpactBehavior; // @synthesize expressiveSendFeedbackImpactBehavior=_expressiveSendFeedbackImpactBehavior;
// - (void).cxx_destruct;
- (void)cleanUpImpactBehaviorFeedback;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 cleanUpOnSend:(BOOL)arg2;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1;
- (void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)arg1;
- (void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)arg1;
- (id)init;

@end

