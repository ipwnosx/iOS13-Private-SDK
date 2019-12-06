//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentPass, PKPeerPaymentAccount, UIColor, UILabel, UIView;

@interface PKPaymentPassTableViewCell : PKTableViewCell
{
    UILabel *_mainLabel;
    UILabel *_subTextLabel;
    UIView *_cardSnapshotView;
    PKPaymentPass *_pass;
    PKPeerPaymentAccount *_peerPaymentAccount;
    UIColor *_mainLabelColor;
    UIColor *_subTextLabelColor;
    UIColor *_disabledMainLabelColor;
    UIColor *_disabledSubTextLabelColor;
}

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(BOOL)arg2;
+ (id)subTitleFont;
+ (id)titleFont;
@property(retain, nonatomic) UIColor *disabledSubTextLabelColor; // @synthesize disabledSubTextLabelColor=_disabledSubTextLabelColor;
@property(retain, nonatomic) UIColor *disabledMainLabelColor; // @synthesize disabledMainLabelColor=_disabledMainLabelColor;
@property(retain, nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;
@property(retain, nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (void)_updateLabelTextColors;
- (void)_updateLabelText;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)pk_applyAppearance:(id)arg1;

@end

