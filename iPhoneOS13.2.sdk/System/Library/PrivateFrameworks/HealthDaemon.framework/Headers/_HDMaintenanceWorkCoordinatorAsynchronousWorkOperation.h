//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDMaintenanceOperation.h>

@interface _HDMaintenanceWorkCoordinatorAsynchronousWorkOperation : HDMaintenanceOperation
{
    id /* CDUnknownBlockType */ _operationBlock;
    BOOL executing;
    BOOL finished;
}

@property(getter=isFinished) BOOL finished; // @synthesize finished;
@property(getter=isExecuting) BOOL executing; // @synthesize executing;
// - (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (id)initWithName:(id)arg1 operationBlock:(CDUnknownBlockType)arg2;

@end

