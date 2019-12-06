//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl
{
    long long _blurStyle;
    long long _vibrancyStyle;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
}

// - (void).cxx_destruct;
- (void)appendDescriptionTo:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (BOOL)invertAutomaticStyle;
- (long long)vibrancyStyle;
- (long long)style;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3;
- (id)initWithStyle:(long long)arg1 vibrancyStyle:(long long)arg2;

@end

