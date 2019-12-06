//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSError, NSString;
@protocol WBSDataCache;

@protocol WBSDataCacheDelegate <NSObject>

@optional
- (void)dataCacheDidReset:(id <WBSDataCache>)arg1;
- (void)dataCache:(id <WBSDataCache>)arg1 didFailToLoadEntryForKeyString:(NSString *)arg2 error:(NSError *)arg3;
- (void)dataCache:(id <WBSDataCache>)arg1 didLoadEntry:(NSData *)arg2 forKeyString:(NSString *)arg3;
- (void)dataCacheDidSetUp:(id <WBSDataCache>)arg1;
@end

