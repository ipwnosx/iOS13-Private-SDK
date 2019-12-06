//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HKChartCacheDataSource;

@interface HKInteractiveChartOverlayNamedDataSource : NSObject
{
    id <HKChartCacheDataSource> _dataSource;
    NSString *_name;
    id /* CDUnknownBlockType */ _contextTitleForTimeScope;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ contextTitleForTimeScope; // @synthesize contextTitleForTimeScope=_contextTitleForTimeScope;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <HKChartCacheDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 named:(id)arg2 withContextTitleForTimeScope:(CDUnknownBlockType)arg3;

@end

