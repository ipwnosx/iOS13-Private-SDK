//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCHardwareSettings.h>

#import <AVConference/VCHardwareSettingsMacProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol>
{
    BOOL _hiDefEncoding;
    int _hardwareScore;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _machineType;
    int _cpuFamily;
    NSString *_cpuType;
    NSString *_machineName;
    BOOL _isGVAEncoderAvailableInitialized;
    BOOL _isGVAEncoderAvailable;
}

+ (long long)deviceClass;
+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL supportsHEIFEncoding;
@property(readonly, nonatomic) BOOL isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property(readonly, nonatomic) BOOL isIMac;
@property(readonly, nonatomic) BOOL isMacPro;
@property(readonly, nonatomic) BOOL isMacBookWVGA;
@property(readonly, nonatomic) BOOL canDoHiDefDecoding;
@property(readonly, nonatomic) BOOL canDoHEVC;
@property(readonly, nonatomic) BOOL canDoHiDefEncoding;
- (BOOL)isGVAEncoderAvailable;
- (BOOL)_isModel:(id)arg1;
- (BOOL)_isMachineNewerThanSandybridge:(int)arg1;
- (id)_getCPUTypeStringForMachineType:(int)arg1;
- (int)_getCPUFamilyType;
- (void)dealloc;
- (id)init;

@end

