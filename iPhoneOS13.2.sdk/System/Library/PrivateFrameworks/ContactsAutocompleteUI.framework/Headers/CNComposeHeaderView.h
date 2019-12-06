//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNComposeHeaderLabelView, NSString;
@protocol CNComposeHeaderViewDelegate;

@interface CNComposeHeaderView : UIView
{
    BOOL _showsHighlightWhenTouched;
    NSString *_navTitle;
    CNComposeHeaderLabelView *_labelView;
    id <CNComposeHeaderViewDelegate> _delegate;
    UIView *_separator;
    UIView *_highlightedBackgroundView;
    NSDirectionalEdgeInsets _separatorDirectionalEdgeInsets;
}

+ (id)defaultSeparatorColor;
+ (double)_labelTopPaddingSpecification;
+ (double)separatorHeight;
+ (double)preferredHeight;
+ (id)defaultFont;
@property(retain, nonatomic) UIView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(nonatomic) NSDirectionalEdgeInsets separatorDirectionalEdgeInsets; // @synthesize separatorDirectionalEdgeInsets=_separatorDirectionalEdgeInsets;
@property(nonatomic) __weak id <CNComposeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsHighlightWhenTouched; // @synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched;
@property(retain, nonatomic) CNComposeHeaderLabelView *labelView; // @synthesize labelView=_labelView;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
// - (void).cxx_destruct;
- (CGRect)_exclusionRectForView:(id)arg1 alongEdge:(NSUInteger)arg2;
- (UIEdgeInsets)_recipientViewEdgeInsets;
- (id)_baseAttributes;
- (void)refreshPreferredContentSize;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_highlightedBackgroundView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleTouchesEnded;
- (BOOL)_canBecomeFirstResponder;
- (CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (CGRect)_contentRect;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *label; // @dynamic label;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)labelColor;
- (double)labelTopPadding;
- (id)_automationID;

@end

