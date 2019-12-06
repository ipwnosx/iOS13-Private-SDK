//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableOrderedSet, NSNumber, NSString, NSURL, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject
{
    BOOL _isFolder;
    BOOL _pinned;
    BOOL _inTrash;
    BOOL _customSortAscending;
    BOOL _allowsOverwrite;
    int _customSortKey;
    NSString *_title;
    NSString *_uuid;
    NSString *_cloudGUID;
    NSNumber *_kind;
    NSString *_customKeyAssetUUID;
    NSMutableOrderedSet *_assetUUIDs;
    NSString *_importSessionID;
    NSData *_userQueryData;
    PLGenericAlbum *_genericAlbum;
    NSURL *_metadataURL;
}

+ (BOOL)isValidPath:(id)arg1;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) PLGenericAlbum *genericAlbum; // @synthesize genericAlbum=_genericAlbum;
@property(nonatomic) BOOL allowsOverwrite; // @synthesize allowsOverwrite=_allowsOverwrite;
@property(retain, nonatomic) NSData *userQueryData; // @synthesize userQueryData=_userQueryData;
@property(retain, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(retain, nonatomic) NSMutableOrderedSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(retain, nonatomic) NSString *customKeyAssetUUID; // @synthesize customKeyAssetUUID=_customKeyAssetUUID;
@property(nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(nonatomic) BOOL customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property(nonatomic, getter=isInTrash) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property(nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(readonly, nonatomic) BOOL isFolder; // @synthesize isFolder=_isFolder;
@property(retain, nonatomic) NSNumber *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)_saveMetadata;
- (BOOL)_readMetadata;
- (id)description;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)removePersistedAlbumData;
- (void)persistAlbumData;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithPLGenericAlbum:(id)arg1 pathManager:(id)arg2;
- (id)init;

@end

