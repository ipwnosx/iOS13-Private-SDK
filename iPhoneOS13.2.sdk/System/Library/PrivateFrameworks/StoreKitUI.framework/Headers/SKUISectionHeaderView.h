//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSArray, NSMapTable, SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUISectionHeaderView : SKUIViewReuseView <SKUIViewElementView>
{
    UIEdgeInsets _contentInset;
    CGSize _lastFitSize;
    NSArray *_lines;
    SKUIHeaderViewElement *_header;
    NSMapTable *_views;
}

+ (CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_linesForViewElement:(id)arg1 width:(double)arg2 buttonSize:(CGSize)arg3 context:(id)arg4;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

