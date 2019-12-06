//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class SKUIAttributedStringView, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIActivityIndicatorView : SKUIViewReuseView <SKUIViewElementView>
{
    NSUInteger _alignment;
    BOOL _animating;
    UIEdgeInsets _contentInset;
    UIImageView *_imageView;
    UIActivityIndicatorView *_indicatorView;
    SKUIAttributedStringView *_stringView;
    double _period;
}

+ (id)_attributedStringWithLabel:(id)arg1 context:(id)arg2;
+ (CGSize)_activityIndicatorSize;
+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (void)_updateSpinnerAnimation;
- (void)_stopAnimating;
- (void)_startAnimating;
- (BOOL)_isAnimating;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

