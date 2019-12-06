//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListViewDragObserver-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString, SBHIconManager, SBIconDraggingEditContext;

@interface SBIconDragManager : NSObject <SBIconListViewDragObserver>
{
    NSMapTable *_iconDrags;
    NSMapTable *_uniqueIdentifiersPerDropSession;
    NSMapTable *_uniqueIdentifiersPerDragSession;
    NSMutableDictionary *_revertingReplacementIndexPaths;
    NSHashTable *_platterViews;
    SBHIconManager *_iconManager;
    SBIconDraggingEditContext *_draggingEditContext;
}

+ (void)enumerateMedusaPlatterDragPreviewsInDragItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumerateAppDragContextsInDragItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)cancelAllDrags;
@property(retain, nonatomic) SBIconDraggingEditContext *draggingEditContext; // @synthesize draggingEditContext=_draggingEditContext;
@property(nonatomic) __weak SBHIconManager *iconManager; // @synthesize iconManager=_iconManager;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (void)coverSheetWillPresent:(id)arg1;
- (void)noteIconManagerEditingDidChange;
- (void)performSpringLoadedInteractionForIconDragOnIconView:(id)arg1;
- (BOOL)shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (void)iconDropSessionDidEnd:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3;
- (void)iconDropSessionDidEnd:(id)arg1;
- (void)concludeIconDrop:(id)arg1;
- (void)performIconDrop:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 inIconListView:(id)arg4;
- (void)performIconDrop:(id)arg1 inIconListView:(id)arg2;
- (void)iconDropSessionDidExitWithIdentifier:(id)arg1 fromIconListView:(id)arg2;
- (void)iconDropSessionDidExit:(id)arg1 fromIconListView:(id)arg2;
- (void)replaceAllBouncedIconsInContext:(id)arg1;
- (void)iconDropSessionWithIdentifier:(id)arg1 draggedIconIdentifiers:(id)arg2 didPauseAtLocation:(CGPoint)arg3 inIconListView:(id)arg4;
- (void)iconDropSession:(id)arg1 didPauseAtLocation:(CGPoint)arg2 inIconListView:(id)arg3;
- (id)iconDropSessionDidUpdate:(id)arg1 inIconListView:(id)arg2;
- (void)informQuickActionPlatterDidFinishPresentation:(id)arg1;
- (void)iconDropSessionDidEnter:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 inIconListView:(id)arg4;
- (void)iconDropSessionDidEnter:(id)arg1 inIconListView:(id)arg2;
- (BOOL)canAcceptDropInSession:(id)arg1 inIconListView:(id)arg2;
- (BOOL)canHandleIconDropSession:(id)arg1 inIconListView:(id)arg2;
- (void)_updateDragPreviewsForEditingState:(BOOL)arg1;
- (id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4;
- (void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3;
- (id)iconViewWillCancelDrag:(id)arg1;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(NSUInteger)arg3;
- (void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(NSUInteger)arg3;
- (void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3;
- (BOOL)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (BOOL)iconViewCanBeginDrags:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)firstHiddenIconIdentifierInDrag:(id)arg1;
- (id)draggedItemIdentifiersForDragDropSession:(id)arg1;
- (NSUInteger)maximumAllowedIconDroppingAnimationsForListView:(id)arg1;
- (id)_iconViewForDragItem:(id)arg1 inIconListView:(id)arg2;
- (id)_iconForDragItem:(id)arg1 inIconListView:(id)arg2;
- (void)_updateDragPreviewIconLabelsForDropSession:(id)arg1 inIconListView:(id)arg2;
- (id)_windowForDragPreviews;
- (void)removePlatterViewFromMedusaDragOffscreenWindow:(id)arg1;
- (void)addPlatterViewToMedusaDragOffscreenWindow:(id)arg1;
- (void)_handleScaleAdjustmentForDropSession:(id)arg1 currentListView:(id)arg2;
- (BOOL)canMakeIconViewRecipient:(id)arg1;
- (BOOL)shouldBeginEditingWhenAddingDragItems;
- (double)delayAfterAfterLiftPreviewToBeginEditing;
- (BOOL)shouldCancelDragsWhenEditingEnds;
- (BOOL)shouldBeginEditingWhenLiftPreviewBegins;
- (BOOL)shouldBeginEditingWhenDragBegins;
- (BOOL)doesIconLocationRepresentRealIconPosition:(id)arg1;
- (BOOL)doesIconViewRepresentRealIconPosition:(id)arg1;
- (BOOL)shouldUseGhostIconForIconView:(id)arg1;
- (void)watchdogDragWithIdentifier:(id)arg1;
- (void)cancelAllDrags;
- (void)cancelEditingAndAllDrags;
- (void)noteFolderControllerWillClose:(id)arg1;
- (void)noteFolderBeganScrolling;
- (void)noteIconTapped;
- (void)setIndexPath:(id)arg1 whenRevertingIconsWithPathPrefix:(id)arg2;
- (void)compactAndLayoutRootIconLists;
- (void)compactAndLayoutRootIconListsWithDuration:(double)arg1;
- (void)updateExistingIconPlaceholderForDragWithIdentifier:(id)arg1;
- (BOOL)swapTrackedIconWithIdentifier:(id)arg1 withIcon:(id)arg2;
- (void)revertLocationForIcon:(id)arg1 toPath:(id)arg2;
- (id)fullIndexPathForRevertingIcon:(id)arg1 context:(id)arg2;
- (void)revertActiveDragChanges;
- (void)revertDragChangesForDragWithIdentifier:(id)arg1;
- (void)captureInitialIconStateToDragContext:(id)arg1;
- (void)stopTrackingDragLocationForEditingForDragWithIdentifier:(id)arg1;
- (void)startTrackingDragLocationForEditingFromDropSession:(id)arg1 orDragSession:(id)arg2;
- (void)removeEmptyFoldersInFolder:(id)arg1;
- (void)removeEmptyFolders;
- (void)removeIconsWithDraggedIconIdentifiers:(id)arg1 savingOriginsToContext:(id)arg2;
- (void)removeAllGrabbedIconViews;
- (id)_replaceDraggedIconViewWithPlaceholder:(id)arg1;
- (BOOL)replaceDragPlaceholderWithReferencedIcons:(id)arg1;
- (BOOL)replaceDragPlaceholdersWithReferencedIconsInDragWithIdentifier:(id)arg1;
- (BOOL)replaceAllDragPlaceholdersWithReferencedIcons;
- (BOOL)removeAllDragPlaceholdersInFolder:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (BOOL)removeAllDragPlaceholders;
- (BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)arg1 placeholderPath:(out id )arg2;
- (BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)arg1;
- (id)draggedIconsForIdentifiers:(id)arg1;
- (id)draggedIconForIdentifier:(id)arg1;
- (id)iconIdentifierForDragItem:(id)arg1;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (void)addAppLocalContextsFromDragItems:(id)arg1 session:(id)arg2 toDragWithIdentifier:(id)arg3;
- (void)watchdogTimerDidFire:(id)arg1;
- (void)resetWatchdogTimerForDragWithIdentifier:(id)arg1 timeout:(double)arg2;
- (void)changeStateOfDragWithIdentifier:(id)arg1 toState:(long long)arg2;
- (void)_stopTrackingDragIfPossibleWithIdentifier:(id)arg1;
- (void)_stopTrackingDragWithIdentifier:(id)arg1;
- (void)_startTrackingDragWithIdentifier:(id)arg1;
- (BOOL)_isTrackingDragWithIdentifier:(id)arg1;
- (BOOL)_isTrackingDrag:(id)arg1;
- (id)iconDragContextForDragWithIdentifier:(id)arg1;
- (id)iconDragContextForDragDropSession:(id)arg1;
- (id)iconDragContextForDragSession:(id)arg1;
- (id)iconDragContextForDropSession:(id)arg1;
- (id)uniqueIdentifierForIconDragSession:(id)arg1;
- (id)uniqueIdentifierForIconDropSession:(id)arg1;
- (id)allDragIdentifiers;
- (void)enumerateIconDragContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconDragIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isTrackingDragMatchingPredicate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isTrackingActiveOrDroppingIconDrags) BOOL trackingActiveOrDroppingIconDrags;
@property(readonly, nonatomic, getter=isTrackingDroppingIconDrags) BOOL trackingDroppingIconDrags;
@property(readonly, nonatomic, getter=isTrackingUserActiveIconDrags) BOOL trackingUserActiveIconDrags;
- (BOOL)isTrackingDragInUserActiveLiftPreviewOriginatingFromIconView:(id)arg1;
- (BOOL)isTrackingUserActiveDragOriginatingFromIconView:(id)arg1;
- (BOOL)isTrackingDragOriginatingFromIconView:(id)arg1;
- (BOOL)isTrackingDragOfIcon:(id)arg1;
@property(readonly, nonatomic, getter=isTrackingMultipleItemIconDrags) BOOL trackingMultipleItemIconDrags;
@property(readonly, nonatomic, getter=isTrackingMultipleIconDrags) BOOL trackingMultipleIconDrags;
@property(readonly, nonatomic, getter=isIconDragging) BOOL iconDragging;
- (void)_cleanUpAllDraggingState;
- (id)rootFolder;
- (id)model;
- (id)init;
- (void)simulateIconDraggingEndedWithIdentifier:(id)arg1;
- (void)simulatePerformIconDropWithIdentifier:(id)arg1 inIconListView:(id)arg2;
- (void)simulateIconDragWithIdentifier:(id)arg1 didPauseAtLocation:(CGPoint)arg2 inIconListView:(id)arg3;
- (id)simulateiconDropSessionDidEnterWithIconIdentifiers:(id)arg1 inIconListView:(id)arg2;

@end

