//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest, PKPaymentSetupViewController;
@protocol SUPaymentSetupViewControllerDelegate;

@interface SUPaymentSetupViewController : UIViewController
{
    id <SUPaymentSetupViewControllerDelegate> _delegate;
    PKPaymentSetupRequest *_paymentSetupRequest;
    PKPaymentSetupViewController *_childViewController;
}

@property(retain, nonatomic) PKPaymentSetupViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest; // @synthesize paymentSetupRequest=_paymentSetupRequest;
@property(nonatomic) __weak id <SUPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)_setup;
- (id)initWithPaymentSetupRequest:(id)arg1;

@end
