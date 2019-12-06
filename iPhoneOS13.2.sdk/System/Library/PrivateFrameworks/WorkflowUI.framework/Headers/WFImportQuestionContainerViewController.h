//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFGalleryImportQuestionViewDelegate-Protocol.h>

@class OBWelcomeController;
@protocol WFImportQuestionContainerViewControllerDelegate;

@interface WFImportQuestionContainerViewController : UIViewController <WFGalleryImportQuestionViewDelegate>
{
    BOOL _backButtonHidden;
    id <WFImportQuestionContainerViewControllerDelegate> _delegate;
    OBWelcomeController *_welcomeController;
}

@property(retain, nonatomic) OBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property(nonatomic) BOOL backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(nonatomic) __weak id <WFImportQuestionContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)keyboardWillChange:(id)arg1;
- (void)didTapSkip;
- (void)didTapNext;
- (void)didTapBack;
- (void)didTapCancel;
- (id)welcomeControllerForImportQuestion:(id)arg1 isLastQuestion:(BOOL)arg2;
- (void)galleryImportQuestionViewDidUpdateContentSize:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithImportQuestion:(id)arg1 isLastQuestion:(BOOL)arg2 backButtonHidden:(BOOL)arg3;

@end

