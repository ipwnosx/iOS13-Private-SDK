//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIImage;

@interface TintedView : UIView
{
    UIImage *_image;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (id)init;

@end

