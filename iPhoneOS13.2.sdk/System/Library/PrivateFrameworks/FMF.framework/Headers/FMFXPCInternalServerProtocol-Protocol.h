//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMF/FMFXPCServerProtocol-Protocol.h>

@class FMFHandle, NSString;

@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
- (oneway void)showShareMyLocationiCloudSettingsOffAlert;
- (oneway void)getDataForPerformanceRequest:(void (^)(NSData *, NSError *))arg1;
- (oneway void)sessionHandleReport:(void (^)(NSDictionary *))arg1;
- (oneway void)dumpStateWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)sendIDSPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)isIn5XXGracePeriodWithCompletion:(void (^)(BOOL))arg1;
- (oneway void)exit5XXGracePeriod;
- (oneway void)crashDaemon;
- (oneway void)setSessionClientBundleId:(NSString *)arg1;
- (oneway void)iCloudAccountNameWithCompletion:(void (^)(NSString *))arg1;
@end

