//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BiometricKitIdentity, NSCondition, NSTimer;
@protocol BiometricKitDelegate, OS_dispatch_queue;

@interface BiometricKit : NSObject
{
    BiometricKitIdentity *_enrolledIdentity;
    BiometricKitIdentity *_matchingIdentity;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSTimer *_fingerOffTimer;
    NSCondition *_operationCondition;
    BOOL _fingerOn;
    BOOL _fingerOnStatusState;
    BOOL _fingerOffRequest;
    BOOL _matchingMode;
    BOOL _fingerDetectMode;
    BOOL _cancelOperation;
    BOOL _inUse;
    int _enrollProgressConfigRenderMode;
    id <BiometricKitDelegate> _delegate;
}

+ (long long)getSensorPatchVersion;
+ (id)allocWithZone:(_NSZone )arg1;
+ (id)manager;
@property(nonatomic) int enrollProgressConfigRenderMode; // @synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode;
@property BOOL inUse; // @synthesize inUse=_inUse;
@property(nonatomic) id <BiometricKitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDebugImages:(BOOL)arg1;
- (void)timestampEvent:(NSUInteger)arg1;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (void)logEventOrCode:(NSUInteger)arg1;
- (float)getModulationRatio;
- (long long)getCalibrationDataState;
- (long long)getSensorCalibrationStatus;
- (long long)getCalBlobVersion;
- (long long)getProvisioningState;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getSystemProtectedConfiguration;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (id)getLogs:(BOOL)arg1 withDetails:(id )arg2;
- (id)pullDebugImage:(BOOL)arg1 rotated:(BOOL)arg2;
- (id)pullCaptureBuffer;
- (id)getSensorInfo;
- (id)pullCalibrationData;
- (id)getCalibrationDataInfo;
- (id)getTemplateInfo:(id)arg1;
- (id)getMatchPolicyInfo;
- (int)enableBackgroundFdet:(BOOL)arg1;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;
- (int)updateIdentity:(id)arg1;
- (int)forceBioLockoutForUser:(unsigned int)arg1;
- (int)forceBioLockout;
- (int)dropUnlockToken;
- (int)resetAppleConnectCounter;
- (int)setUserDSID:(NSUInteger)arg1 withOptions:(id)arg2;
- (int)setUserDSID:(NSUInteger)arg1 withAuthToken:(id)arg2;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL )arg3 withDetails:(id )arg4;
- (int)getCountersignedStoreToken:(id )arg1;
- (int)registerStoreToken:(id)arg1;
- (int)registerDSID:(NSUInteger)arg1 withOptions:(id)arg2;
- (int)registerDSID:(NSUInteger)arg1 withAuthToken:(id)arg2;
- (int)matchIdentities:(id)arg1;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)enroll:(int)arg1 withOptions:(id)arg2;
- (int)enroll:(int)arg1 withAuthToken:(id)arg2;
- (id)getIdentitiesDatabaseHash;
- (id)getIdentityFromUUID:(id)arg1;
- (long long)getMaxIdentityCount:(int)arg1;
- (id)identities:(id)arg1;
- (BOOL)isIdentityEnrolled;
- (id)getIdentitiesDatabaseUUID;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1;
- (long long)getBioLockoutState;
- (id)getProtectedConfiguration;
- (void)cancel;
- (BOOL)isFingerOn;
- (int)detectPresenceWithOptions:(id)arg1;
- (int)detectFingerWithOptions:(id)arg1;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (int)match:(id)arg1;
- (void)simulateFingerTouchMatching:(BOOL)arg1;
- (void)fingerOffTimerFired:(id)arg1;
- (void)delegateStatusMessage:(unsigned int)arg1;
- (BOOL)isTouchIDAvailableWithInfo:(long long )arg1;
- (BOOL)isTouchIDCapable;
- (void)dealloc;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;

@end
