//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFGetHomeAccessoryStateAction : WFAction
{
}

+ (id)homeAccessoryStateActionWithHome:(id)arg1;
- (void)updateCharacteristicsEnumeration;
- (id)characteristic;
- (id)homeName;
- (id)home;
- (id)localizedDefaultOutputName;
- (id)outputMeasurementUnitType;
- (id)outputContentClasses;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)initializeParameters;

@end

