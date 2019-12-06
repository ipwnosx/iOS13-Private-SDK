//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKActionMenuController, NSArray, UIBlurEffect, UIVisualEffectView;

@interface CKActionMenuView : UIView
{
    BOOL _collapsed;
    BOOL _touchInside;
    NSArray *_actionMenuItems;
    NSUInteger _defaultActionIndex;
    CKActionMenuController *_actionMenuController;
    NSArray *_presentationActionMenuItems;
    NSUInteger _presentationDefaultActionIndex;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    CGPoint _presentationTargetPosition;
    CGRect _presentationTargetBounds;
}

+ (void)collapseAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isTouchInside) BOOL touchInside; // @synthesize touchInside=_touchInside;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) CGPoint presentationTargetPosition; // @synthesize presentationTargetPosition=_presentationTargetPosition;
@property(nonatomic) CGRect presentationTargetBounds; // @synthesize presentationTargetBounds=_presentationTargetBounds;
@property(nonatomic) NSUInteger presentationDefaultActionIndex; // @synthesize presentationDefaultActionIndex=_presentationDefaultActionIndex;
@property(copy, nonatomic) NSArray *presentationActionMenuItems; // @synthesize presentationActionMenuItems=_presentationActionMenuItems;
@property(nonatomic) __weak CKActionMenuController *actionMenuController; // @synthesize actionMenuController=_actionMenuController;
@property(nonatomic) NSUInteger defaultActionIndex; // @synthesize defaultActionIndex=_defaultActionIndex;
@property(copy, nonatomic) NSArray *actionMenuItems; // @synthesize actionMenuItems=_actionMenuItems;
// - (void).cxx_destruct;
- (void)configureForPresentationAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2;
- (id)actionMenuItemAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionMenuGestureRecognized:(id)arg1;
- (void)dismissActionMenuViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentActionMenuViewFromPoint:(CGPoint)arg1 inRect:(CGRect)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(NSUInteger)arg2 animated:(BOOL)arg3;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(NSUInteger)arg2 blurEffectStyle:(long long)arg3;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)description;

@end

