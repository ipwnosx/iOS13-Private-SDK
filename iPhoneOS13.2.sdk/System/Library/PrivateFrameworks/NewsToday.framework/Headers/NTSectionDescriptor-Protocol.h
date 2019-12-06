//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NFCopying-Protocol.h>
#import <NewsToday/NTSectionDisplayDescriptor-Protocol.h>
#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString;

@protocol NTSectionDescriptor <NTSectionDisplayDescriptor, NTSectionFetchDescriptor, NSObject, NFCopying>
@property(readonly, nonatomic) BOOL openVideoPlaylistInApp;
@property(readonly, nonatomic) int leadingCellPromotionPolicy;
@property(readonly, nonatomic) long long supplementalIntraSectionFilterOptions;
@property(readonly, nonatomic) long long supplementalInterSectionFilterOptions;
@property(readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) int seenArticlesFilterMethod;
@property(readonly, nonatomic) int readArticlesFilterMethod;
@property(readonly, nonatomic) NSUInteger maximumStoriesAllocation;
@property(readonly, nonatomic) NSUInteger minimumStoriesAllocation;
@property(readonly, nonatomic) NSUInteger fallbackOrder;
@property(readonly, nonatomic) NSUInteger cachedResultCutoffTime;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property(readonly, copy, nonatomic) NSString *referralBarName;
@property(readonly, copy, nonatomic) NSString *compactName;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

