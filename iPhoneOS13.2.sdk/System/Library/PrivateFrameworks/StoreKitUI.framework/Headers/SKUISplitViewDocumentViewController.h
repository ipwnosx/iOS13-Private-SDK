//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUINavigationDocumentDelegate-Protocol.h>

@class SKUINavigationDocumentController, SKUISplitViewTemplateElement, UISplitViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController>
{
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
    SKUINavigationDocumentController *_leftNavigationDocumentController;
    SKUINavigationDocumentController *_rightNavigationDocumentController;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) SKUINavigationDocumentController *rightNavigationDocumentController; // @synthesize rightNavigationDocumentController=_rightNavigationDocumentController;
@property(retain, nonatomic) SKUINavigationDocumentController *leftNavigationDocumentController; // @synthesize leftNavigationDocumentController=_leftNavigationDocumentController;
// - (void).cxx_destruct;
- (void)_skui_endDelayingPresentation;
- (void)_reloadSplitViewControllers;
- (BOOL)_isFullyPopulated;
- (id)_defaultBackgroundColor;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (void)loadView;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

@end

