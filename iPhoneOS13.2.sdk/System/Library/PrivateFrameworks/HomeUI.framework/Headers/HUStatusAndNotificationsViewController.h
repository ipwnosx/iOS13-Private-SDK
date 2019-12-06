//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUCameraSmartNotificationSettingsModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerConditionEditorItemModuleControllerDelegate-Protocol.h>

@class HFItem, HUCameraSmartNotificationSettingsModuleController, HUTriggerConditionEditorItemModuleController;
@protocol HFServiceLikeItem;

@interface HUStatusAndNotificationsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUCameraSmartNotificationSettingsModuleControllerDelegate>
{
    HFItem<HFServiceLikeItem> *_item;
    HUTriggerConditionEditorItemModuleController *_conditionModuleController;
    HUCameraSmartNotificationSettingsModuleController *_cameraSmartSettingsModuleController;
}

@property(readonly, nonatomic) HUCameraSmartNotificationSettingsModuleController *cameraSmartSettingsModuleController; // @synthesize cameraSmartSettingsModuleController=_cameraSmartSettingsModuleController;
@property(readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // @synthesize conditionModuleController=_conditionModuleController;
@property(retain, nonatomic) HFItem<HFServiceLikeItem> *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (void)smartNotificationSettingsModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)itemModuleControllers;
- (NSUInteger)automaticDisablingReasonsForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) BOOL useServiceNameAsTitle;
@property(nonatomic) BOOL showStatusSection;
- (id)initWithServiceItem:(id)arg1 home:(id)arg2;

@end

