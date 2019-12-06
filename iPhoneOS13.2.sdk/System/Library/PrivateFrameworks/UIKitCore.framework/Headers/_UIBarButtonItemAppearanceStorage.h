//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, NSValue, UIColor, _UIBarBackButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;
- (id)anyBackButtonBackgroundImage;
- (id)backButtonBackgroundImageForState:(NSUInteger)arg1 isMini:(BOOL)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 isMini:(BOOL)arg3;
- (double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(NSUInteger)arg1 style:(long long)arg2 isMini:(BOOL)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 style:(long long)arg3 isMini:(BOOL)arg4;

@end

