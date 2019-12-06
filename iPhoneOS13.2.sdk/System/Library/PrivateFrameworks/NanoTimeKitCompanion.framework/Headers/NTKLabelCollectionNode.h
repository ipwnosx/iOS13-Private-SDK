//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@interface NTKLabelCollectionNode : NTKCollectionNode
{
    BOOL _paddedWithZeros;
    unsigned int _labels;
    unsigned int _start;
    unsigned int _multiple;
    unsigned int _repeat;
    long long _faceStyle;
    long long _font;
    double _fontSize;
    double _color;
//    const struct NTKLabelPosition _positions;
}

//  (void)applyLabelPositions:(const struct NTKLabelPosition )arg1 withCenter:(CGPoint)arg2 toNodes:(id)arg3 forDevice:(id)arg4;
//  (void)applyLabelPositions:(const struct NTKLabelPosition )arg1 toNodes:(id)arg2 forDevice:(id)arg3;
//  (void)applyLabelPosition:(const struct NTKLabelPosition )arg1 withCenter:(CGPoint)arg2 toNode:(id)arg3 forDevice:(id)arg4;
//  (void)applyLabelPosition:(const struct NTKLabelPosition )arg1 toNode:(id)arg2 forDevice:(id)arg3;
// property(nonatomic) const struct NTKLabelPosition positions; // @synthesize positions=_positions;
@property(nonatomic) double color; // @synthesize color=_color;
@property(nonatomic) BOOL paddedWithZeros; // @synthesize paddedWithZeros=_paddedWithZeros;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long font; // @synthesize font=_font;
@property(nonatomic) unsigned int repeat; // @synthesize repeat=_repeat;
@property(nonatomic) unsigned int multiple; // @synthesize multiple=_multiple;
@property(nonatomic) unsigned int start; // @synthesize start=_start;
@property(nonatomic) unsigned int labels; // @synthesize labels=_labels;
@property(nonatomic) long long faceStyle; // @synthesize faceStyle=_faceStyle;
- (void)colorize:(id)arg1;
- (void)createSubNodes;
- (void)updateLabelNodePositions;
- (void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2;
- (id)initForDevice:(id)arg1;

@end

