//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSMutableDictionary, NSMutableSet;
@protocol MMCSOperationStateTimeRange;

@protocol MMCSOperationMetric <NSObject>
@property(readonly) NSArray *rangesCopy;
@property(readonly) NSMutableSet *requestUUIDs;
@property(readonly) NSMutableDictionary *fileCountByChunkProfile;
@property(readonly) NSMutableDictionary *chunkCountByChunkProfile;
@property(readonly) NSMutableDictionary *totalBytesByChunkProfile;
@property NSUInteger connectionsCreated;
@property NSUInteger connections;
@property NSUInteger bytesDownloaded;
@property NSUInteger bytesUploaded;
@property double executing;
@property double queueing;
@property(readonly) double duration;
@property(readonly) NSDate *startDate;
- (id <MMCSOperationStateTimeRange>)newRangeWithOperationState:(NSUInteger)arg1 startDate:(NSDate *)arg2 duration:(double)arg3;
- (void)addRange:(id <MMCSOperationStateTimeRange>)arg1;
@end

