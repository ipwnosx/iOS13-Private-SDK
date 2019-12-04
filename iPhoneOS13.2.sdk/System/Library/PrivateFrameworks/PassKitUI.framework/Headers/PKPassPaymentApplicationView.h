//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PKPassPaymentSummaryHeaderView, PKPaymentApplication, PKPaymentPass, PKPaymentService, UISegmentedControl;
@protocol PKPassPaymentApplicationViewDelegate;

@interface PKPassPaymentApplicationView : UIView
{
    PKPassPaymentSummaryHeaderView *_headerView;
    UIView *_horizontalSeparator;
    UISegmentedControl *_segmentedControl;
    PKPaymentService *_paymentService;
    NSArray *_paymentApplications;
    _Bool _showHeader;
    PKPaymentPass *_pass;
    PKPaymentApplication *_selectedApplication;
    id <PKPassPaymentApplicationViewDelegate> _delegate;
}

@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(nonatomic) id <PKPassPaymentApplicationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentApplication *selectedApplication; // @synthesize selectedApplication=_selectedApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void)layoutSubviews;
- (void)_selectedApplicationDidChange:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
