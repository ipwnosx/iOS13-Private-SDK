//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class AKController, AKInkSignatureView, AKSignatureBaselineView, AKSmoothPathView, UILabel, UINavigationBar, UIResponder;
@protocol AKSignatureCreationControllerDelegate;

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate>
{
    id <AKSignatureCreationControllerDelegate> _delegate;
    UINavigationBar *_navBar;
    AKSmoothPathView *_pathView;
    AKInkSignatureView *_signatureView;
    AKSignatureBaselineView *_baselineView;
    UILabel *_label;
    AKController *_controller;
    UIResponder *_responderToRestore;
}

@property(nonatomic) __weak UIResponder *responderToRestore; // @synthesize responderToRestore=_responderToRestore;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) AKSignatureBaselineView *baselineView; // @synthesize baselineView=_baselineView;
@property(retain, nonatomic) AKInkSignatureView *signatureView; // @synthesize signatureView=_signatureView;
@property(retain, nonatomic) AKSmoothPathView *pathView; // @synthesize pathView=_pathView;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property __weak id <AKSignatureCreationControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)positionForBar:(id)arg1;
- (void)_done:(id)arg1;
- (void)_clear:(id)arg1;
- (void)_cancel:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)_validateButtons;
- (BOOL)prefersStatusBarHidden;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setToolPickerVisible;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithController:(id)arg1;

@end

