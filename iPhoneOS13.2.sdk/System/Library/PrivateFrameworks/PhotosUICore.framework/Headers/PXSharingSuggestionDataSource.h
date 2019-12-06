//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleDataSource.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface PXSharingSuggestionDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    BOOL _prefetchingStarted;
}

@property(nonatomic) BOOL prefetchingStarted; // @synthesize prefetchingStarted=_prefetchingStarted;
// - (void).cxx_destruct;
- (void)setMembers:(id)arg1;
- (void)prefetchThumbnailsForTargetSize:(CGSize)arg1 maxFetchCount:(NSUInteger)arg2;
- (id)titleAtIndex:(NSUInteger)arg1;
- (void)imageCacheDidChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)dealloc;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;

@end

