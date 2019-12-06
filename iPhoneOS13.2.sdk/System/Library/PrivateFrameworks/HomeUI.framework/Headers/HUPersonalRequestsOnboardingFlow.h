//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUPersonalRequestsOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    BOOL _shouldAbortThisOnboardingFlowGroup;
    BOOL _shouldAbortAllOnboarding;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
}

@property(nonatomic) BOOL shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property(nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property(retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(retain, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)processUserInput:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;

@end

