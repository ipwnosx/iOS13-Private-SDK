//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface HDCloudSyncDisableOperation : NSObject <NSProgressReporting>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchResult;
    _Bool _queue_hasStarted;
    id /* block */ _completion;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)_updateMasterRecordCreationCompletionForOperationWithError:(id)arg1 masterRecordToSave:(id)arg2 savedRecords:(id)arg3 isBestEffortOperation:(_Bool)arg4 container:(id)arg5 isOperationSuccessful:(_Bool *)arg6 completion:(id /* block */)arg7;
- (void)_updateMasterZoneCreationCompletionForOperationWithError:(id)arg1 masterZoneToSave:(id)arg2 savedRecordZones:(id)arg3 isBestEffortOperation:(_Bool)arg4 container:(id)arg5 isOperationSuccessful:(_Bool *)arg6 completion:(id /* block */)arg7;
- (void)_updateProgressForPrimaryContainer:(_Bool)arg1 forOperationComponent:(unsigned long long)arg2;
- (id)_zonesByContainerIDForZones:(id)arg1;
- (id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
