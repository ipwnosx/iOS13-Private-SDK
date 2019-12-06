//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIBezierPath;

@interface NTKRichComplicationCornerView : NTKRichComplicationView
{
    long long _position;
    UIBezierPath *_hitTestPath;
    CGRect _hitTestBounds;
    double _innerComponentRotationInDegree;
    double _outerComponentRotationInDegree;
}

+ (id)_createHitTestPathWithViewBounds:(CGRect)arg1 position:(long long)arg2 forDevice:(id)arg3;
+ (UIEdgeInsets)_keylinePaddingForPosition:(long long)arg1 conentSize:(CGSize)arg2 forDevice:(id)arg3 narrowTopSlots:(BOOL)arg4;
+ (id)viewWithLegacyComplicationType:(NSUInteger)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(NSUInteger)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (id)keylineViewForPosition:(long long)arg1 forDevice:(id)arg2 narrowTopSlots:(BOOL)arg3;
+ (id)keylineImageForPosition:(long long)arg1 filled:(BOOL)arg2 forDevice:(id)arg3 narrowTopSlots:(BOOL)arg4;
+ (CGAffineTransform)transformForState:(long long)arg1 position:(long long)arg2 device:(id)arg3;
+ (id)layoutRuleForState:(long long)arg1 position:(long long)arg2 faceBounds:(CGRect)arg3 forDevice:(id)arg4 narrowTopSlots:(BOOL)arg5;
+ (CGSize)viewSizeForDevice:(id)arg1;
@property(nonatomic) double outerComponentRotationInDegree; // @synthesize outerComponentRotationInDegree=_outerComponentRotationInDegree;
@property(nonatomic) double innerComponentRotationInDegree; // @synthesize innerComponentRotationInDegree=_innerComponentRotationInDegree;
@property(nonatomic) long long position; // @synthesize position=_position;
// - (void).cxx_destruct;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (void)_editingDidEnd;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_layoutView:(id)arg1 origin:(CGPoint)arg2 editingTranslation:(CGPoint)arg3 editingRotationInDegree:(double)arg4;
- (void)_layoutCurvedLabel:(id)arg1 centerAngleInDegree:(double)arg2 editingRotationInDegree:(double)arg3;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFamily:(long long)arg1;
- (id)init;

@end

