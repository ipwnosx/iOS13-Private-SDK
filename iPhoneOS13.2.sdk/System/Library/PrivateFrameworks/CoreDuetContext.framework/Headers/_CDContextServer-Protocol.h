//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSObject, NSUUID, _CDContextualChangeRegistration, _CDContextualKeyPath, _CDContextualPredicate;
@protocol NSCopying><NSSecureCoding;

@protocol _CDContextServer <NSObject>
- (void)deactivateDevices:(NSArray *)arg1 remoteUserContextProxySourceDeviceUUID:(NSUUID *)arg2;
- (void)activateDevices:(NSArray *)arg1 remoteUserContextProxySourceDeviceUUID:(NSUUID *)arg2;
- (void)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 lastModifiedDate:(NSDate *)arg2 forContextualKeyPath:(_CDContextualKeyPath *)arg3 handler:(void (^)(BOOL))arg4;
- (void)evaluatePredicate:(_CDContextualPredicate *)arg1 handler:(void (^)(BOOL))arg2;
- (void)deregisterCallback:(_CDContextualChangeRegistration *)arg1;
- (void)registerCallback:(_CDContextualChangeRegistration *)arg1;
- (void)propertiesOfPath:(_CDContextualKeyPath *)arg1 handler:(void (^)(NSObject *, NSDate *))arg2;
- (void)hasKnowledgeOfPath:(_CDContextualKeyPath *)arg1 handler:(void (^)(BOOL))arg2;
@end

