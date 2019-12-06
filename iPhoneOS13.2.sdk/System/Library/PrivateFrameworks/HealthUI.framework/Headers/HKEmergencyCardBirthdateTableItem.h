//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKMedicalIDEditorDateCell, NSCalendar;

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>
{
    HKMedicalIDEditorDateCell *_editableCell;
    NSCalendar *_gregorianCalendar;
}

// - (void).cxx_destruct;
- (id)_cachedCalendar;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (BOOL)canEditRowAtIndex:(long long)arg1;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)_createEditableCell;
- (void)timeZoneDidChange:(id)arg1;
- (id)title;
- (id)initInEditMode:(BOOL)arg1;

@end

