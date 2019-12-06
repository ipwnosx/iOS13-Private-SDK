//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResource-Protocol.h>

@class AVTColorPreset, NSDictionary, NSString;

@interface AVTCoreModelColor : NSObject <AVTCacheableResource>
{
    BOOL _showSlider;
    float _rangeMin;
    float _rangeMax;
    AVTColorPreset *_baseColorPreset;
    NSUInteger _order;
    NSDictionary *_derivedColorsByCategories;
//     CDStruct_597dd055 _settingKind;
}

@property(readonly, copy, nonatomic) NSDictionary *derivedColorsByCategories; // @synthesize derivedColorsByCategories=_derivedColorsByCategories;
@property(readonly, nonatomic) float rangeMax; // @synthesize rangeMax=_rangeMax;
@property(readonly, nonatomic) float rangeMin; // @synthesize rangeMin=_rangeMin;
@property(readonly, nonatomic, getter=canShowSlider) BOOL showSlider; // @synthesize showSlider=_showSlider;
@property(readonly, nonatomic) NSUInteger order; // @synthesize order=_order;
// @property(readonly, nonatomic) CDStruct_597dd055 settingKind; // @synthesize settingKind=_settingKind;
@property(readonly, nonatomic) AVTColorPreset *baseColorPreset; // @synthesize baseColorPreset=_baseColorPreset;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)copyForPairedCategory:(long long)arg1;
- (id)copyWithRangeMin:(float)arg1 rangeMax:(float)arg2 showSlider:(BOOL)arg3;
// - (id)initWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 order:(NSUInteger)arg3 showSlider:(BOOL)arg4 rangeMin:(float)arg5 rangeMax:(float)arg6 derivedColorsByCategories:(id)arg7;
// - (id)initWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 order:(NSUInteger)arg3 derivedColorsByCategories:(id)arg4;
- (BOOL)requiresEncryption;
- (NSUInteger)costForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (id)thumbnail;

@end

