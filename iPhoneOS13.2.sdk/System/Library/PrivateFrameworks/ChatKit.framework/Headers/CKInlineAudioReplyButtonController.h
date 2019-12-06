//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;
@protocol CKInlineAudioReplyButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKInlineAudioReplyButtonController : NSObject
{
    BOOL _started;
    id <CKInlineAudioReplyButtonDelegate> _delegate;
    UIButton *_startButton;
    UIButton *_stopButton;
    double _holdThreshold;
    double _touchDownTime;
}

@property(nonatomic) double touchDownTime; // @synthesize touchDownTime=_touchDownTime;
@property(nonatomic) double holdThreshold; // @synthesize holdThreshold=_holdThreshold;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) __weak id <CKInlineAudioReplyButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isStarted) BOOL started; // @synthesize started=_started;
// - (void).cxx_destruct;
- (void)touchDragExit:(id)arg1;
- (void)touchDragEnter:(id)arg1;
- (void)touchUpInStopButton:(id)arg1;
- (void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2;
- (void)touchUpInStartButton:(id)arg1 event:(id)arg2;
- (void)touchDownInStartButton:(id)arg1 event:(id)arg2;
- (void)dealloc;
- (id)initWithStartButton:(id)arg1 stopButton:(id)arg2;

@end

