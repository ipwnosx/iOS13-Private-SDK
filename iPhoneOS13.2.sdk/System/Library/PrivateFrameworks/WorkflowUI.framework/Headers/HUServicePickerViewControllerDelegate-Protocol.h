//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/HUServiceGridViewControllerDelegate-Protocol.h>

@class HUServicePickerViewController, NSSet;

@protocol HUServicePickerViewControllerDelegate <NSObject, HUServiceGridViewControllerDelegate>
- (void)servicePickerDidCancel:(HUServicePickerViewController *)arg1;
- (void)servicePickerDidFinish:(HUServicePickerViewController *)arg1 selectedServices:(NSSet *)arg2;
@end

