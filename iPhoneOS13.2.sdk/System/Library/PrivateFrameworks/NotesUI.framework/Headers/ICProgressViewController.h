//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;
@protocol ICProgressViewControllerDelegate;

@interface ICProgressViewController : UIViewController
{
    BOOL _showsCancel;
    NSProgress *_observedProgress;
    id <ICProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    ICCircularProgressView *_circularProgressView;
}

@property(retain, nonatomic) ICCircularProgressView *circularProgressView; // @synthesize circularProgressView=_circularProgressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <ICProgressViewControllerDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) BOOL showsCancel; // @synthesize showsCancel=_showsCancel;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

