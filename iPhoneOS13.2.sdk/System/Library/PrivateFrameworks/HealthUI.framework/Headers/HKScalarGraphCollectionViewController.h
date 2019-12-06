//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class HKScalarGraphCollectionViewCell, HKUnitPreferenceController, NSArray, UICollectionView;
@protocol HKScalarGraphCollectionViewDelegate;

@interface HKScalarGraphCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_audiograms;
    id <HKScalarGraphCollectionViewDelegate> _delegate;
    UICollectionView *_collectionView;
    HKScalarGraphCollectionViewCell *_currentCell;
    long long _currentIndex;
    HKUnitPreferenceController *_unitController;
    double _collectionViewHeight;
    double _minimumHeight;
}

@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak HKScalarGraphCollectionViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HKScalarGraphCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *audiograms; // @synthesize audiograms=_audiograms;
// - (void).cxx_destruct;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_buildCollectionViewLayout;
- (void)_pinView:(id)arg1 toParentGuide:(id)arg2;
- (void)_setupChartCollectionView;
- (CGSize)preferredContentSize;
- (void)resetToMostRecent;
- (void)resetToIndex:(long long)arg1;
- (void)redrawCurrentCell;
- (void)reload;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMinimumHeight:(double)arg1 unitController:(id)arg2;

@end

