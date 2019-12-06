//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFControlFlowAction : WFAction
{
    long long _mode;
}

@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (id)groupedIntermediaryActions;
- (id)groupedCloseAction;
- (id)groupedOpenAction;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (id)outputIcon;
- (id)icon;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)outputContentClasses;
- (BOOL)hasChildren;
- (BOOL)isDeletable;
- (BOOL)inputTypePassthrough;
- (BOOL)snappingPassthrough;
- (BOOL)inputPassthrough;
- (id)iconName;
- (id)shortName;
- (BOOL)displaysParameterSummary;
- (id)createAccompanyingActionWithMode:(long long)arg1;
- (id)serializedParameters;
- (void)generateGroupingIdentifierIfNecessary;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

@end

