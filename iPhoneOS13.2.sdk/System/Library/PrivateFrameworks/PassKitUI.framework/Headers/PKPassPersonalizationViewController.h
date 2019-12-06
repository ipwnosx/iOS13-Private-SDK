//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKPassPersonalizationCellDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationTermsViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PKContact, PKPass, PKPassPersonalizationFooterView, PKPassPersonalizationHeaderView, UIBarButtonItem, UIButton;
@protocol PKPassPersonalizationViewControllerDelegate;

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationFooterViewDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate>
{
    PKPassPersonalizationHeaderView *_headerView;
    PKPassPersonalizationFooterView *_footerView;
    UIBarButtonItem *_personalizeNowButton;
    UIButton *_personalizeLaterButton;
    PKPass *_pass;
    NSString *_personalizationToken;
    PKContact *_contact;
    NSArray *_cellContexts;
    NSUInteger _personalizationSource;
    BOOL _hasScrolledToCells;
    BOOL _termsAndConditionsAccepted;
    id <PKPassPersonalizationViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PKPassPersonalizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_presentPersonalizationErrorAlert;
- (id)_nextCellForIndexPath:(id)arg1;
- (void)_positionFooterView;
- (void)_configureFooterView;
- (void)_configureHeaderViewForState:(NSUInteger)arg1;
- (void)_scrollToCellsIfNeeded;
- (BOOL)_contactReadyForPersonalization;
- (void)_personalizePass;
- (void)_personalizeLaterButtonPressed:(id)arg1;
- (void)_personalizeNowButtonPressed:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg1;
- (void)passPersonalizationFooterViewPrivacyLinkPressed:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)personalizationCellShouldReturn:(id)arg1;
- (void)personalizationCellDidChangeValue:(id)arg1;
- (BOOL)personalizationCellShouldBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPass:(id)arg1 personalizationToken:(id)arg2 personalizationSource:(NSUInteger)arg3;

@end

