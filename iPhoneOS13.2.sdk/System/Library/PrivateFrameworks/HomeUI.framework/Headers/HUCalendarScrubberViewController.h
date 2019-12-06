//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeUI/HUCalendarScrubberDataSourceChangeObserver-Protocol.h>

@class HUCalendarScrubberDataSource;
@protocol HUCalendarScrubberViewDelegate;

@interface HUCalendarScrubberViewController : UICollectionViewController <HUCalendarScrubberDataSourceChangeObserver>
{
    HUCalendarScrubberDataSource *_dataSource;
    id <HUCalendarScrubberViewDelegate> _scrubberDelegate;
    long long _currentSection;
    id /* CDUnknownBlockType */ _scrollCompletionBlock;
    double _lastBoundsWidth;
}

@property(nonatomic) double lastBoundsWidth; // @synthesize lastBoundsWidth=_lastBoundsWidth;
@property(copy, nonatomic) id /* CDUnknownBlockType */ scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) __weak id <HUCalendarScrubberViewDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(retain, nonatomic) HUCalendarScrubberDataSource *dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)scrubberDataSourceDidReload:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)jumpToSection:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSUInteger previousSection;
@property(readonly, nonatomic) NSUInteger nextSection;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

