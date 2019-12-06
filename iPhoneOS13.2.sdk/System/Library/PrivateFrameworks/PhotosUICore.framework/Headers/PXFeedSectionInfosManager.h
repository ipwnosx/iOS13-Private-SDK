//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLAssetChangeObserver-Protocol.h>
#import <PhotosUICore/PLCloudCommentsChangeObserver-Protocol.h>
#import <PhotosUICore/PLCloudFeedEntriesObserver-Protocol.h>
#import <PhotosUICore/PLPhotoLibraryShouldReloadObserver-Protocol.h>
#import <PhotosUICore/PXConfigurableFeedSectionInfosManager-Protocol.h>

@class NSDate, NSMutableArray, NSMutableDictionary, PLPhotoLibrary;
@protocol PXFeedSectionInfosManagerDelegate;

@interface PXFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager>
{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_sectionInfos;
    NSMutableDictionary *_sectionInfosByCloudFeedEntry;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingCommentsChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    long long _entryFilter;
    NSDate *_earliestDate;
    NSUInteger _fetchLimit;
    id <PXFeedSectionInfosManagerDelegate> _delegate;
}

+ (id)mostRecentCreationDate;
@property(nonatomic) __weak id <PXFeedSectionInfosManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) NSDate *earliestDate; // @synthesize earliestDate=_earliestDate;
@property(nonatomic) long long entryFilter; // @synthesize entryFilter=_entryFilter;
// - (void).cxx_destruct;
- (id)initWithPhotoLibraryForTesting:(id)arg1 filter:(long long)arg2;
- (CDUnknownBlockType)_sectionInfoSortingComparator;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)shouldReload:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)_getEarliestDate:(out id )arg1 mostRecentEntries:(out id )arg2 forBatchWithLatestDate:(id)arg3;
- (void)_rebuildSectionInfos;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (long long)numberOfInvitationsReceived;
- (BOOL)reconfigureToIncludeCloudFeedEntry:(id)arg1;
- (void)reconfigure:(CDUnknownBlockType)arg1;
- (void)loadSectionInfosAtIndexes:(id)arg1;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (id)sectionInfoWithIdentifier:(id)arg1;
- (long long)indexOfSectionInfo:(id)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (id)sectionInfoAtIndex:(long long)arg1;
- (BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)numberOfSectionInfos;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2;

@end

