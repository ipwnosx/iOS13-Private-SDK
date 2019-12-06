//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFEnumerationParameter : WFParameter
{
    BOOL _alwaysShowsButton;
    NSArray *_staticPossibleStates;
    NSArray *_displayNames;
}

@property(readonly, nonatomic) NSArray *displayNames; // @synthesize displayNames=_displayNames;
@property(readonly, nonatomic) NSArray *staticPossibleStates; // @synthesize staticPossibleStates=_staticPossibleStates;
@property(readonly, nonatomic) BOOL alwaysShowsButton; // @synthesize alwaysShowsButton=_alwaysShowsButton;
// - (void).cxx_destruct;
- (void)stopUpdatingPossibleValues;
- (void)startUpdatingPossibleValues;
- (void)possibleStatesDidChange;
- (BOOL)parameterStateIsValid:(id)arg1;
@property(readonly, nonatomic) BOOL preferItemPickerSheet;
@property(readonly, nonatomic) BOOL hidesAccessoryIconInEditor;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (id)localizedLabelForMultipleCompleteState:(id)arg1;
- (id)localizedLabelForMultipleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedTitleForButtonWithState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStatesForLocalization;
@property(readonly, nonatomic) NSArray *possibleStates;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

