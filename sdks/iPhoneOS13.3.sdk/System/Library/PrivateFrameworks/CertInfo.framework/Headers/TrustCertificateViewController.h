//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class CertificateViewController;
@protocol TrustCertificateViewControllerDelegate;

@interface TrustCertificateViewController : UINavigationController
{
    BOOL _allowCertificateTrust;
    id <TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
    CertificateViewController *_certificateViewController;
}

@property(retain, nonatomic) CertificateViewController *certificateViewController; // @synthesize certificateViewController=_certificateViewController;
@property(nonatomic) BOOL allowCertificateTrust; // @synthesize allowCertificateTrust=_allowCertificateTrust;
@property(nonatomic) __weak id <TrustCertificateViewControllerDelegate> trustCertificateDelegate; // @synthesize trustCertificateDelegate=_trustCertificateDelegate;
// - (void).cxx_destruct;
- (void)setShowCertificateButton:(BOOL)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(BOOL)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(BOOL)arg5 properties:(id)arg6 action:(int)arg7;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)_setupNavItem;
- (id)initWithTrust:(struct __SecTrust )arg1 action:(int)arg2 delegate:(id)arg3 allowTrust:(BOOL)arg4;
- (id)initWithTrust:(struct __SecTrust )arg1 action:(int)arg2 delegate:(id)arg3;
- (id)initWithTrustCertificateDelegate:(id)arg1 allowTrust:(BOOL)arg2;
- (id)initWithTrustCertificateDelegate:(id)arg1;

@end
