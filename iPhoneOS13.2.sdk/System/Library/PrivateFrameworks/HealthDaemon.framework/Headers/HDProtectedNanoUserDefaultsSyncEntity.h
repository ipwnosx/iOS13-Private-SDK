//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDNanoUserDefaultsSyncEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@interface HDProtectedNanoUserDefaultsSyncEntity : HDNanoUserDefaultsSyncEntity <HDNanoSyncEntity>
{
}

+ (id)_didReceiveKeysAndValuesNotificationName;
+ (id)syncEntityIdentifier;
+ (long long)category;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

