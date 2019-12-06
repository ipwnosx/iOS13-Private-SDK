//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncEntity-Protocol.h>

@interface HDDataSyncEntity : NSObject <HDSyncEntity>
{
}

+ (id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(NSUInteger)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id )arg5;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)objectsFromCodableObjectsInCollection:(id)arg1;
+ (id)_provenanceFromCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id )arg4;
//  (BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id )arg5;
+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (id)_predicateForSyncSession:(id)arg1;
+ (id)_objectWithCodable:(id)arg1;
+ (Class)healthEntityClass;
+ (id)syncEntityIdentifier;

@end

