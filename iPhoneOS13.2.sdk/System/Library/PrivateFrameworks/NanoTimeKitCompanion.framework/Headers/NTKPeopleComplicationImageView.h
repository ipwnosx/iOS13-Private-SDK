//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



#import <NanoTimeKitCompanion/NTKComplicationImageView-Protocol.h>

@class CLKImageProvider, UIColor, UIImageView, UILabel;
@protocol CLKMonochromeFilterProvider;

@interface NTKPeopleComplicationImageView : UIView <NTKComplicationImageView>
{
    UILabel *_nameLabel;
    UIImageView *_profileImageView;
    UIView *_ringView;
    double _monochromeTintAmount;
    BOOL _usesLegibility;
    CLKImageProvider *_imageProvider;
    UIColor *_color;
    UIColor *_overrideColor;
    id _filterProvider;
}

@property(nonatomic) __weak id filterProvider; // @synthesize filterProvider=_filterProvider;
@property(nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (void)resumeLiveFullColorImageView;
- (void)pauseLiveFullColorImageView;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

