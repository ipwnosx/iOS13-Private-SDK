//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>

@class NSDate;

@interface PKDatePickerImpl_DatePicker : UIDatePicker <PKDatePickerInternalImplementationProtocol>
{
}

- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) NSDate *date;
- (id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6;

@end

