//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/RCTimeObserver-Protocol.h>
#import <VoiceMemos/RCWaveformViewDelegate-Protocol.h>

@class RCHitTestForwardingView, RCLayoutMetrics, RCWaveformDataSource, RCWaveformViewController;
@protocol RCAVWaveformViewControllerDelegate, RCTimeController;

@interface RCAVWaveformViewController : UIViewController <RCWaveformViewDelegate, RCTimeObserver>
{
    double _defaultVisibleDuration;
    long long _batchUpdatingDisplayableTimesCount;
    BOOL _needsUpdateDisplayableTime;
    BOOL _showingSelectionOverlayEnabled;
    BOOL _didJumpTime;
    id <RCTimeController> _activeTimeController;
    RCHitTestForwardingView *_leftForwardingView;
    RCHitTestForwardingView *_rightForwardingView;
    BOOL _currentTimeTracksCapturedEndPoint;
    BOOL _autocenterCurrentTimeIndicatorAlways;
    BOOL _clipsTimeMarkersToDuration;
    BOOL _userInteractionEnabled;
    BOOL _selectionOverlayVisible;
    BOOL _isEditMode;
    BOOL _isOverview;
    RCWaveformDataSource *_waveformDataSource;
    id <RCAVWaveformViewControllerDelegate> _delegate;
    RCWaveformViewController *_waveformViewController;
    double _nextPreviewStartTime;
    double _currentTime;
    double _duration;
    RCLayoutMetrics *_layoutMetrics;
    double _maximumSelectionDuration;
    CDStruct_73a5d3ca _highlightTimeRange;
}

@property(nonatomic) BOOL isOverview; // @synthesize isOverview=_isOverview;
@property(nonatomic) BOOL isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
@property(readonly, nonatomic, getter=isSelectionOverlayVisible) BOOL selectionOverlayVisible; // @synthesize selectionOverlayVisible=_selectionOverlayVisible;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) BOOL clipsTimeMarkersToDuration; // @synthesize clipsTimeMarkersToDuration=_clipsTimeMarkersToDuration;
@property(nonatomic) BOOL autocenterCurrentTimeIndicatorAlways; // @synthesize autocenterCurrentTimeIndicatorAlways=_autocenterCurrentTimeIndicatorAlways;
@property(retain, nonatomic) RCLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL currentTimeTracksCapturedEndPoint; // @synthesize currentTimeTracksCapturedEndPoint=_currentTimeTracksCapturedEndPoint;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) CDStruct_73a5d3ca highlightTimeRange; // @synthesize highlightTimeRange=_highlightTimeRange;
@property(readonly, nonatomic) double nextPreviewStartTime; // @synthesize nextPreviewStartTime=_nextPreviewStartTime;
@property(retain, nonatomic) id <RCTimeController> activeTimeController; // @synthesize activeTimeController=_activeTimeController;
@property(retain, nonatomic) RCWaveformViewController *waveformViewController; // @synthesize waveformViewController=_waveformViewController;
@property(nonatomic) __weak id <RCAVWaveformViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RCWaveformDataSource *waveformDataSource; // @synthesize waveformDataSource=_waveformDataSource;
// - (void).cxx_destruct;
- (id)_selectionOverlay;
- (void)_endShowingSelectionOverlayWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_beginShowingSelectionOverlayAndEnableInsertMode:(BOOL)arg1;
- (void)_updateInterfaceForTimeControllerState:(long long)arg1;
- (NSUInteger)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(BOOL)arg1;
- (NSUInteger)_currentTimeDisplayOptions;
- (void)_setSelectionOverlayEnabled:(BOOL)arg1;
- (void)_updateDisplayableTimesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_didUpdateDisplayableTime;
- (void)_updateCurrentTimeForCapturedInputAtTime:(double)arg1;
- (void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didChangeDuration:(double)arg3;
- (void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didJumpTime:(BOOL)arg3;
- (void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2;
- (void)timeController:(id)arg1 didChangeState:(long long)arg2;
- (void)timeController:(id)arg1 didChangeRate:(float)arg2;
- (void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3;
- (void)resetSelectedTimeRangeToFullDuration;
@property(readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
- (void)hidSelectionOverlayWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)showSelectionOverlayAndEnableInsertMode:(BOOL)arg1;
@property(readonly, nonatomic) double currentTimeIndicatorCoordinate;
@property(readonly, nonatomic) double waveformBottomLineInset;
- (CGRect)waveformRectForLayoutBounds:(CGRect)arg1;
- (CGRect)annotatedWaveformRectForLayoutBounds:(CGRect)arg1;
- (CDStruct_73a5d3ca)setHighlightTimeRange;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange;
@property(readonly, nonatomic) CDStruct_73a5d3ca nextPreviewTimeRange;
- (void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (void)reloadWaveformDataSource:(id)arg1 withActiveTimeController:(id)arg2;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWaveformDataSource:(id)arg1 isOverview:(BOOL)arg2 isLockScreen:(BOOL)arg3 delegate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
