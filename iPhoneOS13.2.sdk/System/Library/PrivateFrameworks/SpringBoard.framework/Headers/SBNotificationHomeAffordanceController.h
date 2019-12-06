//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>

@class BSAnimationSettings, NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate>
{
    NSMapTable *_clientsToParticipants;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGesture;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2;
- (void)registerClient:(id)arg1 withIdentifier:(long long)arg2;
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;

@end

