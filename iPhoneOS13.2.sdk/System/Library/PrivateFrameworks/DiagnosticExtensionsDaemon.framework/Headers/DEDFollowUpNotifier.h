//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDNotifier-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class DEDNotifierConfiguration, FLFollowUpController, NSString;
@protocol OS_os_log;

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding>
{
    DEDNotifierConfiguration *_config;
    NSString *_bugSessionIdentifier;
    FLFollowUpController *_followUpController;
    NSObject<OS_os_log> *_log;
}

+ (BOOL)supportsSecureCoding;
+ (id)archivedClasses;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain) NSString *bugSessionIdentifier; // @synthesize bugSessionIdentifier=_bugSessionIdentifier;
@property __weak DEDNotifierConfiguration *config; // @synthesize config=_config;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)cancelNotification;
- (void)scheduleNotification;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;

@end

