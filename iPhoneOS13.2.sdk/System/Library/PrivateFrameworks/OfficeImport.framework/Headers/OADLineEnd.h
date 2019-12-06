//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADProperties.h>


__attribute__((visibility("hidden")))
@interface OADLineEnd : OADProperties <NSCopying>
{
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsLengthOverridden:1;
}

+ (id)stringForLineEndLength:(unsigned char)arg1;
+ (id)stringForLineEndWidth:(unsigned char)arg1;
+ (id)stringForLineEndType:(unsigned char)arg1;
+ (id)defaultProperties;
- (id)description;
- (BOOL)isLengthOverridden;
- (void)setLength:(unsigned char)arg1;
- (unsigned char)length;
- (BOOL)isWidthOverridden;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)width;
- (BOOL)isTypeOverridden;
- (void)setType:(unsigned char)arg1;
- (unsigned char)type;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3;
- (id)initWithDefaults;
// - (id)copyWithZone:(_NSZone )arg1;

@end

