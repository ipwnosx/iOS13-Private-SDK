//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorCell.h>

@class NSDate, UIDatePicker;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell
{
    UIDatePicker *_picker;
    NSDate *_dateValue;
}

@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
// - (void).cxx_destruct;
- (void)commitEditing;
- (void)beginEditing;
- (void)_dateChanged:(id)arg1;
- (void)_hideDatePicker;
- (void)_showDatePicker;
- (void)_configureDatePicker;
- (id)formattedValue;

@end

