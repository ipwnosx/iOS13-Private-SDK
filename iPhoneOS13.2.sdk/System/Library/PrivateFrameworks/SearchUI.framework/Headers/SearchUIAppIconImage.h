//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUIImage
{
    NSString *_bundleIdentifier;
    NSUInteger _variant;
}

+ (id)appIconForImage:(id)arg1 variant:(NSUInteger)arg2;
+ (double)cornerRadiusForVariant:(NSUInteger)arg1;
+ (CGSize)sizeForVariant:(NSUInteger)arg1;
+ (int)iconFormatForVariant:(NSUInteger)arg1;
+ (id)descriptorNameForVariant:(NSUInteger)arg1;
+ (id)appIconForBundleIdentifier:(id)arg1 variant:(NSUInteger)arg2;
+ (id)appIconForResult:(id)arg1 variant:(NSUInteger)arg2;
@property(nonatomic) NSUInteger variant; // @synthesize variant=_variant;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)uniqueIdentifier;
- (id)generateImageWithFormat:(int)arg1;
- (void)setUiImage:(id)arg1;
- (id)loadImage;
- (id)uiImage;
- (BOOL)needsTinting;
- (id)initWithBundleIdentifier:(id)arg1 variant:(NSUInteger)arg2;

@end

