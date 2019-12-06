//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class NSArray, TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUITextBadgeLayout : TVViewLayout
{
    NSUInteger _badgeKind;
    double _cornerRadius;
    NSArray *_gradientBgColors;
    VUITextLayout *_textLayout;
    TVImageLayout *_imageLayout;
}

+ (id)_textBadgeLayoutWithViewElement:(id)arg1 withBadgeType:(NSUInteger)arg2;
+ (id)_spotlightBadgeLayoutWithViewElement:(id)arg1;
+ (id)_glyphImageLayoutWithTintColor:(id)arg1 viewElement:(id)arg2;
+ (long long)_badgeSizeForElement:(id)arg1;
+ (NSUInteger)textBadgeTypeFromString:(id)arg1;
+ (id)layoutWithViewElement:(id)arg1 withTextBadgeType:(NSUInteger)arg2;
+ (id)layoutWithViewElement:(id)arg1;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(retain, nonatomic) NSArray *gradientBgColors; // @synthesize gradientBgColors=_gradientBgColors;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) NSUInteger badgeKind; // @synthesize badgeKind=_badgeKind;
// - (void).cxx_destruct;
- (void)_updateTextColorWithViewElement:(id)arg1 defaultColor:(id)arg2;
- (void)_updateBgColorWithViewElement:(id)arg1 defaultColor:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

