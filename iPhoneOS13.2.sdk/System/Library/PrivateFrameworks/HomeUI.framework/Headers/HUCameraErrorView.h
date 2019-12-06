//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImageView, UILabel;

@interface HUCameraErrorView : UIStackView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIStackView *_labelStackView;
}

@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *titleText;
- (id)init;

@end

