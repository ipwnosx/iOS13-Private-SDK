//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;

@interface HMDDeviceSetupManager : HMFObject
{
    id <HMFLocking> _lock;
    int _proxSetupNotificationToken;
    BOOL _running;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)stopAdvertising;
- (void)startAdvertising;
- (id)followUpController;
@property(readonly, getter=isRunning) BOOL running; // @synthesize running=_running;
- (void)dealloc;
- (id)init;

@end

