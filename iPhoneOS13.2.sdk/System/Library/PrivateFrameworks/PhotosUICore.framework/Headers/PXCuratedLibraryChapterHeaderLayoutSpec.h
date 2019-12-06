//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class NSString, UIColor, UIFont;

@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec
{
    BOOL _shouldFloat;
    BOOL _shouldAbbreviateMonth;
    UIFont _titleFont;
    double _titleHeight;
    UIColor _titleColor;
    UIColor _floatingTitleColor;
    UIColor _subtitleColor;
    UIColor _floatingSubtitleColor;
    NSString *_chevronImageName;
    double _spacingBetweenTitleAndSubtitle;
    double _spacingBetweenTitleTopAndPreviousCardBottom;
    double _spacingBetweenTitleBottomAndNextCardTop;
    double _floatingDistanceFromSafeAreaTop;
    double _floatingAppearanceCrossfadeStartDistance;
    double _floatingAppearanceCrossfadeDistance;
    double _floatingAppearanceCrossfadeDuration;
    double _floatingFadeOutDistance;
    CGSize _contentInset;
}

@property(readonly, nonatomic) double floatingFadeOutDistance; // @synthesize floatingFadeOutDistance=_floatingFadeOutDistance;
@property(readonly, nonatomic) double floatingAppearanceCrossfadeDuration; // @synthesize floatingAppearanceCrossfadeDuration=_floatingAppearanceCrossfadeDuration;
@property(readonly, nonatomic) double floatingAppearanceCrossfadeDistance; // @synthesize floatingAppearanceCrossfadeDistance=_floatingAppearanceCrossfadeDistance;
@property(readonly, nonatomic) double floatingAppearanceCrossfadeStartDistance; // @synthesize floatingAppearanceCrossfadeStartDistance=_floatingAppearanceCrossfadeStartDistance;
@property(readonly, nonatomic) double floatingDistanceFromSafeAreaTop; // @synthesize floatingDistanceFromSafeAreaTop=_floatingDistanceFromSafeAreaTop;
@property(readonly, nonatomic) BOOL shouldAbbreviateMonth; // @synthesize shouldAbbreviateMonth=_shouldAbbreviateMonth;
@property(readonly, nonatomic) BOOL shouldFloat; // @synthesize shouldFloat=_shouldFloat;
@property(readonly, nonatomic) double spacingBetweenTitleBottomAndNextCardTop; // @synthesize spacingBetweenTitleBottomAndNextCardTop=_spacingBetweenTitleBottomAndNextCardTop;
@property(readonly, nonatomic) double spacingBetweenTitleTopAndPreviousCardBottom; // @synthesize spacingBetweenTitleTopAndPreviousCardBottom=_spacingBetweenTitleTopAndPreviousCardBottom;
@property(readonly, nonatomic) double spacingBetweenTitleAndSubtitle; // @synthesize spacingBetweenTitleAndSubtitle=_spacingBetweenTitleAndSubtitle;
@property(readonly, nonatomic) NSString *chevronImageName; // @synthesize chevronImageName=_chevronImageName;
@property(readonly, nonatomic) UIColor *floatingSubtitleColor; // @synthesize floatingSubtitleColor=_floatingSubtitleColor;
@property(readonly, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, nonatomic) UIColor *floatingTitleColor; // @synthesize floatingTitleColor=_floatingTitleColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, nonatomic) CGSize contentInset; // @synthesize contentInset=_contentInset;
// - (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2;

@end

