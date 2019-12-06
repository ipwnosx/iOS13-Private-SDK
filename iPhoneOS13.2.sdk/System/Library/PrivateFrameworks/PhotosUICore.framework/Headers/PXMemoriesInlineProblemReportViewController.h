//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSArray, PHMemory, UIActivityIndicatorView, UILabel;

@interface PXMemoriesInlineProblemReportViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    BOOL _didDismissMailWindow;
    PHMemory *_memory;
    NSArray *_features;
    UILabel *_reportCaptureInProgressLabel;
    UIActivityIndicatorView *_reportCaptureInProgressActivityIndicator;
}

@property(nonatomic) BOOL didDismissMailWindow; // @synthesize didDismissMailWindow=_didDismissMailWindow;
@property(retain, nonatomic) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator; // @synthesize reportCaptureInProgressActivityIndicator=_reportCaptureInProgressActivityIndicator;
@property(retain, nonatomic) UILabel *reportCaptureInProgressLabel; // @synthesize reportCaptureInProgressLabel=_reportCaptureInProgressLabel;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
// - (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_showMailComposeWindow;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMemory:(id)arg1 features:(id)arg2;

@end

