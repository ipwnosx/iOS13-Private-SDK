//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>
{
    NSDate *_cachedPriorityDate;
}

@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
// - (void).cxx_destruct;
- (void)resetPriorityDate;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (BOOL)supportsDynamicRanking;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;

@end

