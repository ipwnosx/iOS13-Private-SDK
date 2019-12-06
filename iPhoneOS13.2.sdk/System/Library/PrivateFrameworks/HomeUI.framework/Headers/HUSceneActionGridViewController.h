//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/HFActionSetValueSourceDelegate-Protocol.h>
#import <HomeUI/HUContainedServiceGridViewControllerDelegate-Protocol.h>
#import <HomeUI/HUServiceActionControlsViewControllerDelegate-Protocol.h>
#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFActionSetBuilder, HUContainedServicesGridViewController, NSSet;

@interface HUSceneActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate>
{
    HFActionSetBuilder *_actionSetBuilder;
    NSSet *_blacklistedServices;
    NSSet *_whitelistedServices;
    HUContainedServicesGridViewController *_presentedServiceGroupDetailsViewController;
}

@property(nonatomic) __weak HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController; // @synthesize presentedServiceGroupDetailsViewController=_presentedServiceGroupDetailsViewController;
@property(copy, nonatomic) NSSet *whitelistedServices; // @synthesize whitelistedServices=_whitelistedServices;
@property(copy, nonatomic) NSSet *blacklistedServices; // @synthesize blacklistedServices=_blacklistedServices;
@property(readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
// - (void).cxx_destruct;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1;

@end

