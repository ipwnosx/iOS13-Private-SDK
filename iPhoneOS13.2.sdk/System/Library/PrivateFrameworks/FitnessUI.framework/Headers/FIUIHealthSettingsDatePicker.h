//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface FIUIHealthSettingsDatePicker : UIDatePicker
{
    id /* CDUnknownBlockType */ _dateUpdateHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ dateUpdateHandler; // @synthesize dateUpdateHandler=_dateUpdateHandler;
// - (void).cxx_destruct;
- (void)forceUpdate;
- (void)_dateDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

