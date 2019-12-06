//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>

@class NSMutableArray, SKUIActivityIndicatorView, SKUIChartsTemplateViewElement, SKUILayoutCache, SKUIModernChartsView, SKUIResourceLoader, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIModernChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController, SKUIModalSourceViewProvider>
{
    SKUIActivityIndicatorView *_activityIndicatorView;
    SKUIModernChartsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUILayoutCache *_layoutCache;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
    SKUIResourceLoader *_resourceLoader;
}

// - (void).cxx_destruct;
- (id)_resourceLoader;
- (id)_viewLayoutContext;
- (CGRect)_computedFrameForActivityIndicatorView;
- (void)_showActivityIndicator;
- (void)_reloadWithTemplateElement:(id)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_layoutCache;
- (void)_hideActivityIndicator;
- (UIEdgeInsets)_contentInset;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)contentScrollView;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

@end

