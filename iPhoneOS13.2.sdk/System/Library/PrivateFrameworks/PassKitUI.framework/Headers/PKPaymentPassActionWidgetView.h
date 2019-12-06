//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, PKPaymentPass, PKPeerPaymentAccount;
@protocol PKPaymentPassActionWidgetViewDelegate;

@interface PKPaymentPassActionWidgetView : UIView
{
    NSArray *_displayableWidgets;
    NSString *_phoneNumber;
    NSString *_website;
    NSString *_email;
    NSUInteger _widgetViewStyle;
    BOOL _usesAccessibilityLayout;
    NSUInteger _numberOfWidgetsPerRow;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPaymentPass *_paymentPass;
    id <PKPaymentPassActionWidgetViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentPassActionWidgetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
// - (void).cxx_destruct;
- (void)cleanUpExistingWidgets;
- (NSUInteger)numberOfRows;
- (void)updateNumberOfWidgetsPerRow;
- (void)updateUseAccessibilityLayout;
- (id)_createButtonForTitle:(id)arg1 image:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_determineWidgetContentWithAvailableWidgets;
- (void)layoutSubviews;
- (id)initWithWidgetViewStyle:(NSUInteger)arg1;

@end

