//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncStoreEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
// + (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;
+ (id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2;
+ (id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id )arg3;
+ (id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id )arg4;
- (long long)syncProvenance;

@end

