//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <Widgets/MTMaterialGrouping-Protocol.h>
#import <Widgets/MTVisualStylingRequiring-Protocol.h>
#import <Widgets/PLContentSizeCategoryAdjusting-Protocol.h>
#import <Widgets/PLContentSizeManaging-Protocol.h>

@class MTMaterialView, NSArray, NSString, UIButton, WGPlatterHeaderContentView, WGWidgetHostingViewController, WGWidgetListItemViewController;

@interface WGWidgetPlatterView : UIView <PLContentSizeManaging, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingRequiring>
{
    MTMaterialView *_backgroundView;
    MTMaterialView *_headerBackgroundView;
    WGPlatterHeaderContentView *_headerContentView;
    double _cornerRadius;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _contentViewHitTestingDisabled;
    BOOL _backgroundHidden;
    BOOL _showingMoreContent;
    NSString *_materialGroupNameBase;
    WGWidgetHostingViewController *_widgetHost;
    WGWidgetListItemViewController *_listItem;
    UIView *_contentView;
    NSUInteger _clippingEdge;
    double _overrideHeightForLayingOutContentView;
    double _topMarginForLayout;
    long long _buttonMode;
}

+ (double)contentBaselineToBoundsBottomWithWidth:(double)arg1;
@property(nonatomic, getter=isShowingMoreContent) BOOL showingMoreContent; // @synthesize showingMoreContent=_showingMoreContent;
@property(nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property(nonatomic) double topMarginForLayout; // @synthesize topMarginForLayout=_topMarginForLayout;
@property(nonatomic) double overrideHeightForLayingOutContentView; // @synthesize overrideHeightForLayingOutContentView=_overrideHeightForLayingOutContentView;
@property(nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden; // @synthesize backgroundHidden=_backgroundHidden;
@property(nonatomic) NSUInteger clippingEdge; // @synthesize clippingEdge=_clippingEdge;
@property(nonatomic, getter=isContentViewHitTestingDisabled) BOOL contentViewHitTestingDisabled; // @synthesize contentViewHitTestingDisabled=_contentViewHitTestingDisabled;
@property(retain, nonatomic, setter=_setContentView:) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak WGWidgetListItemViewController *listItem; // @synthesize listItem=_listItem;
@property(nonatomic) __weak WGWidgetHostingViewController *widgetHost; // @synthesize widgetHost=_widgetHost;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
// - (void).cxx_destruct;
- (void)iconDidInvalidate:(id)arg1;
- (void)_updateUtilityButtonForMoreContentState:(BOOL)arg1;
- (void)_handleAddWidget:(id)arg1;
- (void)_toggleShowMore:(id)arg1;
- (void)_setUtilityButtonVisible:(BOOL)arg1;
- (BOOL)_isUtilityButtonVisible;
- (void)_updateUtilityButtonForMode:(long long)arg1;
- (void)_handleIconButton:(id)arg1;
- (void)_layoutHeaderViews;
- (void)_layoutContentView;
- (CGRect)_headerFrameForBounds:(CGRect)arg1;
- (CGSize)_contentSize;
- (void)_configureHeaderViewsIfNecessary;
- (void)_updateHeaderContentViewVisualStyling;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (CGSize)contentSizeForSize:(CGSize)arg1;
- (CGSize)sizeThatFitsContentWithSize:(CGSize)arg1;
- (void)_updateShowMoreButtonImage;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)willRemoveSubview:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(nonatomic, getter=isAddWidgetButtonVisible) BOOL addWidgetButtonVisible;
@property(readonly, nonatomic) UIButton *addWidgetButton;
@property(nonatomic, getter=isShowMoreButtonVisible) BOOL showMoreButtonVisible;
@property(readonly, nonatomic) UIButton *showMoreButton;
- (CGSize)minimumSizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

