//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCTagProviding-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding <FCTagProviding>
@property(readonly, copy, nonatomic) NSString *backIssuesListID;
@property(readonly, copy, nonatomic) NSArray *currentIssueIDs;
@property(readonly, nonatomic) BOOL isWhitelisted;
@property(readonly, nonatomic) BOOL supportsNotifications;
@property(readonly, copy, nonatomic) NSString *defaultSectionID;
@property(readonly, copy, nonatomic) NSArray *sectionIDs;
- (NSString *)paidFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (NSString *)freeFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
@end

