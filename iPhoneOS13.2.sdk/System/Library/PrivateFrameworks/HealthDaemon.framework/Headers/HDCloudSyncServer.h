//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDCloudSyncServerInterface-Protocol.h>

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>
{
}

- (id)remote_fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_accountConfigurationDidChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_enableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_disableCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudResetWithCompletion:(CDUnknownBlockType)arg1;
- (id)remote_forceCloudSyncWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

