//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBDataProvider, NSString;

@protocol BBDataProviderStore <NSObject>
- (void)performBlockOnDataProviders:(void (^)(BBDataProvider *))arg1;
- (void)removeDataProvider:(BBDataProvider *)arg1;
- (BBDataProvider *)dataProviderForUniversalSectionID:(NSString *)arg1;
- (BBDataProvider *)dataProviderForSectionID:(NSString *)arg1;
@end

