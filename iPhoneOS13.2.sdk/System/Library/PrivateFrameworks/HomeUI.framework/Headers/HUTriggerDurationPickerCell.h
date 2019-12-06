//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class HUTriggerDurationPickerValue, NSArray, NSNumber, UIPickerView;
@protocol HUTriggerDurationPickerDelegate;

@interface HUTriggerDurationPickerCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <HUTriggerDurationPickerDelegate> _delegate;
    UIPickerView *_pickerView;
    NSArray *_durationOptions;
    HUTriggerDurationPickerValue *_currentDurationValue;
}

+ (id)_defaultDurationOptions;
@property(retain, nonatomic) HUTriggerDurationPickerValue *currentDurationValue; // @synthesize currentDurationValue=_currentDurationValue;
@property(retain, nonatomic) NSArray *durationOptions; // @synthesize durationOptions=_durationOptions;
@property(readonly, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <HUTriggerDurationPickerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)_updateDurationOptions;
@property(retain, nonatomic) NSNumber *currentDuration;
- (id)pickerDurationValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

