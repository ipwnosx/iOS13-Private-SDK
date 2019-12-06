//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/UNUserNotificationCenterDelegate-Protocol.h>

@class NSArray, NSError, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface CUUserNotificationSession : NSObject <UNUserNotificationCenterDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_requestIdentifier;
    int _state;
    NSError *_stepError;
    int _stepState;
    UNUserNotificationCenter *_unCenter;
//    struct LogCategory _ucat;
    unsigned int _flags;
    id /* CDUnknownBlockType */ _actionHandler;
    NSString *_bodyKey;
    NSArray *_bodyArguments;
    NSString *_bundleID;
    NSString *_categoryID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_header;
    NSString *_identifier;
    NSString *_label;
    long long _soundAlertType;
    NSString *_subtitleKey;
    NSArray *_subtitleArguments;
    NSString *_titleKey;
    NSArray *_titleArguments;
}

@property(copy, nonatomic) NSArray *titleArguments; // @synthesize titleArguments=_titleArguments;
@property(copy, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(copy, nonatomic) NSArray *subtitleArguments; // @synthesize subtitleArguments=_subtitleArguments;
@property(copy, nonatomic) NSString *subtitleKey; // @synthesize subtitleKey=_subtitleKey;
@property(nonatomic) long long soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSArray *bodyArguments; // @synthesize bodyArguments=_bodyArguments;
@property(copy, nonatomic) NSString *bodyKey; // @synthesize bodyKey=_bodyKey;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionHandler; // @synthesize actionHandler=_actionHandler;
// - (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_runResponse:(id)arg1 error:(id )arg2;
- (BOOL)_runRequestAddStart:(id )arg1;
- (void)_runAuthorizeRequestStart;
- (void)_runAuthorizeCheckStart;
- (BOOL)_runInit:(id )arg1;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

@end

