//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MROutputContextDataSource.h>

@class NSMutableArray, NSString;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource
{
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

// - (void).cxx_destruct;
- (void)_reevaluateMasterVolumeControlCapabilities;
- (unsigned int)_calculateMasterVolumeCapabilities;
- (void)_reevaluateMasterVolume;
- (float)_calculateMasterVolume;
- (id)outputDevices;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1 outputDeviceUID:(id)arg2;
- (void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (void)removeAllOutputDevices;
- (void)removeOutputDevices:(id)arg1;
- (void)updateOutputDevices:(id)arg1;
- (unsigned int)volumeControlCapabilities;
- (float)volume;
- (id)uniqueIdentifier;
- (id)initWithUniqueIdentifier:(id)arg1;

@end

