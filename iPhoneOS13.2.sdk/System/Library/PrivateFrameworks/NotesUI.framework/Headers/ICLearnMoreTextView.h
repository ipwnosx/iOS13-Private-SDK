//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UITapGestureRecognizer, UIViewController;

@interface ICLearnMoreTextView : UITextView
{
    BOOL _isShowingLearnMore;
    NSString *_helpTopicID;
    NSString *_helpVersion;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_parentViewController;
}

@property(nonatomic) BOOL isShowingLearnMore; // @synthesize isShowingLearnMore=_isShowingLearnMore;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSString *helpVersion; // @synthesize helpVersion=_helpVersion;
@property(retain, nonatomic) NSString *helpTopicID; // @synthesize helpTopicID=_helpTopicID;
// - (void).cxx_destruct;
- (void)updateForAccessibilityDarkerSystemColors;
- (BOOL)_accessibilityHasTextOperations;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (NSUInteger)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;
- (id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (void)didTapLearnMore;
- (void)tapGesture:(id)arg1;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(BOOL)arg4;
- (void)setAttributedText:(id)arg1 addLearnMore:(BOOL)arg2 letterpress:(BOOL)arg3;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(BOOL)arg5;
- (void)resetTextView;
- (void)dealloc;
- (void)awakeFromNib;

@end

