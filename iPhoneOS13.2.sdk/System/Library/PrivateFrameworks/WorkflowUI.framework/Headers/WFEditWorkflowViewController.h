//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFRunWorkflowViewController.h>

#import <WorkflowUI/WFContentClassesToolbarDelegate-Protocol.h>
#import <WorkflowUI/WFContentClassesViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFDragControllerDelegate-Protocol.h>
#import <WorkflowUI/WFModuleDelegate-Protocol.h>
#import <WorkflowUI/WFModulesCollectionViewDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowEditingDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowEmptyStateViewDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowSettingsViewControllerDelegate-Protocol.h>

@class NSAttributedString, NSHashTable, NSIndexPath, NSLayoutConstraint, NSUndoManager, UIButton, UIResponder, UIView, WFActionDragFeedbackGenerator, WFEditShortcutEvent, WFWorkflowEmptyStateView;
@protocol WFVariableUIDelegate;

@interface WFEditWorkflowViewController : WFRunWorkflowViewController <WFDragControllerDelegate, WFModulesCollectionViewDelegate, WFWorkflowSettingsViewControllerDelegate, WFWorkflowEmptyStateViewDelegate, WFContentClassesToolbarDelegate, WFContentClassesViewControllerDelegate, WFModuleDelegate, UIGestureRecognizerDelegate, WFWorkflowEditingDelegate>
{
    NSUndoManager *_undoManager;
    id <WFVariableUIDelegate> _variableUIDelegate;
    double _bottomContentInset;
    NSAttributedString *_emptyStateInstructionText;
    NSHashTable *_currentDragControllers;
    NSHashTable *_moduleDragControllers;
    WFWorkflowEmptyStateView *_emptyStateView;
    UIView *_borderView;
    UIButton *_settingsButton;
    WFActionDragFeedbackGenerator *_dragFeedbackGenerator;
    UIResponder *_wf_firstResponder;
    UIView *_firstResponderHintView;
    NSLayoutConstraint *_hintBottomConstraint;
    long long _revealState;
    id /* CDUnknownBlockType */ _endRevealGoBackHandler;
    id /* CDUnknownBlockType */ _endRevealScrolledAwayHandler;
    UIButton *_endRevealButton;
    NSIndexPath *_actionRevealFromIndexPath;
    NSIndexPath *_actionRevealToIndexPath;
    WFEditShortcutEvent *_editShortcutEvent;
    CGPoint _actionRevealInitialOffset;
}

+ (BOOL)displaysEmptyView;
@property(retain, nonatomic) WFEditShortcutEvent *editShortcutEvent; // @synthesize editShortcutEvent=_editShortcutEvent;
@property(nonatomic) CGPoint actionRevealInitialOffset; // @synthesize actionRevealInitialOffset=_actionRevealInitialOffset;
@property(retain, nonatomic) NSIndexPath *actionRevealToIndexPath; // @synthesize actionRevealToIndexPath=_actionRevealToIndexPath;
@property(retain, nonatomic) NSIndexPath *actionRevealFromIndexPath; // @synthesize actionRevealFromIndexPath=_actionRevealFromIndexPath;
@property(retain, nonatomic) UIButton *endRevealButton; // @synthesize endRevealButton=_endRevealButton;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endRevealScrolledAwayHandler; // @synthesize endRevealScrolledAwayHandler=_endRevealScrolledAwayHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endRevealGoBackHandler; // @synthesize endRevealGoBackHandler=_endRevealGoBackHandler;
@property(nonatomic) long long revealState; // @synthesize revealState=_revealState;
@property(retain, nonatomic) NSLayoutConstraint *hintBottomConstraint; // @synthesize hintBottomConstraint=_hintBottomConstraint;
@property(nonatomic) __weak UIView *firstResponderHintView; // @synthesize firstResponderHintView=_firstResponderHintView;
@property(nonatomic) __weak UIResponder *wf_firstResponder; // @synthesize wf_firstResponder=_wf_firstResponder;
@property(retain, nonatomic) WFActionDragFeedbackGenerator *dragFeedbackGenerator; // @synthesize dragFeedbackGenerator=_dragFeedbackGenerator;
@property(readonly, nonatomic) __weak UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) __weak UIView *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) __weak WFWorkflowEmptyStateView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(readonly, nonatomic) NSHashTable *moduleDragControllers; // @synthesize moduleDragControllers=_moduleDragControllers;
@property(readonly, nonatomic) NSHashTable *currentDragControllers; // @synthesize currentDragControllers=_currentDragControllers;
@property(copy, nonatomic) NSAttributedString *emptyStateInstructionText; // @synthesize emptyStateInstructionText=_emptyStateInstructionText;
@property(nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
// - (void).cxx_destruct;
- (void)logEditEventIfNeccesary;
- (void)updateEditEvent;
- (void)shareWorkflow:(id)arg1;
- (id)keyCommands;
- (void)checkRevealActionScrollState;
- (void)scrollViewDidScroll:(id)arg1;
- (void)responderDidType:(id)arg1;
- (void)responderDidEndEditing:(id)arg1;
- (void)responderDidBeginEditing:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)updateContentInsetAnimated:(BOOL)arg1;
- (void)scrollFirstResponderToVisible;
- (void)scrollViewToVisible:(id)arg1;
- (void)_appendActions:(id)arg1;
- (void)appendAction:(id)arg1;
- (void)commitRemovalOfActions:(id)arg1 allowUndo:(BOOL)arg2;
- (void)commitMovingOfActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 allowUndo:(BOOL)arg3;
- (void)commitInsertionOfActions:(id)arg1 atIndexes:(id)arg2 allowUndo:(BOOL)arg3;
- (void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
- (void)workflow:(id)arg1 reloadActions:(id)arg2;
- (void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
- (void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;
- (void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
- (BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(CDUnknownBlockType)arg2;
- (void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
- (void)dragController:(id)arg1 didExitViewController:(id)arg2;
- (void)dragController:(id)arg1 didEnterViewController:(id)arg2;
- (void)dragControllerWillBeginDragging:(id)arg1;
- (BOOL)canMoveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (id)initialIndexPathForDragController:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateBorderWidth;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2;
- (void)contentClassesToolbarTapped:(id)arg1;
- (void)emptyViewDidRequestTutorial:(id)arg1;
- (void)emptyViewDidRequestActionDrawer:(id)arg1;
- (void)settingsViewControllerWantsWorkflowReload:(id)arg1;
- (void)settingsViewControllerDidFinish:(id)arg1;
- (id)errorWithRecoveryOptionsFromError:(id)arg1;
- (void)presentSettingsViewController;
- (void)runToolbarAddTapped:(id)arg1;
- (void)runToolbarRedoTapped:(id)arg1;
- (void)runToolbarUndoTapped:(id)arg1;
- (void)runToolbarShareTapped:(id)arg1;
- (id)createModelForAction:(id)arg1;
- (NSUInteger)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (BOOL)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4;
- (void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2;
- (BOOL)module:(id)arg1 shouldAllowRemovingAction:(id)arg2;
- (void)cancelRevealAction;
- (void)cleanupAfterReveal;
- (void)resetUIForRevealActionEnd;
- (void)didSelectEndRevealButton;
- (void)didFinishAnimatingRevealGoBack;
- (void)resetVisibleCellStylesForEndReveal;
- (void)didFinishAnimatingReveal;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)traitCollectionDidChange:(id)arg1;
- (void)runWorkflowFromSource:(id)arg1;
@property(nonatomic) BOOL scrollsToTop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)updateEmptyStateViewVisibilityAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEditingState:(NSUInteger)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateEditingStateAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(/* void * CDUnknownFunctionPointerType */)arg4;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 allowsActionDragAndDrop:(BOOL)arg4;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3;

@end

