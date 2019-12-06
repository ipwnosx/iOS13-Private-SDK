//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class CALayer, UILabel;

@interface ICPasswordLockTileView : UIView <CAAnimationDelegate>
{
    BOOL _isLocked;
    CALayer *_lockHandle;
    CALayer *_lockBase;
    CALayer *_lockGroupLayer;
    CALayer *_backdropLayer;
    UILabel *_label;
    UIView *_containerView;
    id /* CDUnknownBlockType */ _fadeInCompletionHandler;
    id /* CDUnknownBlockType */ _fadeOutCompletionHandler;
}

+ (id)lockTileView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fadeOutCompletionHandler; // @synthesize fadeOutCompletionHandler=_fadeOutCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fadeInCompletionHandler; // @synthesize fadeInCompletionHandler=_fadeInCompletionHandler;
@property(nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CALayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(retain, nonatomic) CALayer *lockGroupLayer; // @synthesize lockGroupLayer=_lockGroupLayer;
@property(retain, nonatomic) CALayer *lockBase; // @synthesize lockBase=_lockBase;
@property(retain, nonatomic) CALayer *lockHandle; // @synthesize lockHandle=_lockHandle;
// - (void).cxx_destruct;
- (id)lockAnimationWithBeginTime:(double)arg1;
- (id)unLockAnimationWithBeginTime:(double)arg1;
- (id)fadeAnimationWithStartAlpha:(double)arg1 endAlpha:(double)arg2 beginTime:(double)arg3 duration:(double)arg4;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)showFadeOutAnimationForActivityType:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showFadeInAnimationForActivityType:(NSUInteger)arg1 afterDelay:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end

