//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <UserNotificationsUIKit/MTVisualStylingRequiring-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIEmojiLabelView, BSUIFontProvider, MTVisualStylingProvider, NSArray, NSMutableDictionary, NSString, NSStringDrawingContext, UIImage, UIImageView, UILabel, UITextView;
@protocol NCNotificationContentViewDelegate;

@interface NCNotificationContentView : UIView <UITextViewDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>
{
    long long _lookStyle;
    UIEdgeInsets _contentInsets;
    UIView *_contentView;
    UIImageView *_thumbnailImageView;
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;
    NSStringDrawingContext *_drawingContext;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _hasUpdatedContent;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _useSmallTopMargin;
    UILabel *_secondaryLabel;
    UITextView *_secondaryTextView;
    NSString *_preferredContentSizeCategory;
    id <NCNotificationContentViewDelegate> _delegate;
    UIView *_accessoryView;
    NSUInteger _maximumNumberOfPrimaryTextLines;
    NSUInteger _maximumNumberOfPrimaryLargeTextLines;
    NSUInteger _maximumNumberOfSecondaryTextLines;
    NSUInteger _maximumNumberOfSecondaryLargeTextLines;
    BSUIFontProvider *_fontProvider;
    UILabel *_primaryLabel;
    UILabel *_primarySubtitleLabel;
    BSUIEmojiLabelView *_summaryLabel;
}

@property(retain, nonatomic, getter=_summaryLabel, setter=_setSummaryLabel:) BSUIEmojiLabelView *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(nonatomic) BOOL useSmallTopMargin; // @synthesize useSmallTopMargin=_useSmallTopMargin;
@property(nonatomic) NSUInteger maximumNumberOfSecondaryLargeTextLines; // @synthesize maximumNumberOfSecondaryLargeTextLines=_maximumNumberOfSecondaryLargeTextLines;
@property(nonatomic) NSUInteger maximumNumberOfSecondaryTextLines; // @synthesize maximumNumberOfSecondaryTextLines=_maximumNumberOfSecondaryTextLines;
@property(nonatomic) NSUInteger maximumNumberOfPrimaryLargeTextLines; // @synthesize maximumNumberOfPrimaryLargeTextLines=_maximumNumberOfPrimaryLargeTextLines;
@property(nonatomic) NSUInteger maximumNumberOfPrimaryTextLines; // @synthesize maximumNumberOfPrimaryTextLines=_maximumNumberOfPrimaryTextLines;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak id <NCNotificationContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic, getter=_secondaryTextView) UITextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(readonly, nonatomic, getter=_secondaryLabel) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange *)arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (CGRect)_frameForThumbnailInRect:(CGRect)arg1 withContentViewInsets:(UIEdgeInsets)arg2;
- (void)_updateStyleForThumbnailImage:(id)arg1 withStyle:(long long)arg2;
- (void)_updateContentModeForThumbnailImage:(id)arg1;
@property(retain, nonatomic) UIImage *thumbnail;
@property(retain, nonatomic) NSString *summaryText;
- (id)_lazySummaryLabel;
- (id)_newSummaryLabel;
- (void)_updateStyleForSummaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForSummaryLabel:(id)arg1 withStyle:(long long)arg2;
@property(retain, nonatomic) NSString *secondaryText;
- (id)_lazySecondaryTextSupportingView;
- (id)_lazySecondaryTextView;
- (id)_lazySecondaryLabel;
- (id)_secondaryTextSupportingView;
- (id)_newSecondaryTextView;
- (id)_newSecondaryLabel;
- (void)_configureTextSupportingView:(id)arg1;
- (void)_updateStyleForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;
- (NSUInteger)_secondaryTextNumberOfLines;
- (void)_updateTextAttributesForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;
- (id)_lazyThumbnailImageView;
@property(retain, nonatomic) NSString *primarySubtitleText;
- (id)_lazyPrimarySubtitleLabel;
@property(retain, nonatomic) NSString *primaryText;
- (id)_lazyPrimaryLabel;
- (id)_newPrimaryLabel;
- (void)_updateStyleForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateContentInsets;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)_sizeThatFits:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2;
- (NSUInteger)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(CGSize)arg3;
- (NSUInteger)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3;
- (void)_clearCacheForFont:(id)arg1;
- (void)_invalidateNumberOfLinesCache;
- (CGRect)_summaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (CGRect)_secondaryTextViewBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (CGRect)_primarySubtitleLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (CGRect)_primaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(NSUInteger)arg3;
- (NSUInteger)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg1;
- (NSUInteger)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (double)_summaryTextBaselineOffsetForCurrentStyle;
- (double)_secondaryTextBaselineOffsetForCurrentStyle;
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (double)_primaryTextBaselineOffsetForCurrentStyle;
- (double)topMarginToPrimaryLabelForCurrentStyle;
- (UIEdgeInsets)_contentInsetsForStyle:(long long)arg1;
- (UIEdgeInsets)_contentInsetsForLongLook;
- (UIEdgeInsets)_contentInsetsForShortLook;
- (UIEdgeInsets)_contentInsets;
- (double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (id)initWithStyle:(long long)arg1;

@end

