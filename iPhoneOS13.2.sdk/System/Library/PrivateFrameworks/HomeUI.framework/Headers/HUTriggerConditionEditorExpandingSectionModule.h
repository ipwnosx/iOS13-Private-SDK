//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HUTriggerConditionEditorSectionModule-Protocol.h>

@class HFCondition, HFItem, HFStaticItemProvider, HMHome, NSArray;

@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>
{
    BOOL _showOptions;
    NSUInteger _conditionType;
    HFItem *_showOptionsItem;
    NSArray *_optionItems;
    HFCondition *_condition;
    HFItem *_selectedOptionItem;
    HMHome *_home;
    HFStaticItemProvider *_itemProvider;
}

+ (id)sectionModuleForConditionType:(NSUInteger)arg1 itemUpdater:(id)arg2 home:(id)arg3;
@property(retain, nonatomic) HFStaticItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) BOOL showOptions; // @synthesize showOptions=_showOptions;
@property(retain, nonatomic) HFItem *selectedOptionItem; // @synthesize selectedOptionItem=_selectedOptionItem;
@property(retain, nonatomic) HFCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSArray *optionItems; // @synthesize optionItems=_optionItems;
@property(retain, nonatomic) HFItem *showOptionsItem; // @synthesize showOptionsItem=_showOptionsItem;
@property(readonly, nonatomic) NSUInteger conditionType; // @synthesize conditionType=_conditionType;
// - (void).cxx_destruct;
- (id)preferredConditionFromConditions:(id)arg1;
- (BOOL)conditionIsDisabled;
- (id)conditionTitle;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)createNoConditionOptionItemWithTitle:(id)arg1;
- (BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)updateSelectionWithCondition:(id)arg1;
- (id)selectOptionItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_buildItemProvider;
- (id)sectionID;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 conditionType:(NSUInteger)arg2 home:(id)arg3;

@end

