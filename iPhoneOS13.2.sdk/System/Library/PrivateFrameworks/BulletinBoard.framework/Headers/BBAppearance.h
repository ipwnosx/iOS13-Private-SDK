//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BBColor, BBImage, NSString;

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    BBColor *_titleColor;
    BBImage *_image;
    BBColor *_color;
    long long _style;
    NSString *_viewClassName;
}

+ (BOOL)supportsSecureCoding;
+ (id)appearanceWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *viewClassName; // @synthesize viewClassName=_viewClassName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) BBColor *color; // @synthesize color=_color;
@property(copy, nonatomic) BBImage *image; // @synthesize image=_image;
@property(copy, nonatomic) BBColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

