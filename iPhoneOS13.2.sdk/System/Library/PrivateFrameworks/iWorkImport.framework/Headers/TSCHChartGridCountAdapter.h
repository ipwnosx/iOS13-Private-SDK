//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartGridAdapter.h>

__attribute__((visibility("hidden")))
@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter
{
    BOOL mCountFromOne;
    NSUInteger mIndexFactor;
}

@property(nonatomic) NSUInteger indexFactor; // @synthesize indexFactor=mIndexFactor;
@property(nonatomic) BOOL countFromOne; // @synthesize countFromOne=mCountFromOne;
- (void)setValue:(id)arg1 atIndex:(NSUInteger)arg2;
- (id )valuesAtIndexes:(NSRange *)arg1;
- (id)valueAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (id)initWithCount:(NSUInteger)arg1;

@end

