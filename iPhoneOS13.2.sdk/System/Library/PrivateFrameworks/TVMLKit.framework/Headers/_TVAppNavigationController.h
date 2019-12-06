//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TVMLKit/IKAppNavigationController-Protocol.h>
#import <TVMLKit/TVAppRootViewController-Protocol.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider-Protocol.h>

@class IKAppTabBar, TVApplicationController, UITapGestureRecognizer, UIViewController;
@protocol IKAppNavigationController, NSObject, _TVAppNavigationControllerDelegate;

@interface _TVAppNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVApplicationInspectorDocumentProvider, UINavigationControllerDelegate, TVAppRootViewController, IKAppNavigationController>
{
   struct {
        unsigned int shouldOverrideModalBehaviorForPlaybackDocument:1;
        unsigned int shouldIgnoreDismissal:1;
        unsigned int shouldDismissShroud:1;
        unsigned int willLoadAppDocumentWithController:1;
        unsigned int willDisappear:1;
    } _ancDelegateFlags;
    TVApplicationController *_appController;
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
    NSUInteger _maxNavControllerStackDepth;
    UITapGestureRecognizer *_menuRecognizer;
    UIViewController *_presentedModalViewController;
    id <NSObject> _modalPresenterObserverToken;
}

@property(retain, nonatomic) id <NSObject> modalPresenterObserverToken; // @synthesize modalPresenterObserverToken=_modalPresenterObserverToken;
@property(retain, nonatomic) UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(nonatomic) NSUInteger maxNavControllerStackDepth; // @synthesize maxNavControllerStackDepth=_maxNavControllerStackDepth;
@property(nonatomic) __weak id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate; // @synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate;
@property(readonly, nonatomic) __weak TVApplicationController *appController; // @synthesize appController=_appController;
// - (void).cxx_destruct;
- (BOOL)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg1 andExistingPlaybackDocument:(id)arg2;
- (BOOL)_shouldIgnoreModalDismissal:(id)arg1;
- (void)_doWillLoadAppDocumentWithController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)activeDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)removeDocument:(id)arg1;
- (void)popToRootDocument;
- (id)popToRootDocument:(BOOL)arg1;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissAllModals:(CDUnknownBlockType)arg1;
- (void)dismissModal:(BOOL)arg1;
- (void)dismissModal;
- (void)dismissed;
- (void)_presentModalDocumentController:(id)arg1 options:(id)arg2;
- (void)presentModal:(id)arg1 options:(id)arg2;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)documents;
- (void)setDocuments:(id)arg1 options:(id)arg2;
- (void)clear;
@property(readonly, nonatomic) IKAppTabBar *appTabBar;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) id <IKAppNavigationController> appNavigationController;
@property(readonly, nonatomic) UINavigationController *currentNavigationController;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)_handleMenuAction:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithApplicationController:(id)arg1;
- (id)initWithRootViewController:(id)arg1;

@end

