//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFRepeatIndexVariableNameMigration : WFWorkflowMigration
{
}

+ (BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
- (void)calculateVariableNamesAtActionIndex:(NSUInteger)arg1 oldRepeatScopeVariables:(id )arg2;
- (void)migrateWorkflow;

@end

