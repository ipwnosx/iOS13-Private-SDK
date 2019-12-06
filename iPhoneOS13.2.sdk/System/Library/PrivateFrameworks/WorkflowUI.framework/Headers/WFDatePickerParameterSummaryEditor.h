//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/WFNonViewResponderDelegate-Protocol.h>
#import <WorkflowUI/WFVariableUIDelegate-Protocol.h>

@class UIDatePicker, UIView, UIViewController, WFNonViewResponder, WFVariableInputCoordinator;

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate>
{
    BOOL _isPickingMagicVariable;
    UIViewController *_presentedViewController;
    UIView *_sourceView;
    UIDatePicker *_datePicker;
    WFNonViewResponder *_datePickerResponder;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property(nonatomic) BOOL isPickingMagicVariable; // @synthesize isPickingMagicVariable=_isPickingMagicVariable;
@property(retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property(retain, nonatomic) WFNonViewResponder *datePickerResponder; // @synthesize datePickerResponder=_datePickerResponder;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// - (void).cxx_destruct;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)responderWillResign:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)sourceViewTintColorDidChange;
- (void)datePickerValueChanged:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;

@end

