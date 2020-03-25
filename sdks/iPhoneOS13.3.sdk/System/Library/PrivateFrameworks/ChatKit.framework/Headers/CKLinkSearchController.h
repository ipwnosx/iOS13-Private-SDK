//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKLinkSearchController : CKMessageTypeSearchController
{
}

+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
- (BOOL)handleSelectionForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (BOOL)shouldStartMenuInteractionForResult:(id)arg1;
- (void)deleteAttachmentForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)_additionalMenuActionsForResult:(id)arg1;
- (Class)_richLinkDatasourceClass;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)postProcessAndUpdateResults:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (double)interGroupSpacing;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)filterQueries;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;

@end
