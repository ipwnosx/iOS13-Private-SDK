//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKEnterCurrencyAmountView;

@interface PKAccountBillPaymentAmountContainerView : UIView
{
    NSUInteger _screenType;
    BOOL _showAmount;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
}

@property(nonatomic) BOOL showAmount; // @synthesize showAmount=_showAmount;
@property(retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // @synthesize enterCurrencyAmountView=_enterCurrencyAmountView;
// - (void).cxx_destruct;
- (double)_amountLabelFontSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCurrencyCode:(id)arg1 minimumAmount:(id)arg2;

@end

