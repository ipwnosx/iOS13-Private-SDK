//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class UIImageView;

@interface HUAlbumIconContentView : HUIconContentView
{
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)_updateIconImage;
- (void)setIconSize:(NSUInteger)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

