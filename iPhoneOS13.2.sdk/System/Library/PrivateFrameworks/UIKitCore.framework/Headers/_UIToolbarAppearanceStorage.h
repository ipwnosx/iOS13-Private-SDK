//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage
{
    BOOL _hidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
    UIImage *_shadowImage;
    UIImage *_topShadowImage;
}

+ (long long)typicalBarPosition;
@property(nonatomic) BOOL hidesShadow; // @synthesize hidesShadow=_hidesShadow;
@property(retain, nonatomic) UIImage *topShadowImage; // @synthesize topShadowImage=_topShadowImage;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *miniTopBackgroundImage; // @synthesize miniTopBackgroundImage=_miniTopBackgroundImage;
@property(retain, nonatomic) UIImage *topBackgroundImage; // @synthesize topBackgroundImage=_topBackgroundImage;
@property(retain, nonatomic) UIImage *miniBackgroundImage; // @synthesize miniBackgroundImage=_miniBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
// - (void).cxx_destruct;

@end

