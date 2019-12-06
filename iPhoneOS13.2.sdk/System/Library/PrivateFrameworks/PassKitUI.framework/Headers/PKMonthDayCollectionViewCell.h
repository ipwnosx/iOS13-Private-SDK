//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel, UIView;

@interface PKMonthDayCollectionViewCell : UICollectionViewCell
{
    UILabel *_dayLabel;
    UIView *_topLine;
    UIView *_leftLine;
    UIView *_bottomLine;
    BOOL _enabled;
    long long _dayNumber;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long dayNumber; // @synthesize dayNumber=_dayNumber;
// - (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)setDayNumber:(long long)arg1 withTitle:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

