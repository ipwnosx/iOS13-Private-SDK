//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, WFVariable, WFWorkflowPickerViewController;

@protocol WFWorkflowPickerViewControllerDelegate <NSObject>
- (void)workflowPickerViewController:(WFWorkflowPickerViewController *)arg1 didSelectVariable:(WFVariable *)arg2;
- (void)workflowPickerViewController:(WFWorkflowPickerViewController *)arg1 didSelectWorkflowWithName:(NSString *)arg2;
- (void)workflowPickerViewControllerDidCancel:(WFWorkflowPickerViewController *)arg1;
@end

