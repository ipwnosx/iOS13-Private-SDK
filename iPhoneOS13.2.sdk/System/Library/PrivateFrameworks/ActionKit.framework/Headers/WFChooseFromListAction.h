//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction
{
}

- (BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)populatesInputFromInputParameter;
- (void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2;
- (id)contentItemsFromSelectedItem:(id)arg1;
- (id)itemsFromDictionaryItem:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

