//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UILabel, _TVImageView;

@interface _TVSwipeUpMessageView : UIView
{
    int _swipeUpMessageState;
    BOOL _enabled;
    NSString *_message;
    _TVImageView *_chevronView;
    UILabel *_messageView;
}

@property(readonly, nonatomic) UILabel *messageView; // @synthesize messageView=_messageView;
@property(readonly, nonatomic) _TVImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (void)_processSwipeUpMessageEvent:(int)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

