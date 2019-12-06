//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUMediaAccessControlEditorModuleControllerDelegate-Protocol.h>

@class HMHome, HUMediaAccessControlEditorModuleController;

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate>
{
    HMHome *_home;
    HUMediaAccessControlEditorModuleController *_accessControlEditorModuleController;
}

@property(readonly, nonatomic) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController; // @synthesize accessControlEditorModuleController=_accessControlEditorModuleController;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)_updateFooterView:(id)arg1 forSection:(long long)arg2;
- (void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)itemModuleControllers;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;

@end

