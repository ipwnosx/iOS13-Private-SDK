//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MISSING_TYPE, NSString;

@interface TSCardView : UIView
{
    MISSING_TYPE *onTap;
    MISSING_TYPE *onCloseTap;
    MISSING_TYPE *expandAccessibilityActionHandler;
    MISSING_TYPE *expandAccessibilityAction;
    MISSING_TYPE *collapseAccessibilityActionHandler;
    MISSING_TYPE *collapseAccessibilityAction;
    MISSING_TYPE *contentView;
    MISSING_TYPE *clippingView;
    MISSING_TYPE *grabberView;
    MISSING_TYPE *contentOverlayButtonView;
    MISSING_TYPE *barView;
    MISSING_TYPE *titleView;
    MISSING_TYPE *layout;
    MISSING_TYPE *isFullscreen;
}

// - (void).cxx_destruct;
- (id)initWithFrame:(CGRect)arg1;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)toggleExpansion;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end

