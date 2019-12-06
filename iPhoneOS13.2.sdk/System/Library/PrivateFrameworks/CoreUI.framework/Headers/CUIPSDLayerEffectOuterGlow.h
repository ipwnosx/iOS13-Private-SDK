//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    NSUInteger _blurSize;
    NSUInteger _spread;
}

@property NSUInteger spread; // @synthesize spread=_spread;
@property NSUInteger blurSize; // @synthesize blurSize=_blurSize;
@property(retain) CUIColor *color; // @synthesize color=_color;
@property double opacity; // @synthesize opacity=_opacity;
@property int blendMode; // @synthesize blendMode=_blendMode;
- (void)dealloc;
- (id)description;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id )arg2;

@end

