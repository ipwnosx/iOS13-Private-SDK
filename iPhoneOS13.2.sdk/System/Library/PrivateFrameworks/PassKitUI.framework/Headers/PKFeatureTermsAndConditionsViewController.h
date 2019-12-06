//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPortraitNavigationController.h>

#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>
#import <PassKitUI/QLPreviewControllerDataSource-Protocol.h>
#import <PassKitUI/QLPreviewControllerDelegate-Protocol.h>
#import <PassKitUI/QLPreviewItemDataProvider-Protocol.h>
#import <PassKitUI/RemoteUIControllerDelegate-Protocol.h>

@class NSData, QLItem, QLPreviewController, RemoteUIController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable>
{
    BOOL _isIpad;
    RemoteUIController *_termsUIController;
    QLItem *_pdfItem;
    QLPreviewController *_previewController;
    NSData *_pdfData;
    NSData *_htmlData;
    BOOL _performedInitialLoad;
    BOOL _useModalPresentation;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    long long _context;
}

@property(nonatomic) BOOL useModalPresentation; // @synthesize useModalPresentation=_useModalPresentation;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
// - (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (id)provideDataForItem:(id)arg1;
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (void)_showTermsSpinner:(BOOL)arg1 objectModel:(id)arg2;
- (id)_loadPDFViewControllerWithFileName:(id)arg1;
- (void)_loadPDF;
- (void)_handleWalletTermsLink:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_loadHTMLViewController;
- (void)_loadHTML;
- (id)displayTitle;
- (void)presentErrorAlert;
- (void)termsAccepted:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)termsShown;
- (void)pdfTermsDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)htmlTermsDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalTermsDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_pk_dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithNavigationController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2;

@end

