//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell
{
    BOOL _shouldTintTextLabel;
    UIColor *_textLabelColor;
}

@property(nonatomic) BOOL shouldTintTextLabel; // @synthesize shouldTintTextLabel=_shouldTintTextLabel;
@property(retain, nonatomic) UIColor *textLabelColor; // @synthesize textLabelColor=_textLabelColor;
// - (void).cxx_destruct;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateTextLabelColor;
- (void)tintColorDidChange;

@end

