//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutItem;

@protocol PXMutableLayoutEngine <NSObject>
@property(retain, nonatomic) id <PXLayoutItem> seedItem;
- (void)setDataSourceSnapshot:(id <PXLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXLayoutDataSourceChangeDetails>)arg2;
@end

