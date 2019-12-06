//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MSASPendingChanges : NSObject
{
    NSMutableSet *_pendingAlbumGUIDsWithKeyValueChanges;
    NSMutableSet *_pendingAlbumChanges;
    NSMutableSet *_pendingAlbumGUIDsWithSharingInfoChanges;
    NSMutableDictionary *_pendingAlbumGUIDToAssetCollections;
}

@property(retain, nonatomic) NSMutableDictionary *pendingAlbumGUIDToAssetCollections; // @synthesize pendingAlbumGUIDToAssetCollections=_pendingAlbumGUIDToAssetCollections;
@property(retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithSharingInfoChanges; // @synthesize pendingAlbumGUIDsWithSharingInfoChanges=_pendingAlbumGUIDsWithSharingInfoChanges;
@property(retain, nonatomic) NSMutableSet *pendingAlbumChanges; // @synthesize pendingAlbumChanges=_pendingAlbumChanges;
@property(retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithKeyValueChanges; // @synthesize pendingAlbumGUIDsWithKeyValueChanges=_pendingAlbumGUIDsWithKeyValueChanges;
// - (void).cxx_destruct;
- (BOOL)hasPendingChanges;
- (void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1;
- (void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2;
- (void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2;
- (void)removePendingChangesForAlbumGUID:(id)arg1;
- (void)addPendingChangesForAlbumGUID:(id)arg1;
- (void)removePendingKeyValueChangesForAlbumGUID:(id)arg1;
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3;

@end

