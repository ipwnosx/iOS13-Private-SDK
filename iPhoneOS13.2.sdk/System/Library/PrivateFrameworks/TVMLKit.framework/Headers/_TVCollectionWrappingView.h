//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TVMLKit/TVRowHosting-Protocol.h>

@class CAGradientLayer, IKColor, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVCollectionWrappingView : UIView <TVRowHosting>
{
    CGRect _headerFrame;
    UIView *_selectingView;
    UIView *_headerView;
    double _showcaseFactor;
    CGRect _footerFrame;
    UIView *_footerView;
    CAGradientLayer *_gradientLayer;
   struct {
        BOOL respondsToAugmentedSelectionFrameForFrame;
    } _collectionViewFlags;
    BOOL _centered;
    BOOL _headerCanBecomeFocused;
    BOOL _headerAuxiliarySelecting;
    BOOL _headerFloating;
    BOOL _headerHidden;
    BOOL _headerFocused;
    _TVCollectionView *_collectionView;
    double _headerSelectionMargin;
    long long _collectionGradientMask;
    IKColor *_ikBackgroundColor;
//    struct TVShowcaseConfig _showcaseConfig;
}

+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 gradientLengths:(UIEdgeInsets )arg3 gradientInset:(UIEdgeInsets )arg4 gradientBoundsInset:(UIEdgeInsets )arg5;
@property(nonatomic, getter=isHeaderFocused) BOOL headerFocused; // @synthesize headerFocused=_headerFocused;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) IKColor *ikBackgroundColor; // @synthesize ikBackgroundColor=_ikBackgroundColor;
@property(nonatomic) long long collectionGradientMask; // @synthesize collectionGradientMask=_collectionGradientMask;
@property(nonatomic, getter=isHeaderHidden) BOOL headerHidden; // @synthesize headerHidden=_headerHidden;
@property(nonatomic, getter=isHeaderFloating) BOOL headerFloating; // @synthesize headerFloating=_headerFloating;
@property(nonatomic, getter=isHeaderAuxiliarySelecting) BOOL headerAuxiliarySelecting; // @synthesize headerAuxiliarySelecting=_headerAuxiliarySelecting;
// property(nonatomic) struct TVShowcaseConfig showcaseConfig; // @synthesize showcaseConfig=_showcaseConfig;
@property(nonatomic) double headerSelectionMargin; // @synthesize headerSelectionMargin=_headerSelectionMargin;
@property(nonatomic) BOOL headerCanBecomeFocused; // @synthesize headerCanBecomeFocused=_headerCanBecomeFocused;
@property(nonatomic, getter=isCentered) BOOL centered; // @synthesize centered=_centered;
@property(retain, nonatomic) _TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
// - (void).cxx_destruct;
- (void)_updateSubviews;
- (void)_updateGradientLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_currentFooterView;
- (id)_currentHeaderView;
- (double)_showcaseContentScaleForExpectedWidth:(double)arg1;
- (double)_adjustedShowcaseFactor;
- (UIEdgeInsets)_adjustedPadding;
- (CGRect)_adjustedHeaderFrame;
- (id)_collectionRowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long )arg2 forShowcase:(BOOL)arg3;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
@property(readonly, nonatomic) BOOL shouldBindRowsTogether;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long )arg2;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (void)tv_setShowcaseFactor:(double)arg1;
- (void)reevaluateHeaderFrame;
- (void)reevaluateFooterFrame;
- (id)initWithFrame:(CGRect)arg1;

@end

