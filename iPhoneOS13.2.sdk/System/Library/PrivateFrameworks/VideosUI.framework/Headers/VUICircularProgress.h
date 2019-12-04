//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface VUICircularProgress : UIView
{
    _Bool _indeterminate;
    double _indeterminateWidth;
    UIColor *_progressFillColor;
    double _progress;
    double _centerSquareWidth;
    CAShapeLayer *_indeterminateLayer;
    CAShapeLayer *_centerLayer;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_progressBackgroundLayer;
    double _progressWidth;
}

@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(retain, nonatomic) CAShapeLayer *progressBackgroundLayer; // @synthesize progressBackgroundLayer=_progressBackgroundLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *centerLayer; // @synthesize centerLayer=_centerLayer;
@property(retain, nonatomic) CAShapeLayer *indeterminateLayer; // @synthesize indeterminateLayer=_indeterminateLayer;
@property(nonatomic) double centerSquareWidth; // @synthesize centerSquareWidth=_centerSquareWidth;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressFillColor; // @synthesize progressFillColor=_progressFillColor;
@property(nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) double indeterminateWidth; // @synthesize indeterminateWidth=_indeterminateWidth;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_removeIndeterminateLayer;
- (void)_startIndeterminateAnimation;
- (void)_addIndeterminateLayer;
- (id)_indeterminatePath;
- (void)_removeProgressLayer;
- (void)_addProgressLayer;
- (id)_progressPath;
- (struct CGRect)_progressFrame;
- (void)_configureProgress:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
