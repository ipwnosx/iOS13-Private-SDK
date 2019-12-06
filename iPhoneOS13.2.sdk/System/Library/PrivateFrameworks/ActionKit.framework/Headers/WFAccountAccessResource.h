//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource
{
    id _observer;
    id /* CDUnknownBlockType */ _completionHandler;
}

// - (void).cxx_destruct;
- (id)settingsUIDefinition;
- (void)logOut;
- (BOOL)canLogOut;
- (id)username;
- (id)resourceName;
- (void)makeAvailableAtGlobalLevelWithWebAuthenticationSession:(CDUnknownBlockType)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (NSUInteger)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)errorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)protectedResourceDescription;
@property(readonly, copy, nonatomic) NSArray *accounts;
@property(readonly, nonatomic) Class accountClass;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;

@end

