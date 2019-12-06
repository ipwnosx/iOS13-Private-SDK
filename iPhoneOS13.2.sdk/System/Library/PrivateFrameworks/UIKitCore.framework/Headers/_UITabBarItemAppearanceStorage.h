//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *_badgeTextAttributesForState;
    UIColor *_badgeColor;
    UIOffset _titleOffset;
}

@property(copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(nonatomic) UIOffset titleOffset; // @synthesize titleOffset=_titleOffset;
// - (void).cxx_destruct;
- (void)enumerateBadgeTextAttributesWithBlock:(CDUnknownBlockType)arg1;
- (id)badgeTextAttributesForState:(NSUInteger)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(NSUInteger)arg2;

@end

