//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICAppearanceInfo, NSString, UIColor;

@interface ICLetterpressImageCacheKey : NSObject <NSCopying>
{
    double _scale;
    UIColor *_tintColor;
    NSString *_name;
    NSUInteger _version;
    ICAppearanceInfo *_appearanceInfo;
}

@property(readonly, nonatomic) ICAppearanceInfo *appearanceInfo; // @synthesize appearanceInfo=_appearanceInfo;
@property(readonly, nonatomic) NSUInteger version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithName:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 version:(NSUInteger)arg5;

@end

