//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    BOOL _didTouchOutside;
    UIView *_focusedView;
    UIEdgeInsets _touchAllowance;
}

@property(nonatomic) UIEdgeInsets touchAllowance; // @synthesize touchAllowance=_touchAllowance;
@property(readonly, nonatomic) UIView *focusedView; // @synthesize focusedView=_focusedView;
// - (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(UIEdgeInsets)arg2;

@end

