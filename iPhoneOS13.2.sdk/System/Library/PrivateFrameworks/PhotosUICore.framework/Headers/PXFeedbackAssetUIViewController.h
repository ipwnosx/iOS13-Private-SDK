//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXAutoloopVideoTaskDelegate-Protocol.h>
#import <PhotosUICore/PXFeedbackFormDelegate-Protocol.h>

@class NSArray, NSDictionary, PHAsset, PXAutoloopVideoProcessTask, PXFeedbackLikeItOrNotComboUIViewController, UINavigationController;
@protocol PXFeedbackAssetUIViewControllerDelegate;

@interface PXFeedbackAssetUIViewController : UIViewController <PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate>
{
    BOOL _userLikedIt;
    PHAsset *_asset;
    id <PXFeedbackAssetUIViewControllerDelegate> _delegate;
    NSDictionary *_positiveFeedback;
    NSDictionary *_negativeFeedback;
    UINavigationController *_navigationController;
    PXFeedbackLikeItOrNotComboUIViewController *_feedbackController;
    PXAutoloopVideoProcessTask *_autoLoopFrameworkDiagnosticsCurrentTask;
    NSArray *_autoLoopFrameworkDiagnosticFileURLs;
}

@property(retain, nonatomic) NSArray *autoLoopFrameworkDiagnosticFileURLs; // @synthesize autoLoopFrameworkDiagnosticFileURLs=_autoLoopFrameworkDiagnosticFileURLs;
@property(retain, nonatomic) PXAutoloopVideoProcessTask *autoLoopFrameworkDiagnosticsCurrentTask; // @synthesize autoLoopFrameworkDiagnosticsCurrentTask=_autoLoopFrameworkDiagnosticsCurrentTask;
@property(retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSDictionary *negativeFeedback; // @synthesize negativeFeedback=_negativeFeedback;
@property(retain, nonatomic) NSDictionary *positiveFeedback; // @synthesize positiveFeedback=_positiveFeedback;
@property(nonatomic) BOOL userLikedIt; // @synthesize userLikedIt=_userLikedIt;
@property(readonly, nonatomic) __weak id <PXFeedbackAssetUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
// - (void).cxx_destruct;
- (void)autoloopVideoTaskStatusDidChange:(id)arg1;
- (void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)arg1;
- (void)continueFiling;
- (void)_fileRadarWithAutoLoopAsset:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3;
- (void)userDidFinish:(BOOL)arg1;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (id)viewTitleForRadar;
- (id)longTitleText;
- (void)viewDidLoad;
- (id)initWithAsset:(id)arg1 delegate:(id)arg2;

@end

