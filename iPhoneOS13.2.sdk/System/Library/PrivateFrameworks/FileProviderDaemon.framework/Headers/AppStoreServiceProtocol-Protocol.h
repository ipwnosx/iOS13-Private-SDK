//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol FPOperationClient;

@protocol AppStoreServiceProtocol
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchAppStoreIconsForAppBundleIDs:(NSArray *)arg2 desiredSizeToScale:(CGSize)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

