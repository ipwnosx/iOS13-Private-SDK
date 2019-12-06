//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFSiriAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (NSUInteger)workflowLevelStatus;
- (NSUInteger)globalLevelStatus;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;

@end

