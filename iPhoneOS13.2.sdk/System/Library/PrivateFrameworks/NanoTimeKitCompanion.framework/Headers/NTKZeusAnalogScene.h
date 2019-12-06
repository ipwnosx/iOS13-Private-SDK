//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NSArray, NSCalendar, NSDate, NTKZeusColorPalette, SKNode, SKSpriteNode;

@interface NTKZeusAnalogScene : NTKAnalogScene
{
    
    SKNode *_fontContainerNodes[2];
    NSArray *_fontHourNodes[2];
    SKNode *_logoContainerNode;
    SKSpriteNode *_logo1Node;
    SKSpriteNode *_logo2Node;
    SKNode *_multicolorContainerNode;
    SKSpriteNode *_multicolorBackground;
    SKSpriteNode *_multicolorSplit[5];
    double _previousCorrectionTime;
    double _currentTime;
    double _startSplitRotation;
    double _endSplitRotation;
    double _rotationDuration;
    NTKZeusColorPalette *_palette;
        NSUInteger _style;
    BOOL _isEditing;
    BOOL _isStatusIconVisible;
    double _bleedZRotation;
    BOOL _scrubbing;
    NSCalendar *_calendar;
}

@property(nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
// - (void).cxx_destruct;
@property(nonatomic) double backgroundAlpha;
- (double)_splitAngle;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_digitAlphaForEditMode:(long long)arg1;
- (void)_configureForEditMode:(long long)arg1;
- (double)_lowerComplicationAlphaForEditing:(BOOL)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (NSUInteger)currentDensity;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(NSUInteger)arg2 toDensity:(NSUInteger)arg3;
- (double)_secondHandAlphaForDensity:(NSUInteger)arg1 isEditing:(BOOL)arg2;
- (void)applyDensity:(NSUInteger)arg1;
- (id)_nodeForBleed:(NSUInteger)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(NSUInteger)arg2 toStyle:(NSUInteger)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromHourLabelCollectionNode:(id)arg2 toHourLabelCollectionNode:(id)arg3;
- (void)applyStyle:(NSUInteger)arg1;
- (void)_applyHourLabelCollectionNode:(id)arg1;
- (id)_hoursNodeForStyle:(NSUInteger)arg1 bleed:(NSUInteger)arg2;
- (CGPoint)_logoContainerPositionForStyle:(NSUInteger)arg1;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (void)setOverrideDate:(id)arg1 hourRadians:(double)arg2 minuteRadians:(double)arg3 secondRadians:(double)arg4;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)update:(double)arg1;
- (CGPoint)centerOf4NumeralForStyle:(NSUInteger)arg1;
- (void)_update12ForStatusIconVisibilityAnimated:(BOOL)arg1;
- (void)_update12ForStatusIconVisibility;
- (void)setAdjustsForStatusBarIcon:(BOOL)arg1 animated:(BOOL)arg2;
- (id)auxiliaryScrubbingObscuredNodes;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_significantTimeChanged;
- (void)dealloc;
- (id)initWithSize:(CGSize)arg1 forDevice:(id)arg2;

@end

