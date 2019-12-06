//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXFeedSectionInfosManagerDelegate-Protocol.h>
#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSDate, PXFeedSectionInfosManager, PXInboxAggregateDataSourceManager;

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    PXInboxAggregateDataSourceManager *_inboxDataSourceManager;
    NSDate *_cachedPriorityDate;
}

@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager; // @synthesize inboxDataSourceManager=_inboxDataSourceManager;
@property(retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // @synthesize feedSectionInfosManager=_feedSectionInfosManager;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)_currentGadgetOfType:(NSUInteger)arg1;
- (void)_updateGadgets;
- (long long)_countOfSectionInfosToDisplay:(NSUInteger)arg1;
- (void)_updateGadgetTitle;
- (id)_gadgetTitle;
- (void)_navigateToSharedAlbumActivityFeed:(id)arg1;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)resetPriorityDate;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (BOOL)supportsDynamicRanking;
- (void)dealloc;
- (id)init;

@end

