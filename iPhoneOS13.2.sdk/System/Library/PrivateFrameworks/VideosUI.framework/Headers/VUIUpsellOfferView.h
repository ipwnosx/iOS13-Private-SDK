//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKImageElement, IKViewElement, VUILabel, VUIUpsellOfferViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferView : UIView
{
    IKViewElement *_viewElement;
    VUIUpsellOfferViewLayout *_layout;
    VUILabel *_titleLabel;
    VUILabel *_descriptionLabel;
    _TVImageView *_imageView;
    IKImageElement *_imageElement;
}

+ (id)upsellViewFromElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) IKImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUIUpsellOfferViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (CGSize)_iOS_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

