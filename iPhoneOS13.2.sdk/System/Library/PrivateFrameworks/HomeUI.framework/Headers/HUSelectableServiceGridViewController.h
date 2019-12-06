//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFMutableSetDiff, HFSetDiff, HUServiceGridItemManager;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    BOOL _allowsEmptySelection;
    BOOL _allowsMultipleSelection;
    HUServiceGridItemManager *_serviceGridItemManager;
    HFMutableSetDiff *_mutableSelectedItems;
}

+ (CDUnknownBlockType)defaultItemProviderCreatorWithOptions:(NSUInteger)arg1;
+ (CDUnknownBlockType)transformationBlockWithOptions:(NSUInteger)arg1;
+ (id)itemServiceTypesToHide;
@property(retain, nonatomic) HFMutableSetDiff *mutableSelectedItems; // @synthesize mutableSelectedItems=_mutableSelectedItems;
@property(nonatomic) __weak HUServiceGridItemManager *serviceGridItemManager; // @synthesize serviceGridItemManager=_serviceGridItemManager;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
// - (void).cxx_destruct;
- (void)_deleteItemFromSelection:(id)arg1;
- (void)_addItemToSelection:(id)arg1;
- (BOOL)_wantsToggleButtonForSection:(NSUInteger)arg1;
- (void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2;
- (void)_setSelected:(BOOL)arg1 forItemsInSection:(long long)arg2;
- (void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2;
- (BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)addItemToSelection:(id)arg1;
- (void)deleteItemFromSelection:(id)arg1;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)didChangeSelection;
- (BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)_removeAllServicesInSectionFromButton:(id)arg1;
- (void)_addAllServicesInSectionFromButton:(id)arg1;
@property(retain, nonatomic) HFSetDiff *selectedItems;
- (id)initWithItemManager:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;

@end

