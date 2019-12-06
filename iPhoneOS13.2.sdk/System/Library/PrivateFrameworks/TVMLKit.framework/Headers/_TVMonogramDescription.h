//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL, UIColor, UIFont;
@protocol IKNetworkRequestLoader;

@interface _TVMonogramDescription : NSObject <NSCopying>
{
    BOOL _shouldFallBackToSilhouette;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_text;
    NSURL *_imageURL;
    UIFont *_font;
    long long _scaleMode;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    double _upscaleAdjustment;
    double _cornerRadius;
    UIColor *_fillColor;
    double _borderWidth;
    UIColor *_borderColor;
    id <IKNetworkRequestLoader> _requestLoader;
    CGSize _size;
    UIEdgeInsets _padding;
}

@property(nonatomic) __weak id <IKNetworkRequestLoader> requestLoader; // @synthesize requestLoader=_requestLoader;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) BOOL shouldFallBackToSilhouette; // @synthesize shouldFallBackToSilhouette=_shouldFallBackToSilhouette;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double upscaleAdjustment; // @synthesize upscaleAdjustment=_upscaleAdjustment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
// - (void).cxx_destruct;
- (NSUInteger)preferedMonogramType;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyWithType:(NSUInteger)arg1;
- (id)init;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;

@end

