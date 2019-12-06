//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject <NSCopying>
{
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_shadowImages;
    UIColor *_tintColor;
}

+ (id)defaultToolbarAppearance;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)styleToolbar:(id)arg1;
- (id)shadowImageForPosition:(long long)arg1;
- (void)setShadowImage:(id)arg1 forPosition:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)enumerateShadowImagesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBackgroundImagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)dealloc;

@end

