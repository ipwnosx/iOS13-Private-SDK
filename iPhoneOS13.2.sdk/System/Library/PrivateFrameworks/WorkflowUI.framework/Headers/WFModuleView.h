//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFActionEventObserver-Protocol.h>

@class NSProgress, UIColor, WFAction;

@interface WFModuleView : UIView <WFActionEventObserver>
{
    BOOL _showing;
    WFAction *_action;
    UIColor *_progressBackgroundColor;
    NSProgress *_progress;
    UIView *_progressView;
}

@property(nonatomic) __weak UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

