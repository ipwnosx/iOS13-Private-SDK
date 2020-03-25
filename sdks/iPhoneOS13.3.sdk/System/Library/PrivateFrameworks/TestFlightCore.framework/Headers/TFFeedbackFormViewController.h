//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TestFlightCore/TFFeedbackFormPresenterView-Protocol.h>

@class TFFeedbackFormPresenter, TFFeedbackFormViewDataSource, UIActivityIndicatorView, UIBarButtonItem, UITableView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewController : UIViewController <TFFeedbackFormPresenterView>
{
    TFFeedbackFormPresenter *_presenter;
    TFFeedbackFormViewDataSource *_viewDataSource;
    UITableView *_tableView;
    UIBarButtonItem *_submitButtonItem;
    UIBarButtonItem *_activityItem;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) UIBarButtonItem *activityItem; // @synthesize activityItem=_activityItem;
@property(readonly, nonatomic) UIBarButtonItem *submitButtonItem; // @synthesize submitButtonItem=_submitButtonItem;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) TFFeedbackFormViewDataSource *viewDataSource; // @synthesize viewDataSource=_viewDataSource;
@property(readonly, nonatomic) TFFeedbackFormPresenter *presenter; // @synthesize presenter=_presenter;
// - (void).cxx_destruct;
- (void)submitButtonPressed:(id)arg1;
- (void)adjustContentOffsetForKeyboardNotification:(id)arg1;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(BOOL)arg1;
- (void)reloadEntriesAtIndexPaths:(id)arg1;
- (void)reloadEntryGroupsAtIndices:(id)arg1;
- (void)prepareForEntryType:(NSUInteger)arg1;
- (void)setNavigationItemTitle:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithPresenter:(id)arg1;

@end
