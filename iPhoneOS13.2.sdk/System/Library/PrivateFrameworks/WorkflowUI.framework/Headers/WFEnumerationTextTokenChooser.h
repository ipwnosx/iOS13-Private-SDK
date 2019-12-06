//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTextTokenChooser.h>

#import <WorkflowUI/WFParameterEventObserver-Protocol.h>

@class NSArray, WFEnumerationParameter, WFVariableSubstitutableParameterState;

@interface WFEnumerationTextTokenChooser : WFTextTokenChooser <WFParameterEventObserver>
{
    WFVariableSubstitutableParameterState *_currentState;
    WFEnumerationParameter *_parameter;
    NSArray *_parameterStates;
    id /* CDUnknownBlockType */ _selectionHandler;
}

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 processing:(BOOL)arg5 sourceView:(id)arg6 sourceRect:(CGRect)arg7 viewController:(id)arg8 selectionHandler:(CDUnknownBlockType)arg9;
@property(copy, nonatomic) id /* CDUnknownBlockType */ selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(copy, nonatomic) NSArray *parameterStates; // @synthesize parameterStates=_parameterStates;
@property(retain, nonatomic) WFEnumerationParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) WFVariableSubstitutableParameterState *currentState; // @synthesize currentState=_currentState;
// - (void).cxx_destruct;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)updatePossibleStates;
- (void)updateAdditionalButtons;
- (void)updateCurrentState;
- (void)dealloc;

@end

