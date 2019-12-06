//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionRanking-Protocol.h>

@protocol CNUIInteractionAdvisor;

@interface CNUIUserActionRanking : NSObject <CNUIUserActionRanking>
{
    id <CNUIInteractionAdvisor> _interactionAdvisor;
}

+ (id)sortKeyWithUsername:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)constrainMechanismsForActionType:(id)arg1;
+ (id)advisorSettingsForIdentifyingMostRecentAction:(id)arg1 actionType:(id)arg2;
+ (id)advisorSettingsForSortingAddresses:(id)arg1 actionType:(id)arg2;
@property(readonly, nonatomic) id <CNUIInteractionAdvisor> interactionAdvisor; // @synthesize interactionAdvisor=_interactionAdvisor;
// - (void).cxx_destruct;
- (id)selectMostRecentActionFromItems:(id)arg1;
- (id)selectRecentActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)sortKeysByRankingAddresses:(id)arg1 actionType:(id)arg2 scheduler:(id)arg3;
- (id)sortActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)init;

@end

