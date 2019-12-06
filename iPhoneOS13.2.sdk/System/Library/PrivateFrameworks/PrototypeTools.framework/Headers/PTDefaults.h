//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface PTDefaults : BSAbstractDefaultDomain
{
}

+ (id)sharedInstance;
- (id)_testRecipeDefaults;
- (id)_eventDefaults;
- (BOOL)_eventShowsUI:(long long)arg1;
- (id)observeEventDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)prototypingServerWantsEvent:(long long)arg1;
- (id)observeTestRecipeDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deactivateTestRecipe;
- (id)activeTestRecipeEventDescription;
- (BOOL)activeTestRecipeEatsEvent:(long long)arg1;
- (id)activeTestRecipeDescription;
- (id)activeTestRecipeIdentifier;
- (BOOL)testRecipeIsActive;
- (id)observeShowUISwitchDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setShowsUI:(BOOL)arg1 forEvent:(long long)arg2;
- (BOOL)displayedShowsUIValueForEvent:(long long)arg1;
- (BOOL)canEditShowsUIForEvent:(long long)arg1;
- (void)_bindAndRegisterDefaults;

@end

