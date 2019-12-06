//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIContextMenuInteractionDelegate-Protocol.h>

@class UIGestureRecognizer, UIView, UIViewController, _UIContextMenuInteraction;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerClickPreviewingContext : NSObject <_UIContextMenuInteractionDelegate, UIViewControllerPreviewing_Internal>
{
    id <UIViewControllerPreviewingDelegate> delegate;
    UIView *_sourceView;
    UIView *customViewForInteractiveHighlight;
    _UIContextMenuInteraction *_menuInteraction;
    UIViewController *_presentingViewController;
    UIViewController *_previewViewController;
    CGRect sourceRect;
}

@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) _UIContextMenuInteraction *menuInteraction; // @synthesize menuInteraction=_menuInteraction;
@property(retain, nonatomic) UIView *customViewForInteractiveHighlight; // @synthesize customViewForInteractiveHighlight;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) CGRect sourceRect; // @synthesize sourceRect;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
// - (void).cxx_destruct;
- (id)_targetedPreviewForHighlightView:(id)arg1 container:(id)arg2 center:(CGPoint)arg3;
- (id)_guessAutomaticPreviewForLocation:(CGPoint)arg1;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteractionWillDisplay:(id)arg1;
- (id)_uiActionsForPreviewActions:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (BOOL)contextMenuInteractionShouldBegin:(id)arg1;
- (void)unregister;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
- (void)dealloc;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;

@end
