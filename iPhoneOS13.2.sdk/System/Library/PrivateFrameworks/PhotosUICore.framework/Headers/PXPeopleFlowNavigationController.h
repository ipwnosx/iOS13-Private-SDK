//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXPeopleFlowViewControllerActionDelegate-Protocol.h>

@class UIBarButtonItem, UIViewController;
@protocol PXPeopleFlowController, PXPeopleFlowViewController;

@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate>
{
    id <PXPeopleFlowController> _flowController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    UIViewController<PXPeopleFlowViewController> *_currentViewController;
}

@property(retain, nonatomic) UIViewController<PXPeopleFlowViewController> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) id <PXPeopleFlowController> flowController; // @synthesize flowController=_flowController;
// - (void).cxx_destruct;
- (void)requestCancel;
- (void)requestAdvanceToNextInFlow;
- (void)setAdvanceButtonEnabled:(BOOL)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_updateActions;
- (void)back:(id)arg1;
- (void)next:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithFlowController:(id)arg1;

@end

