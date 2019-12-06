//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ConversationFooterViewDisplayMetrics, UITraitCollection;

@interface MFMessageDisplayMetrics : NSObject
{
    UITraitCollection *_traitCollection;
    double _topToSenderBaseline;
    double _baselineToBaselineSpacing;
    double _recipientBaselineToFirstSeparator;
    double _firstSeparatorToSubjectBaseline;
    double _headerBottomPadding;
    double _statusIndicatorVerticalSpacing;
    double _footerViewButtonsAnimationOffset;
    ConversationFooterViewDisplayMetrics *_footerViewDisplayMetrics;
    UIEdgeInsets _layoutMargins;
    UIEdgeInsets _safeAreaInsets;
}

+ (double)avatarDiameter;
+ (id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(UIEdgeInsets)arg2 safeAreaInsets:(UIEdgeInsets)arg3 interfaceOrientation:(long long)arg4;
@property(retain, nonatomic) ConversationFooterViewDisplayMetrics *footerViewDisplayMetrics; // @synthesize footerViewDisplayMetrics=_footerViewDisplayMetrics;
@property(nonatomic) double footerViewButtonsAnimationOffset; // @synthesize footerViewButtonsAnimationOffset=_footerViewButtonsAnimationOffset;
@property(readonly, nonatomic) double statusIndicatorVerticalSpacing; // @synthesize statusIndicatorVerticalSpacing=_statusIndicatorVerticalSpacing;
@property(readonly, nonatomic) double headerBottomPadding; // @synthesize headerBottomPadding=_headerBottomPadding;
@property(readonly, nonatomic) double firstSeparatorToSubjectBaseline; // @synthesize firstSeparatorToSubjectBaseline=_firstSeparatorToSubjectBaseline;
@property(readonly, nonatomic) double recipientBaselineToFirstSeparator; // @synthesize recipientBaselineToFirstSeparator=_recipientBaselineToFirstSeparator;
@property(readonly, nonatomic) double baselineToBaselineSpacing; // @synthesize baselineToBaselineSpacing=_baselineToBaselineSpacing;
@property(readonly, nonatomic) double topToSenderBaseline; // @synthesize topToSenderBaseline=_topToSenderBaseline;
@property(nonatomic) UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double conversationHeaderViewExpandedTitleBottomToLastBaseline;
@property(readonly, nonatomic) double conversationHeaderViewExpandedTitleTopToFirstBaseline;
@property(readonly, nonatomic) double conversationHeaderViewCollapsedTitleBottomToLastBaseline;
@property(readonly, nonatomic) double conversationHeaderViewCollapsedTitleTopToFirstBaseline;
@property(readonly, nonatomic) BOOL conversationHeaderViewShouldHideCollapsedSuperTitle;
@property(readonly, nonatomic) double conversationHeaderViewExpandedSuperTitleTopToFirstBaseline;
@property(readonly, nonatomic) double conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
@property(readonly, nonatomic) double bottomToLastBaselineInMailActionCardVerticalGroup;
@property(readonly, nonatomic) double topToFirstBaselineSpacingInMailActionCardVerticalGroup;
@property(readonly, nonatomic) double bottomSpacingInMailActionCardHorizontalGroup;
@property(readonly, nonatomic) double baselineToBaselineSpacingInMailActionCardHorizontalGroup;
@property(readonly, nonatomic) double topToGlyphBaselineInMailActionCardHorizontalGroup;
- (double)_calculateFooterViewButtonsAnimationOffset;
@property(readonly, nonatomic) BOOL usePhoneLandscapeSymbolConfiguration;
@property(readonly, nonatomic) double footerViewTopToBaseline;
@property(readonly, nonatomic) double estimatedFooterViewHeight;
@property(readonly, nonatomic) double cellHeightToStartScroll;
- (double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3;
- (double)_scaledFloatWithValue:(double)arg1 fontStyle:(id)arg2;
- (id)_cachedFontForStyle:(id)arg1;
- (id)description;
@property(readonly, nonatomic) double messageBottomPaddingInConversationForMailActionHeader;
@property(readonly, nonatomic) double messageTopPaddingInConversationForMailActionHeader;
@property(readonly, nonatomic) double messageBottomPaddingInConversation;
@property(readonly, nonatomic) double messageTopPaddingInConversation;
@property(readonly, nonatomic) double statusIndicatorHorizontalSpacing;
@property(readonly, nonatomic) double avatarDiameterForCurrentContentSize;
@property(readonly, nonatomic) double recipientBaselineToFirstSeparatorInConversation;
@property(readonly, nonatomic) double baselineToBaselineSpacingInConversationForMailActionHeader;
@property(readonly, nonatomic) double topToSenderBaselineInConversationForMailActionHeader;
@property(readonly, nonatomic) double baselineToBaselineSpacingInConversation;
@property(readonly, nonatomic) double topToSenderBaselineInConversation;
@property(readonly, nonatomic) double minHorizontalSpacing;
@property(readonly, nonatomic) BOOL prefersFlushSeparator;
@property(readonly, nonatomic) BOOL hasGenerousMargins;
@property(readonly, nonatomic) BOOL hasCompactLayout;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fontCacheKeyPrefix;

@end

