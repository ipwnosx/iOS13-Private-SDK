//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class REDataSourceManager, REElementDataSourceController;

@protocol REDataSourceManagerObserver <NSObject>
- (void)dataSourceManager:(REDataSourceManager *)arg1 willUnloadDataSourceController:(REElementDataSourceController *)arg2;
- (void)dataSourceManager:(REDataSourceManager *)arg1 didLoadDataSourceController:(REElementDataSourceController *)arg2;
@end

