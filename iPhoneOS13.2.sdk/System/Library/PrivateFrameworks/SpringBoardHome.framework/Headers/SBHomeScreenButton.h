//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBHomeScreenMaterialView;

@interface SBHomeScreenButton : UIButton
{
    SBHomeScreenMaterialView *_materialView;
}

+ (UIEdgeInsets)backgroundInsets;
+ (id)defaultContentImage;
@property(readonly, nonatomic) SBHomeScreenMaterialView *materialView; // @synthesize materialView=_materialView;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 backgroundView:(id)arg2;

@end

