//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/WFVariableTypingContext-Protocol.h>
#import <WorkflowUI/WFVariableUIDelegate-Protocol.h>

@class NSArray, NSTextAttachment, WFVariableInputCoordinator, WFVariableStringParameterState;

@interface WFTextInputParameterSummaryEditor : WFModuleSummaryEditor <WFVariableTypingContext, WFVariableUIDelegate>
{
    BOOL _hasChangedText;
    BOOL _isPickingMagicVariable;
    WFVariableStringParameterState *_stagedState;
    WFVariableInputCoordinator *_variableCoordinator;
    NSTextAttachment *_textAttachmentToEdit;
}

@property(nonatomic) BOOL isPickingMagicVariable; // @synthesize isPickingMagicVariable=_isPickingMagicVariable;
@property(retain, nonatomic) NSTextAttachment *textAttachmentToEdit; // @synthesize textAttachmentToEdit=_textAttachmentToEdit;
@property(retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property(readonly, nonatomic) WFVariableStringParameterState *stagedState; // @synthesize stagedState=_stagedState;
@property(readonly, nonatomic) BOOL hasChangedText; // @synthesize hasChangedText=_hasChangedText;
// - (void).cxx_destruct;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* CDUnknownBlockType */)arg3 goBackHandler:(id /* CDUnknownBlockType */)arg4 scrolledAwayHandler:(id /* CDUnknownBlockType */)arg5;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)sourceViewTintColorDidChange;
- (void)configureVariableAttachmentForInsertion:(id)arg1;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* CDUnknownBlockType */)arg1;
- (void)textEntryDidCopyWithOriginalBlock:(id /* CDUnknownBlockType */)arg1;
- (void)textEntryDidCutWithOriginalBlock:(id /* CDUnknownBlockType */)arg1;
- (void)copyVariableString;
- (NSRange)selectedRange;
- (void)textEntryTextDidChange:(id)arg1;
- (void)insertVariable:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL )arg2;
- (BOOL)doneButtonNeededForInputTraits:(id)arg1 allowMultipleLines:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *currentVariables;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;

@end

