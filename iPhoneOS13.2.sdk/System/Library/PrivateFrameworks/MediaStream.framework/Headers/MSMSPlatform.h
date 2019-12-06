//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/MSPlatform-Protocol.h>

@class ACAccountStore, NSData;

@interface MSMSPlatform : NSObject <MSPlatform>
{
    BOOL _isPerfLoggingEnabled;
    NSData *_pushToken;
    ACAccountStore *_accountStore;
}

+ (id)thePlatform;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) BOOL isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
// - (void).cxx_destruct;
- (id)theDaemon;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (BOOL)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)arg1;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)contentURLForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)authTokenForPersonID:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (void)didDetectUnrecoverableCondition;
- (id)socketOptions;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (BOOL)_mayPerformFileTransfer;
- (id)appBundleInfoString;
- (id)OSString;
- (id)hardwareString;
- (id)stringForSysctlKey:(id)arg1;
- (id)OSVersion;
- (id)UDID;
- (Class)deletePluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (Class)pluginClass;
- (id)pathMediaStreamDir;
//  (void)logFile:(const char )arg1 func:(const char )arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (void)_rereadDefaults;
- (BOOL)isPerformanceLoggingEnabled;
//  (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
//  (struct __CFString )_facilityStringForFacility:(int)arg1;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (id)init;

@end

