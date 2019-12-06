//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SiriUI/SiriUIReusableView-Protocol.h>

@class SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView, UILabel, UIView;
@protocol SiriUIReusableView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView>
{
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_materialView;
    UIView *_clippingContainerView;
    UIView *_cancelledTouchPreventionView;
    UILabel *_cancelledLabel;
    BOOL _cellIsUsingPlatterStyle;
    double _topPadding;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    SiriUISnippetViewController *_snippetViewController;
    UIEdgeInsets _snippetEdgeInsets;
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
+ (CGRect)contentBoundsForCollectionViewCellBounds:(CGRect)arg1 snippetViewController:(id)arg2;
@property(nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) UIEdgeInsets snippetEdgeInsets; // @synthesize snippetEdgeInsets=_snippetEdgeInsets;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
// - (void).cxx_destruct;
- (void)setTopPadding:(double)arg1;
- (void)setShowBackgroundView:(BOOL)arg1;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetResizeToSize:(CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (double)_heightForTransparentFooterView;
- (double)_heightForTransparentHeaderView;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (void)_configureSubviewsForCurrentInset;
- (void)layoutSubviews;
- (id)accessibilityIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

