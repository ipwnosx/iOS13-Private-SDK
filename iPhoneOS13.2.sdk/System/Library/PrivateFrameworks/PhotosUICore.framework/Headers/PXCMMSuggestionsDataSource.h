//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSObject, PXCMMSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMSuggestionsDataSourceState *__state;
}

@property(readonly, nonatomic) PXCMMSuggestionsDataSourceState *_state; // @synthesize _state=__state;
// - (void).cxx_destruct;
- (long long)_adjustedIndexFromIndex:(long long)arg1;
//  (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
//  (id)suggestionAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
//  (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end

