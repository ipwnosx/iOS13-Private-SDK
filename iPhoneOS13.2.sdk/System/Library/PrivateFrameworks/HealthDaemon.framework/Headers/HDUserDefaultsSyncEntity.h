//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@interface HDUserDefaultsSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>
{
}

+ (id)syncEntityIdentifier;
+ (long long)category;
+ (NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

