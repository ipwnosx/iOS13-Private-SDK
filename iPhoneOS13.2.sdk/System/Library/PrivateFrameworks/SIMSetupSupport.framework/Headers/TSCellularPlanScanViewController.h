//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <SIMSetupSupport/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>
#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class CAShapeLayer, NSDate, NSString, TSCellularPlanQRCodeScannerView, UIButton, UILabel, UIView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate, UINavigationControllerDelegate, TSSetupFlowItem>
{
    BOOL _preinstallCompleted;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    TSCellularPlanQRCodeScannerView *_scannerView;
    BOOL _confirmationCodeRequired;
    BOOL _manualCardInfoEntry;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSString *_fauxCardData;
    UIView *_scanView;
    UIView *_cutoutView;
    UIButton *_enterDetailsManuallyButton;
    UILabel *_scanQRCodeLabel;
    UILabel *_positionQRCodeLabel;
}

@property(nonatomic) __weak UILabel *positionQRCodeLabel; // @synthesize positionQRCodeLabel=_positionQRCodeLabel;
@property(nonatomic) __weak UILabel *scanQRCodeLabel; // @synthesize scanQRCodeLabel=_scanQRCodeLabel;
@property(nonatomic) __weak UIButton *enterDetailsManuallyButton; // @synthesize enterDetailsManuallyButton=_enterDetailsManuallyButton;
@property(nonatomic) __weak UIView *cutoutView; // @synthesize cutoutView=_cutoutView;
@property(nonatomic) __weak UIView *scanView; // @synthesize scanView=_scanView;
@property(readonly) BOOL manualCardInfoEntry; // @synthesize manualCardInfoEntry=_manualCardInfoEntry;
@property(readonly) BOOL confirmationCodeRequired; // @synthesize confirmationCodeRequired=_confirmationCodeRequired;
@property(readonly) NSString *fauxCardData; // @synthesize fauxCardData=_fauxCardData;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;
- (void)didChangeValueForKey:(id)arg1;
- (void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)enterFauxCardDataManually:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (long long)navigationBarScrollToEdgeBehavior;
- (void)planInfoDidUpdate:(id)arg1 planListError:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

@end

