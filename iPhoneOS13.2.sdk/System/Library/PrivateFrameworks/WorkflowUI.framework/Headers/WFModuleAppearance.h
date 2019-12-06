//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface WFModuleAppearance : NSObject
{
    double _cornerRadius;
    UIColor *_shadowColor;
    UIColor *_progressShadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    UIColor *_borderColor;
    double _borderWidth;
    UIFont *_summaryFont;
    UIFont *_unpopulatedSummaryFont;
    UIColor *_backgroundColor;
    UIColor *_parentBackgroundColor;
    UIColor *_progressBackgroundColor;
    UIColor *_separatorColor;
    UIColor *_warningSeparatorColor;
    UIColor *_parametersBackgroundColor;
    UIColor *_parametersHighlightedColor;
    UIColor *_headingButtonColor;
    CGSize _shadowOffset;
}

+ (id)commentAppearance;
+ (id)lightAppearance;
+ (id)defaultAppearance;
@property(readonly, nonatomic) UIColor *headingButtonColor; // @synthesize headingButtonColor=_headingButtonColor;
@property(readonly, nonatomic) UIColor *parametersHighlightedColor; // @synthesize parametersHighlightedColor=_parametersHighlightedColor;
@property(readonly, nonatomic) UIColor *parametersBackgroundColor; // @synthesize parametersBackgroundColor=_parametersBackgroundColor;
@property(readonly, nonatomic) UIColor *warningSeparatorColor; // @synthesize warningSeparatorColor=_warningSeparatorColor;
@property(readonly, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(readonly, nonatomic) UIColor *parentBackgroundColor; // @synthesize parentBackgroundColor=_parentBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIFont *unpopulatedSummaryFont; // @synthesize unpopulatedSummaryFont=_unpopulatedSummaryFont;
@property(readonly, nonatomic) UIFont *summaryFont; // @synthesize summaryFont=_summaryFont;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(readonly, nonatomic) UIColor *progressShadowColor; // @synthesize progressShadowColor=_progressShadowColor;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

