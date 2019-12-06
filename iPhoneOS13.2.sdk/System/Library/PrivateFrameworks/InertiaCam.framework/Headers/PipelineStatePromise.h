//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_group;

@interface PipelineStatePromise : NSObject
{
    NSMapTable *pipelineStates;
    NSMapTable *errors;
    NSObject<OS_dispatch_group> *group;
    _Atomic BOOL initialization_completed;
}

// - (void).cxx_destruct;
- (id)errorForFunction:(id)arg1;
- (id)pipelineStateForFunction:(id)arg1;
- (BOOL)groupWasSuccessful;
- (BOOL)timesOutWaitingForPipelineStates:(double)arg1;
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;

@end

