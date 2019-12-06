//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMCloudKitSyncProgress, UIButton, UIColor, UILabel, UIProgressView;
@protocol CKCloudKitSyncProgressViewControllerDelegate;

@interface CKCloudKitSyncProgressViewController : UIViewController
{
    BOOL _hidden;
    id <CKCloudKitSyncProgressViewControllerDelegate> _delegate;
    IMCloudKitSyncProgress *_lastProgress;
    UIColor *_originalProgressTintColor;
    UILabel *_progressLabel;
    UILabel *_userMessageLabel;
    UIButton *_actionButton;
    UIProgressView *_progressBar;
}

@property(readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *userMessageLabel; // @synthesize userMessageLabel=_userMessageLabel;
@property(readonly, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(copy, nonatomic) UIColor *originalProgressTintColor; // @synthesize originalProgressTintColor=_originalProgressTintColor;
@property(retain, nonatomic) IMCloudKitSyncProgress *lastProgress; // @synthesize lastProgress=_lastProgress;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <CKCloudKitSyncProgressViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(nonatomic) BOOL actionButtonEnabled; // @dynamic actionButtonEnabled;
- (void)addToToolbar:(id)arg1;
- (void)updateWithCloudKitProgress:(id)arg1;
- (void)showUserMessageWithString:(id)arg1 showActionButton:(BOOL)arg2 withActionButtonLabel:(id)arg3;
- (void)showProgressBarWithIndeterminateProgress:(BOOL)arg1 percentComplete:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_addUserMessageLabel;
- (void)_addProgressLabel;
- (void)_actionButtonWasPressed:(id)arg1;
- (void)_addActionButton;
- (void)_addProgressView;
- (id)_createLabel;
- (id)init;

@end

