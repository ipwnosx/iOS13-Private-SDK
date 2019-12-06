//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, WFAction, WFContentCollection, WFWorkflowController, WFWorkflowControllerState;
@protocol WFActionParameterInputProvider, WFUserInterface;

@protocol WFWorkflowControllerDelegate <NSObject>

@optional
- (id <WFUserInterface>)workflowController:(WFWorkflowController *)arg1 userInterfaceForAction:(WFAction *)arg2;
- (id <WFActionParameterInputProvider>)workflowController:(WFWorkflowController *)arg1 parameterInputProviderForAction:(WFAction *)arg2;
- (BOOL)workflowController:(WFWorkflowController *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (BOOL)workflowController:(WFWorkflowController *)arg1 handleUnsupportedUserInterfaceForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(void))arg4;
- (void)workflowController:(WFWorkflowController *)arg1 actionDidRequestWorkflowExit:(WFAction *)arg2;
- (void)workflowController:(WFWorkflowController *)arg1 didRunAction:(WFAction *)arg2;
- (void)workflowController:(WFWorkflowController *)arg1 prepareToRunAction:(WFAction *)arg2 withInput:(WFContentCollection *)arg3 completionHandler:(void (^)(void))arg4;
- (void)workflowController:(WFWorkflowController *)arg1 didFinishRunningWithError:(NSError *)arg2 cancelled:(BOOL)arg3;
- (void)workflowControllerWillRun:(WFWorkflowController *)arg1;
@end

