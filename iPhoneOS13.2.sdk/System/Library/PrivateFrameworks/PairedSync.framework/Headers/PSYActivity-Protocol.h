//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PSYSyncOptions;

@protocol PSYActivity <NSObject>
- (oneway void)abortSyncWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (oneway void)beginSyncWithOptions:(PSYSyncOptions *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

