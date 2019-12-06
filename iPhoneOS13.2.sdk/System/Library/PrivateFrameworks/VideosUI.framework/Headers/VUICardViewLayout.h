//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSShadow, TVImageLayout, UIColor, VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICardViewLayout : NSObject
{
    BOOL _hideFloatingBackground;
    NSShadow *_shadow;
    UIColor *_backgroundColor;
    UIColor *_darkBackgroundColor;
    UIColor *_highlightColor;
    UIColor *_darkHighlightColor;
    long long _imagePosition;
    TVImageLayout *_imageLayout;
    VUITextLayout *_secondaryTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    TVImageLayout *_appImageLayout;
    VUIButtonLayout *_buttonLayout;
//    struct TVCornerRadii _borderRadii;
}

+ (double)cardHeightForElementType:(NSUInteger)arg1 width:(double)arg2;
+ (double)cardHeightForElementType:(NSUInteger)arg1;
@property(retain, nonatomic) VUIButtonLayout *buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property(retain, nonatomic) TVImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property(retain, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(retain, nonatomic) VUITextLayout *secondaryTextLayout; // @synthesize secondaryTextLayout=_secondaryTextLayout;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(retain, nonatomic) UIColor *darkHighlightColor; // @synthesize darkHighlightColor=_darkHighlightColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// property(nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) BOOL hideFloatingBackground; // @synthesize hideFloatingBackground=_hideFloatingBackground;
// - (void).cxx_destruct;
- (id)init;

@end

