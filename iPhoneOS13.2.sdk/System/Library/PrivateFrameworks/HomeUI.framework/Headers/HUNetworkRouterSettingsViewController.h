//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class HUNetworkConfigurationItemListModuleController;

@interface HUNetworkRouterSettingsViewController : HUItemTableViewController <HUPresentationDelegate, HUSwitchCellDelegate>
{
    HUNetworkConfigurationItemListModuleController *_networkConfigurationItemListModuleController;
}

@property(retain, nonatomic) HUNetworkConfigurationItemListModuleController *networkConfigurationItemListModuleController; // @synthesize networkConfigurationItemListModuleController=_networkConfigurationItemListModuleController;
// - (void).cxx_destruct;
- (Class)_networkRouterDetailsViewControllerClass;
- (BOOL)_shouldShowNetworkRouterDetails;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)presentNetworkRouterSettingsForItem:(id)arg1 animated:(BOOL)arg2;
- (id)presentNetworkRouterSettingsForProfile:(id)arg1 animated:(BOOL)arg2;
- (id)presentNetworkConfigurationSettingsForProfile:(id)arg1 animated:(BOOL)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

@end

