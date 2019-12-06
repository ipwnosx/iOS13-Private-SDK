//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

+ (NSObject )albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
@property(nonatomic) int filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) NSUInteger containersCount;
- (id)containers;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(NSObject )arg1;
@property(readonly, nonatomic) BOOL isFolder;
- (BOOL)canEditAlbums;
- (short)albumListType;
- (id)managedObjectContext;
@property(readonly, nonatomic) NSUInteger unreadAlbumsCount;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, nonatomic) NSUInteger albumsCount;
- (id)albums;
- (id)identifier;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_invalidateAllAlbums;
- (void)dealloc;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

@end

