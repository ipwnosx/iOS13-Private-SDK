//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressView : UIView
{
}

+ (Class)layerClass;
- (double)progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progress;
@property(nonatomic) BOOL showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(readonly, nonatomic) UIColor *progressColor;
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

