//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartAnnotationViewDataSource-Protocol.h>

@class HKActivitySummary, HKDisplayTypeController, HKUnitPreferenceController, _HKWheelchairUseCharacteristicCache;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    BOOL _currentValueViewContext;
    HKActivitySummary *_activitySummary;
    long long _timeScope;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
}

@property(nonatomic) BOOL currentValueViewContext; // @synthesize currentValueViewContext=_currentValueViewContext;
@property(retain, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // @synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
// - (void).cxx_destruct;
- (id)_valueWithTitle:(id)arg1 attributedValue:(id)arg2 valueAsNumber:(id)arg3;
- (id)descriptionsForActivitySummary;
- (id)_bodyColor;
- (id)_columnViewWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 bodyColor:(id)arg4 alignment:(long long)arg5;
- (id)_dateColumnWithDateComponents:(id)arg1 calendar:(id)arg2 orientation:(long long)arg3;
- (id)_ringColumn;
- (id)_valueUnitAttributedStringWithValueString:(id)arg1 unitString:(id)arg2;
- (id)_percentStringWithQuantity:(id)arg1 goalQuantity:(id)arg2;
- (id)_moveColumnAsNumber;
- (id)_moveColumnValueString;
- (id)_moveColumn;
- (id)_energyColumn;
- (id)_energyColumnAsNumber;
- (id)_energyColumnValueString;
- (id)activityMoveTitle;
- (id)_exerciseColumn;
- (id)_exerciseColumnAsNumber;
- (id)_exerciseColumnValueString;
- (id)activityExerciseTitle;
- (id)_standColumn;
- (id)_standColumnAsNumber;
- (id)_standColumnValueString;
- (id)activityStandTitle;
- (BOOL)_hasRingView;
- (BOOL)showSeparators;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(BOOL)arg4;

@end

