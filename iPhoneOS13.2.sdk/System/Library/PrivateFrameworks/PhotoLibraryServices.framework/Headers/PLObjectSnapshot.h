//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKnownKeysDictionary, PLManagedObject;

@interface PLObjectSnapshot : NSObject
{
    PLManagedObject *_managedObject;
    NSKnownKeysDictionary *_snapshotValues;
//    struct __CFDictionary _indexMaps;
}

//  (struct __CFDictionary )_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;
+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(BOOL)arg3;
@property(readonly, nonatomic) PLManagedObject *managedObject; // @synthesize managedObject=_managedObject;
// - (void).cxx_destruct;
- (void)setAssetsSnapshot:(id)arg1;
- (id)_allSnapshotValuesDescription;
- (id)_snapshotValueForProperty:(id)arg1;
- (id)description;
- (id)filteredIndexesForFilter:(id)arg1;
- (id)indexMapStateForDerivedObject:(id)arg1;
- (BOOL)hasSnapshotValueForProperty:(id)arg1;
- (id)snapshotValueForProperty:(id)arg1;
//  (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary )arg4 useCommitedValues:(BOOL)arg5;
- (void)dealloc;
- (id)init;

@end

