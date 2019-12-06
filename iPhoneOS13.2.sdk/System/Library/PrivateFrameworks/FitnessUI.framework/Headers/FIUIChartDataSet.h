//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FIUIChartDataSetDataSource;

@interface FIUIChartDataSet : NSObject
{
    NSArray *_points;
    NSArray *_labels;
    id <FIUIChartDataSetDataSource> _dataSource;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <FIUIChartDataSetDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)reloadData;
- (id)labelsForSet;
- (id)points;
- (id)minXValue;
- (id)maxXValue;
- (id)minYValue;
- (id)maxYValue;
- (id)description;

@end

