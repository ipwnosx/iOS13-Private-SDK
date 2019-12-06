//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, UIScreen, UIView, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, UIVisualEffectView, _UIInteractiveHighlightEffectWindow;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightEnvironment : NSObject
{
    UIScreen *_containerScreen;
    _UIInteractiveHighlightEffectWindow *_containerWindow;
    UIView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_contentClipView;
    UIView *_contentOverlayView;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    UIViewFloatAnimatableProperty *_backgroundEffectProgress;
    NSArray *_viewRecords;
    _UIInteractiveHighlightEnvironment *_parentEnvironment;
    _UIInteractiveHighlightEnvironment *_childEnvironment;
    NSUUID *_backgroundAnimationIdentifier;
    UIView *_customBackgroundEffectView;
    id /* CDUnknownBlockType */ _backgroundEffectApplyBlock;
}

+ (id)interactiveHighlightEnvironmentForContainerView:(id)arg1;
+ (id)requestInteractiveHighlightEnvironmentForView:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ backgroundEffectApplyBlock; // @synthesize backgroundEffectApplyBlock=_backgroundEffectApplyBlock;
@property(retain, nonatomic) UIView *customBackgroundEffectView; // @synthesize customBackgroundEffectView=_customBackgroundEffectView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
// - (void).cxx_destruct;
- (void)finalizeContainerWindowIfNeeded;
- (void)finalizeContentViewIfNeeded;
- (void)finalizeBackgroundEffect;
- (id)backgroundVisualEffectForProgress:(double)arg1;
- (id)newBackgroundEffectAnimator;
- (void)initContentViewIfNeeded;
- (void)initBackgroundEffectViewIfNeeded;
- (void)initContainerWindowIfNeeded;
- (void)finalizeViewRecord:(id)arg1;
- (void)removeAllViewRecords;
- (void)removeViewRecordsIfNeeded;
- (long long)indexOfViewRecordForView:(id)arg1;
- (id)newViewRecordForView:(id)arg1 options:(NSUInteger)arg2;
- (void)applyContentInsets:(UIEdgeInsets)arg1;
- (void)reset;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isHidden) BOOL hidden;
- (void)disableClippingForView:(id)arg1 ancestorView:(id)arg2;
- (void)setUserInteractionOnContainerEnabled:(BOOL)arg1;
- (void)removeInteractiveHighlightEffect:(id)arg1;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)interactiveHighlightEffectForView:(id)arg1 options:(NSUInteger)arg2;
@property(readonly, nonatomic) UIView *contentClipView;
@property(readonly, nonatomic) UIView *contentView; // @dynamic contentView;
- (void)dealloc;
- (id)initWithParentEnvironment:(id)arg1;
- (id)initWithContainerScreen:(id)arg1;
- (id)initWithContainerView:(id)arg1;

@end

