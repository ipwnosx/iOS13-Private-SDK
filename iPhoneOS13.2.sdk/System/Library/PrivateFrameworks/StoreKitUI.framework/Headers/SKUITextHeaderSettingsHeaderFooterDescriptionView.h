//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class SKUIViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SKUITextHeaderSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView
{
    UILabel *_label;
    SKUIViewElement *_viewElement;
}

+ (id)_labelWithLabelElements:(id)arg1;
+ (id)_labelElementsFromViewElement:(id)arg1;
+ (id)_concatenateTextFromLabelElements:(id)arg1;
+ (CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

