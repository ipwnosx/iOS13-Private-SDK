//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _KSDeviceStateMonitor : NSObject
{
    BOOL _isContentProtectionAvailable;
}

+ (BOOL)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;
@property(nonatomic) BOOL isContentProtectionAvailable; // @synthesize isContentProtectionAvailable=_isContentProtectionAvailable;
- (BOOL)isDataAvailableForClassC;
- (void)dealloc;
- (id)init;

@end

