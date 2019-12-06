//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/STSyncableSubObject-Protocol.h>

@protocol STSerializableManagedObject;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>
{
}

+ (id)fetchRequestForOrphanedDevices;
+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id )arg2;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id )arg3;
+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id )arg3;
@property(readonly) id <STSerializableManagedObject> syncableRootObject;

@end

