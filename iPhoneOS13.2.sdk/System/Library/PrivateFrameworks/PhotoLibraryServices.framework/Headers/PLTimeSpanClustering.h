//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLTimeSpanClustering : PLDataClustering
{
    NSUInteger _averageNumberOfObjects;
    double _minimumSpan;
}

@property(nonatomic) double minimumSpan; // @synthesize minimumSpan=_minimumSpan;
@property(nonatomic) NSUInteger averageNumberOfObjects; // @synthesize averageNumberOfObjects=_averageNumberOfObjects;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (NSUInteger)_findNearestIndexMatchingTimeSpan:(NSUInteger)arg1 inDataset:(id)arg2;
- (id)init;

@end

