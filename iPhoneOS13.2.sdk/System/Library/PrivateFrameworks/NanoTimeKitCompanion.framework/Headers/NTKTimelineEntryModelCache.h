//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;
@protocol NTKTimelineEntryModelCacheDataSource;

@interface NTKTimelineEntryModelCache : NSObject
{
    NSMutableArray *_cachedEntryModels;
    NSDate *_cacheStartDate;
    NSDate *_cacheEndDate;
    id <NTKTimelineEntryModelCacheDataSource> _dataSource;
}

+ (id)_endOfDayForDate:(id)arg1;
+ (id)_startOfDayAfterDate:(id)arg1;
+ (id)_startOfDayBeforeDate:(id)arg1;
+ (id)_startOfDayForDate:(id)arg1;
@property(nonatomic) __weak id <NTKTimelineEntryModelCacheDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSDate *cacheEndDate; // @synthesize cacheEndDate=_cacheEndDate;
@property(readonly, nonatomic) NSDate *cacheStartDate; // @synthesize cacheStartDate=_cacheStartDate;
// - (void).cxx_destruct;
- (id)calendar;
- (id)_cachedEntryModelAfterDate:(id)arg1 limit:(NSUInteger)arg2;
- (id)_cachedEntryModelBeforeDate:(id)arg1 limit:(NSUInteger)arg2;
- (id)_cachedEntryModelForDate:(id)arg1;
- (void)_extendCacheTowardDate:(id)arg1;
- (void)invalidate;
- (id)entryModelsAfterDate:(id)arg1 limit:(NSUInteger)arg2;
- (id)entryModelsBeforeDate:(id)arg1 limit:(NSUInteger)arg2;
- (id)entryModelForDate:(id)arg1;
- (BOOL)hasEntryModelForDate:(id)arg1;
- (id)init;

@end

