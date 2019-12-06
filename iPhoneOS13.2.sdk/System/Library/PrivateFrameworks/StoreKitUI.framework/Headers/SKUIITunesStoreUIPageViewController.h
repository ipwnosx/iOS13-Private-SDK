//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUStorePageViewController.h>

@class NSString, SKProductPageViewController, SUBarButtonItem;

__attribute__((visibility("hidden")))
@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController
{
    SUBarButtonItem *_cancelButtonItem;
    NSString *_cancelButtonTitle;
    SKProductPageViewController *_productPageViewController;
    BOOL _showsCancelButton;
}

@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) __weak SKProductPageViewController *productPageViewController; // @synthesize productPageViewController=_productPageViewController;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
// - (void).cxx_destruct;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (id)_cancelButtonItem;
- (void)_addCancelButtonToNavigationItem:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)resetNavigationItem:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)handleFailureWithError:(id)arg1;
- (void)dealloc;

@end

