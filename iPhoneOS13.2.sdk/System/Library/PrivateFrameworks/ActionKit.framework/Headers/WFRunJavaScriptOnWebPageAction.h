//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFRemoteQuarantinePolicyEvaluatorDelegate-Protocol.h>

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>
{
}

- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;
- (id)_getErrorFromScript:(id)arg1;
- (void)getWebPageFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateQuarantineWithJavaScript:(id)arg1 webPage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

