//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SearchUIHorizontallyScrollingContainerButtonController, UIView;

@interface SearchUIContainerButton : UIButton
{
    UIView *_contentView;
    SearchUIHorizontallyScrollingContainerButtonController *_buttonController;
}

@property(nonatomic) __weak SearchUIHorizontallyScrollingContainerButtonController *buttonController; // @synthesize buttonController=_buttonController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithContainerButtonController:(id)arg1;

@end

