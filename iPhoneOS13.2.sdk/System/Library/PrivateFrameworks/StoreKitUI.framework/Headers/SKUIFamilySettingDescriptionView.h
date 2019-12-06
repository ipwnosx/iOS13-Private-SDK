//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingDescriptionView.h>

@class SKUISettingsFamilyViewElement, SKUIViewElementLayoutContext, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView
{
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_iconImageView;
    UILabel *_labelView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISettingsFamilyViewElement *_viewElement;
    long long _viewState;
}

+ (CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (void)_setViewState:(long long)arg1;
- (void)_layoutWithLockup;
- (void)_layoutWithActivityIndicator;
- (id)_attributedStringForViewState;
- (id)_attributedStringForKey:(id)arg1;
- (void)layoutSubviews;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

