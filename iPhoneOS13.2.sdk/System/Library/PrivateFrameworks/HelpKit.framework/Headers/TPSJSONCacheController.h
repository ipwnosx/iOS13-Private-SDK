//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/TPSDataCacheController.h>

@interface TPSJSONCacheController : TPSDataCacheController
{
}

+ (id)sharedInstance;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isURLValid:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)newDataCache;
- (void)commonInit;

@end

