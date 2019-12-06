//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICommentDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSArray, NSMutableSet, SKUICommentPostBarView, SKUICommentTemplateViewElement, SKUILayoutCache, SKUIMediaSocialAuthor, SKUIStackDocumentViewController, SKUIStackTemplateElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController>
{
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    SKUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    BOOL _didShowKeyboard;
    BOOL _keyboardVisible;
    CGRect _keyboardRect;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SKUICommentPostBarView *_postView;
    BOOL _scrollNewCommentToView;
    long long _selectedCommenter;
    SKUIStackTemplateElement *_stackTemplateElement;
    SKUICommentTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

// - (void).cxx_destruct;
- (void)_setSelectedCommenter:(long long)arg1;
- (void)_reloadContentSize:(double)arg1;
- (void)_preloadCommenterImages;
- (BOOL)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)_layoutKeyboard;
- (void)_layoutScrollView:(double)arg1;
- (id)_layoutContext;
- (id)_getSelectedCommenter;
- (void)_checkAdminStatus;
- (void)_changeCommenter;
- (id)_backgroundColor;
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(BOOL)arg2 applyKeyboardOffset:(BOOL)arg3;
- (void)_keyboardDidHideChangeNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)updateStackElement:(id)arg1 withView:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

@end

