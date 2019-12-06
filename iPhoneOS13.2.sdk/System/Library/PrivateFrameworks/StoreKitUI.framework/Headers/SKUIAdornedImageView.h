//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIImageView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class SKUIAdornedImageViewReuseView;

__attribute__((visibility("hidden")))
@interface SKUIAdornedImageView : SKUIImageView <SKUIViewElementView>
{
    SKUIAdornedImageViewReuseView *_reuseView;
}

+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (void)updatePlayButonBlur:(id)arg1 context:(id)arg2 image:(id)arg3 cacheKey:(id)arg4;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setImage:(id)arg1 cacheKey:(id)arg2 context:(id)arg3;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

