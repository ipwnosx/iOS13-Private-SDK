//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFEnumerationParameter, WFVariableSubstitutableParameterState;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFEnumerationButtonComponent : CKCompositeComponent
{
    BOOL _processing;
    WFEnumerationParameter *_parameter;
    WFVariableSubstitutableParameterState *_state;
    id /* CDUnknownBlockType */ _updateBlock;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
}

//  (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7;
// - (void).cxx_destruct;

@end

