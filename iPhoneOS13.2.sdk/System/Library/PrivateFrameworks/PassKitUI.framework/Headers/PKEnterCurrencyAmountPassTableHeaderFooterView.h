//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKEnterCurrencyAmountPassView;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView
{
    id <PKEnterCurrencyAmountPassViewDelegate> _delegate;
    PKEnterCurrencyAmountPassView *_amountPassView;
}

@property(readonly, nonatomic) PKEnterCurrencyAmountPassView *amountPassView; // @synthesize amountPassView=_amountPassView;
@property(nonatomic) __weak id <PKEnterCurrencyAmountPassViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (double)_bottomPadding;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2;
- (id)initWithCurrenyAmount:(id)arg1;

@end

