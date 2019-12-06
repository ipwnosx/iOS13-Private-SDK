//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsHardwareVolumeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    NSMapTable *_assertions;
    NSArray *_volumeButtonConsumerInvalidators;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *volumeButtonConsumerInvalidators; // @synthesize volumeButtonConsumerInvalidators=_volumeButtonConsumerInvalidators;
@property(retain, nonatomic) NSMapTable *assertions; // @synthesize assertions=_assertions;
// - (void).cxx_destruct;
- (void)_relinquishHardwareVolumeButtons;
- (void)_requestHardwareVolumeButtons;
- (void)_updateVolumeControlsForRoute:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1 forRoute:(id)arg2;
- (id)requestVolumeControlsForRoute:(id)arg1;
- (id)init;

@end

