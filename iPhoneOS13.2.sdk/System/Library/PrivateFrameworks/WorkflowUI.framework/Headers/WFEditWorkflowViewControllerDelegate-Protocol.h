//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFRunWorkflowViewControllerDelegate-Protocol.h>

@class WFEditWorkflowViewController;

@protocol WFEditWorkflowViewControllerDelegate <WFRunWorkflowViewControllerDelegate>

@optional
- (void)workflowViewControllerDidRemoveAction:(WFEditWorkflowViewController *)arg1;
- (BOOL)workflowViewControllerCanRemoveActions:(WFEditWorkflowViewController *)arg1;
- (void)workflowViewControllerDidAddAction:(WFEditWorkflowViewController *)arg1;
- (void)workflowViewControllerInvalidatedSuggestions:(WFEditWorkflowViewController *)arg1;
- (void)workflowViewControllerRequestsTutorial:(WFEditWorkflowViewController *)arg1;
@end

