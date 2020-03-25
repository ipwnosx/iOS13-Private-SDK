//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVFlashlight, NSHashTable;
@protocol OS_dispatch_queue;

@interface SBUIFlashlightController : NSObject
{
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    NSUInteger _level;
    NSHashTable *_observers;
    BOOL _overheated;
    BOOL _available;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(readonly, nonatomic, getter=isOverheated) BOOL overheated; // @synthesize overheated=_overheated;
// - (void).cxx_destruct;
- (NSUInteger)_loadFlashlightLevel;
- (void)_storeFlashlightLevel:(NSUInteger)arg1;
- (void)_turnPowerOff;
- (void)_turnPowerOn;
- (void)_setFlashlightLevel:(float)arg1;
- (void)_postLevelChangeNotification:(NSUInteger)arg1;
- (void)_postAvailabilityChangeNotification:(BOOL)arg1;
- (void)_postOverheatedChangeNotification:(BOOL)arg1;
- (void)_updateStateWithAvailable:(BOOL)arg1 level:(NSUInteger)arg2 overheated:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)coolDown;
- (void)warmUp;
@property(nonatomic) NSUInteger level;
- (void)turnFlashlightOffForReason:(id)arg1;
- (void)turnFlashlightOnForReason:(id)arg1;
- (id)init;

@end
