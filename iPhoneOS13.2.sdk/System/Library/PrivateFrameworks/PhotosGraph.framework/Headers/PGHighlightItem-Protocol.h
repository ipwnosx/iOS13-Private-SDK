//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSString, PHAsset;

@protocol PGHighlightItem <NSObject>
@property(readonly, nonatomic) id modelObject;
@property(readonly, nonatomic) unsigned short enrichmentState;
@property(readonly, nonatomic) unsigned short visibilityState;
@property(readonly, nonatomic) unsigned short kind;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) NSUInteger numberOfAssetsInExtended;
@property(readonly, nonatomic) NSArray *extendedCuratedAssets;
@property(readonly, nonatomic) PHAsset *keyAsset;
@property(readonly, copy, nonatomic) NSString *smartDescription;
@property(readonly, copy, nonatomic) NSString *dateDescription;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end

