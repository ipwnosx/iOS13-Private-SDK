//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSDateComponentsFormatter, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface CKRecordingElapsedTimeView : UIView
{
    NSDateComponentsFormatter *__durationFormatter;
    UILabel *__timeLabel;
    UIView *__recordingDotView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property(readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property(readonly, nonatomic) UIView *_recordingDotView; // @synthesize _recordingDotView=__recordingDotView;
@property(readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
@property(readonly, nonatomic) NSDateComponentsFormatter *_durationFormatter; // @synthesize _durationFormatter=__durationFormatter;
// - (void).cxx_destruct;
- (void)_endRecordingAnimation;
- (void)_beginRecordingAnimation;
- (void)resetTimer;
- (void)endTimer;
- (void)startTimer;
- (void)_update:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonCAMElapsedTimeViewInitialization;

@end

