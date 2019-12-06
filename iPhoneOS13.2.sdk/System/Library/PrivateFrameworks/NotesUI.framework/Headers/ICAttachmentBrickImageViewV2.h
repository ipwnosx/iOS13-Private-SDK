//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer, UIImage;

@interface ICAttachmentBrickImageViewV2 : UIView
{
    BOOL _transparentBackground;
    UIImage _image;
    NSUInteger _imageScaling;
    CALayer *_imageLayer;
}

@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) BOOL transparentBackground; // @synthesize transparentBackground=_transparentBackground;
@property(nonatomic) NSUInteger imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (void)updateBackgroundColor;
- (void)setContentsScale:(double)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)updateSublayersBounds:(CGRect)arg1;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
- (id)initWithFrame:(CGRect)arg1;

@end

