//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSArray;

@interface NRMigrator : NSObject
{
    BOOL _migrating;
    NRDevice *_migratingDevice;
}

+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1;
+ (id)migrationDataPreRestoreForConsentedDevices:(id)arg1;
+ (id)sharedMigrator;
@property(readonly, retain, nonatomic) NRDevice *migratingDevice; // @synthesize migratingDevice=_migratingDevice;
// - (void).cxx_destruct;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)enterPreMigrationMode;
- (id)lastMigrationRequestPhoneName;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) NSArray *migratableDevices;
@property(readonly, retain, nonatomic) NSArray *migratableDevicesRequiringConsent;
@property(readonly, retain, nonatomic) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property(readonly, nonatomic) BOOL migrationIsAvailable;
- (id)migrationConsentRequestData;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (id)_SHA256WithString:(id)arg1;
- (id)UDIDUUID;
- (id)compressMigrationProtobuf:(id)arg1;
- (void)shrinkMigrationProtobufs:(id)arg1;
- (id)packMigrationProtobufs:(id)arg1;
- (id)shortenStringByCompleteUnicodeCharactersToReduceStorageSpace:(id)arg1;

@end

