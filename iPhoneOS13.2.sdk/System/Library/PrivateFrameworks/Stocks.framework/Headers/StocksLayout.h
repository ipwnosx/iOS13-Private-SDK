//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class StockChartDisplayMode;

@interface StocksLayout : NSObject
{
    BOOL _infoViewHasBottomLine;
    BOOL _newsViewHasBottomLine;
    BOOL _chartViewHasBottomLine;
    BOOL _newsViewShouldUseLargerFonts;
    BOOL _chartViewHasTapGesture;
    BOOL _hasScrollView;
    BOOL _infoViewInScrollView;
    BOOL _chartViewInScrollView;
    BOOL _newsViewInScrollView;
    BOOL _hasBlurView;
    BOOL _hasGrayView;
    BOOL _hasSecondaryGrayView;
    BOOL _hasStatusView;
    BOOL _hasStatusViewDivider;
    BOOL _hasPrimaryHorizontalDivider;
    BOOL _hasSecondaryHorizontalDivider;
    BOOL _hasPrimaryVerticalDivider;
    BOOL _hasSecondaryVerticalDivider;
    BOOL _hasBlackView;
    BOOL _isFullScreenChart;
    NSUInteger _listViewRowCount;
    double _statusViewCenteringRatio;
    StockChartDisplayMode *_chartDisplayMode;
    CGSize _scrollViewContentSize;
    CGRect _listViewFrame;
    CGRect _infoViewFrame;
    CGRect _chartViewFrame;
    CGRect _newsViewFrame;
    UIEdgeInsets _listViewContentInsets;
    CGRect _scrollViewFrame;
    CGRect _blurViewFrame;
    CGRect _grayViewFrame;
    CGRect _secondaryGrayViewFrame;
    CGRect _statusViewFrame;
    CGRect _statusViewDividerFrame;
    CGRect _primaryHorizontalDividerFrame;
    CGRect _secondaryHorizontalDividerFrame;
    CGRect _primaryVerticalDividerFrame;
    CGRect _secondaryVerticalDividerFrame;
}

+ (NSUInteger)numberOfRowsForSize:(CGSize)arg1;
+ (id)threeColumnsLandscapeLayoutForSize:(CGSize)arg1;
+ (id)twoColumnsLandscapeLayoutForSize:(CGSize)arg1;
+ (id)fullScreenChartLayoutForSize:(CGSize)arg1;
+ (id)twoColumnsPortraitLayoutForSize:(CGSize)arg1;
+ (id)singleColumnPortraitLayoutForSize:(CGSize)arg1;
+ (id)layoutForSize:(CGSize)arg1;
@property(nonatomic) BOOL isFullScreenChart; // @synthesize isFullScreenChart=_isFullScreenChart;
@property(nonatomic) BOOL hasBlackView; // @synthesize hasBlackView=_hasBlackView;
@property(retain, nonatomic) StockChartDisplayMode *chartDisplayMode; // @synthesize chartDisplayMode=_chartDisplayMode;
@property(nonatomic) double statusViewCenteringRatio; // @synthesize statusViewCenteringRatio=_statusViewCenteringRatio;
@property(nonatomic) NSUInteger listViewRowCount; // @synthesize listViewRowCount=_listViewRowCount;
@property(nonatomic) CGRect secondaryVerticalDividerFrame; // @synthesize secondaryVerticalDividerFrame=_secondaryVerticalDividerFrame;
@property(nonatomic) BOOL hasSecondaryVerticalDivider; // @synthesize hasSecondaryVerticalDivider=_hasSecondaryVerticalDivider;
@property(nonatomic) CGRect primaryVerticalDividerFrame; // @synthesize primaryVerticalDividerFrame=_primaryVerticalDividerFrame;
@property(nonatomic) BOOL hasPrimaryVerticalDivider; // @synthesize hasPrimaryVerticalDivider=_hasPrimaryVerticalDivider;
@property(nonatomic) CGRect secondaryHorizontalDividerFrame; // @synthesize secondaryHorizontalDividerFrame=_secondaryHorizontalDividerFrame;
@property(nonatomic) BOOL hasSecondaryHorizontalDivider; // @synthesize hasSecondaryHorizontalDivider=_hasSecondaryHorizontalDivider;
@property(nonatomic) CGRect primaryHorizontalDividerFrame; // @synthesize primaryHorizontalDividerFrame=_primaryHorizontalDividerFrame;
@property(nonatomic) BOOL hasPrimaryHorizontalDivider; // @synthesize hasPrimaryHorizontalDivider=_hasPrimaryHorizontalDivider;
@property(nonatomic) CGRect statusViewDividerFrame; // @synthesize statusViewDividerFrame=_statusViewDividerFrame;
@property(nonatomic) BOOL hasStatusViewDivider; // @synthesize hasStatusViewDivider=_hasStatusViewDivider;
@property(nonatomic) CGRect statusViewFrame; // @synthesize statusViewFrame=_statusViewFrame;
@property(nonatomic) BOOL hasStatusView; // @synthesize hasStatusView=_hasStatusView;
@property(nonatomic) CGRect secondaryGrayViewFrame; // @synthesize secondaryGrayViewFrame=_secondaryGrayViewFrame;
@property(nonatomic) BOOL hasSecondaryGrayView; // @synthesize hasSecondaryGrayView=_hasSecondaryGrayView;
@property(nonatomic) CGRect grayViewFrame; // @synthesize grayViewFrame=_grayViewFrame;
@property(nonatomic) BOOL hasGrayView; // @synthesize hasGrayView=_hasGrayView;
@property(nonatomic) CGRect blurViewFrame; // @synthesize blurViewFrame=_blurViewFrame;
@property(nonatomic) BOOL hasBlurView; // @synthesize hasBlurView=_hasBlurView;
@property(nonatomic) BOOL newsViewInScrollView; // @synthesize newsViewInScrollView=_newsViewInScrollView;
@property(nonatomic) BOOL chartViewInScrollView; // @synthesize chartViewInScrollView=_chartViewInScrollView;
@property(nonatomic) BOOL infoViewInScrollView; // @synthesize infoViewInScrollView=_infoViewInScrollView;
@property(nonatomic) CGSize scrollViewContentSize; // @synthesize scrollViewContentSize=_scrollViewContentSize;
@property(nonatomic) CGRect scrollViewFrame; // @synthesize scrollViewFrame=_scrollViewFrame;
@property(nonatomic) BOOL hasScrollView; // @synthesize hasScrollView=_hasScrollView;
@property(nonatomic) BOOL chartViewHasTapGesture; // @synthesize chartViewHasTapGesture=_chartViewHasTapGesture;
@property(nonatomic) BOOL newsViewShouldUseLargerFonts; // @synthesize newsViewShouldUseLargerFonts=_newsViewShouldUseLargerFonts;
@property(nonatomic) BOOL chartViewHasBottomLine; // @synthesize chartViewHasBottomLine=_chartViewHasBottomLine;
@property(nonatomic) BOOL newsViewHasBottomLine; // @synthesize newsViewHasBottomLine=_newsViewHasBottomLine;
@property(nonatomic) BOOL infoViewHasBottomLine; // @synthesize infoViewHasBottomLine=_infoViewHasBottomLine;
@property(nonatomic) UIEdgeInsets listViewContentInsets; // @synthesize listViewContentInsets=_listViewContentInsets;
@property(nonatomic) CGRect newsViewFrame; // @synthesize newsViewFrame=_newsViewFrame;
@property(nonatomic) CGRect chartViewFrame; // @synthesize chartViewFrame=_chartViewFrame;
@property(nonatomic) CGRect infoViewFrame; // @synthesize infoViewFrame=_infoViewFrame;
@property(nonatomic) CGRect listViewFrame; // @synthesize listViewFrame=_listViewFrame;
// - (void).cxx_destruct;
- (id)description;

@end

