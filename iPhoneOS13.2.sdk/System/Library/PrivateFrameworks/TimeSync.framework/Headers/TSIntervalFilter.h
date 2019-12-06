//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSIntervalFilter : NSObject
{
    NSUInteger _expectedInterval;
    unsigned int _multiIntervalCount;
    NSUInteger _filterCount;
    NSUInteger _filteredTimestamps;
    unsigned int _timestampIndex;
    NSUInteger _timestampCount[8];
    NSUInteger _timestampIntervals[8];
    long long _validEntry;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned char _filterSize;
    NSUInteger _filterOffset;
//    struct IOTS_U128 _filteredSnapshot;
//    struct IOTS_U128 _filteredOffset;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)changeToNewFilterSize:(unsigned char)arg1;
- (void)resetFilterWithNewExpectedInterval:(NSUInteger)arg1 multiIntervalCount:(unsigned int)arg2;
- (void)resetFilterWithNewExpectedInterval:(NSUInteger)arg1;
- (void)resetFilter;
- (NSUInteger)filterCountForEntry:(long long)arg1;
@property(readonly, nonatomic) NSUInteger filterCount; // @dynamic filterCount;
- (NSUInteger)multiIntervalTimeForEntry:(long long)arg1;
@property(readonly, nonatomic) NSUInteger multiIntervalTime; // @dynamic multiIntervalTime;
- (NSUInteger)addTimestamp:(NSUInteger)arg1 entry:(long long )arg2;
- (NSUInteger)addTimestamp:(NSUInteger)arg1;
- (NSUInteger)_calculateNewTimestamp:(NSUInteger)arg1;
- (id)initWithExpectedInterval:(NSUInteger)arg1 multiIntervalCount:(unsigned int)arg2 filterSize:(unsigned char)arg3;

@end

