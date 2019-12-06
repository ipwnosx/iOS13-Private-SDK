//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DocumentCamera/ICDocCamThumbnailViewLayoutDelegate-Protocol.h>

@class ICDocCamImageCache, ICDocCamThumbnailCollectionViewLayout, NSMutableArray;
@protocol ICDocCamThumbnailViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate>
{
    BOOL _isPerformingBatchUpdates;
    BOOL _needReloadAfterBatchUpdates;
    NSMutableArray *_documentInfoArray;
    ICDocCamImageCache *_imageCache;
    id <ICDocCamThumbnailViewDelegate> _delegate;
    ICDocCamThumbnailCollectionViewLayout *_layout;
}

@property(nonatomic) BOOL needReloadAfterBatchUpdates; // @synthesize needReloadAfterBatchUpdates=_needReloadAfterBatchUpdates;
@property(nonatomic) BOOL isPerformingBatchUpdates; // @synthesize isPerformingBatchUpdates=_isPerformingBatchUpdates;
@property(retain, nonatomic) ICDocCamThumbnailCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <ICDocCamThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *documentInfoArray; // @synthesize documentInfoArray=_documentInfoArray;
// - (void).cxx_destruct;
- (void)animateLayoutChange;
- (void)addNewDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)update;
- (void)reloadDataForCollectionView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setImageWithUUID:(id)arg1 forCell:(id)arg2 useResizedImage:(BOOL)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)rootView;
- (CGRect)targetViewRect;
- (CGSize)collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

