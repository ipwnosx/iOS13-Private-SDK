//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASDeviceState : NSObject
{
}

+ (id)currentOsBuild;
+ (void)blockUntilFirstUnlock;
+ (BOOL)isDeviceFormattedForProtection;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;
+ (id)registerForLockStateChangeNotifications:(CDUnknownBlockType)arg1;
+ (int)lockState;
+ (BOOL)isUnlocked;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(CDUnknownBlockType)arg1;
+ (BOOL)isClassCLocked;
+ (void)setDefaultSystemCallbacks;
//  (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks )arg1;

@end

