//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCharacterRenderer.h>

@class NSMutableArray, _Flower, _Skirt;

@interface NTKCharacterRendererMinnie : NTKCharacterRenderer
{
    _Flower *_flower;
    _Skirt *_skirt;
    NSMutableArray *_footTexs[2];
}

// - (void).cxx_destruct;
- (int)getBlinkFrameFor15sTime:(float)arg1;
- (float)_getBlinkDuration;
- (void)_drawBodyWithEncoder:(id)arg1;
- (void)_drawTappingFootWithEncoder:(id)arg1;
- (void)_drawHeadWithEncoder:(id)arg1;
- (void)_drawSkirtWithEncoder:(id)arg1;
- (void)_drawFlowerWithEncoder:(id)arg1;
- (void)setupBodyState;
- (void)setupGeometry;
- (void)loadFootTextures;
- (id)initWithLoader:(id)arg1;

@end

