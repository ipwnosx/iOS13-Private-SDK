//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UILabel, UISwitch;
@protocol HKSwitchTableViewCellDelegate;

@interface HKSwitchTableViewCell : UITableViewCell
{
    UILabel *_countLabel;
    UISwitch *_switch;
    BOOL _shouldHideSwitch;
    BOOL _enabled;
    BOOL _centersIcon;
    id <HKSwitchTableViewCellDelegate> _delegate;
    NSString *_displayText;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) BOOL centersIcon; // @synthesize centersIcon=_centersIcon;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL shouldHideSwitch; // @synthesize shouldHideSwitch=_shouldHideSwitch;
@property(nonatomic) __weak id <HKSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)switchValueChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isOn) BOOL on;
- (void)setIconImage:(id)arg1;
- (void)setCountText:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) CGSize iconSize;
- (void)_contextSizeCategoryChanged;
- (void)_updateFont;
- (void)_setupUI;
- (id)_displayLabelFont;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

