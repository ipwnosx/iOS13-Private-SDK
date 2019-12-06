//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIFontDescriptor;

@interface _UIFontPickerFontInfo : NSObject
{
    NSString *_familyName;
    NSString *_styleName;
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    NSUInteger _hasMultipleFaces;
    NSArray *_subInfos;
    NSString *_postscriptName;
}

// + (id)infoWithFontDescriptor:(struct __CTFontDescriptor )arg1;
+ (id)infoWithFamilyName:(id)arg1;
@property(readonly) NSString *postscriptName; // @synthesize postscriptName=_postscriptName;
@property(readonly) NSString *styleName; // @synthesize styleName=_styleName;
@property(readonly) NSString *familyName; // @synthesize familyName=_familyName;
// - (void).cxx_destruct;
- (id)description;
- (id)faceMatchingDescriptor:(id)arg1;
- (BOOL)matchesFontDescriptor:(id)arg1;
- (BOOL)matchesFamilyForFontDescriptor:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) _UIFontPickerFontInfo *familyInfo;
@property(readonly) double lineHeight;
- (BOOL)matchesConfiguration:(id)arg1;
- (BOOL)matchesTraits:(unsigned int)arg1;
- (BOOL)matchesLanguages:(id)arg1;
@property(readonly) NSAttributedString *attributedString;
- (void)_updateAttributedStringIfNeeded;
- (id)_fontStringForTraitCollection:(id)arg1;
@property(readonly) NSString *localizedFamilyName;
@property(readonly) NSString *localizedName;
- (void)_populateLocalizedNamesIfNecessary;
@property(readonly, getter=isFontFamilyAvailable) BOOL fontFamilyAvailable;
@property(readonly) UIFontDescriptor *fontDescriptor;
@property(readonly) NSArray *faces;
- (id)_sortedFacesByWeight;
@property(readonly) BOOL hasMultipleFaces;
- (id)initWithFontDescriptor:(id)arg1;
- (id)initWithFamilyName:(id)arg1;

@end

