//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl : _UIVibrancyEffectImpl
{
    long long _compositingMode;
    NSString *_filterType;
    UIColor *_compositingColor;
}

// - (void).cxx_destruct;
- (void)appendDescriptionTo:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;

@end

