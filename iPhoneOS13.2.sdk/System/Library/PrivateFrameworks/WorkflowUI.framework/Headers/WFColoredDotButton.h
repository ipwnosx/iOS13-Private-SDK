//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIView;

@interface WFColoredDotButton : UIButton
{
    UIColor *_dotColor;
    UIView *_dotView;
}

@property(nonatomic) __weak UIView *dotView; // @synthesize dotView=_dotView;
@property(copy, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (UIEdgeInsets)contentEdgeInsets;

@end

