//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKAudioControllerDelegate-Protocol.h>

@class CKAudioController, CKAudioMediaObject, NSString, UIButton, UIImage, UIImageView, UILabel, UIVisualEffectView;
@protocol CKMessageEntryRecordedAudioViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate>
{
    CKAudioMediaObject *_audioMediaObject;
    UIButton *_deleteButton;
    id <CKMessageEntryRecordedAudioViewDelegate> _delegate;
    UIVisualEffectView *_blurView;
    UIImageView *_balloonImageView;
    CKAudioController *_audioController;
    UILabel *_timeLabel;
    UIImage *_waveformImage;
    UIImageView *_waveformImageView;
    double _time;
    NSString *_timeFormat;
}

@property(copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) UIImageView *waveformImageView; // @synthesize waveformImageView=_waveformImageView;
@property(retain, nonatomic) UIImage *waveformImage; // @synthesize waveformImage=_waveformImage;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CKAudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) UIImageView *balloonImageView; // @synthesize balloonImageView=_balloonImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <CKMessageEntryRecordedAudioViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) CKAudioMediaObject *audioMediaObject; // @synthesize audioMediaObject=_audioMediaObject;
// - (void).cxx_destruct;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
@property(readonly, nonatomic) BOOL isPlaying;
- (void)pause;
- (void)play;
- (void)updateProgress;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateTimeString;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

