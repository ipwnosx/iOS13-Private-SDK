//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol WFWebPageProtocol
- (BOOL)hasShortRefresh;
- (BOOL)hasFrameset;
- (NSArray *)links;
- (NSString *)pageContent;
- (NSArray *)images;
- (NSArray *)scriptBlocks;
- (NSArray *)metaTagsUnlabeled;
- (NSDictionary *)metaTagsLabeled;
- (NSString *)metaTagKeywords;
- (NSString *)metaTagDescription;
- (NSString *)pageTitle;
- (NSString *)URLString;
@end

