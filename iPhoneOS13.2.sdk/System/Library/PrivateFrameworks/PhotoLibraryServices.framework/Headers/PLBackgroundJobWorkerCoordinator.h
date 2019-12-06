//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject
{
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
//    struct os_unfair_lock_s _lock;
    id <PLBackgroundJobWorkerCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <PLBackgroundJobWorkerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleAllWorkersCompleted;
- (void)_processNextWorker;
- (void)stopAllBackgorundJobs;
- (void)submitBundleForProcessing:(id)arg1 priority:(NSUInteger)arg2;
- (BOOL)hasPendingJobsForBundle:(id)arg1 priority:(NSUInteger)arg2;
- (id)_workersForBundle:(id)arg1;
- (id)initWithWorkerClassesAsStrings:(id)arg1;
- (id)init;

@end

