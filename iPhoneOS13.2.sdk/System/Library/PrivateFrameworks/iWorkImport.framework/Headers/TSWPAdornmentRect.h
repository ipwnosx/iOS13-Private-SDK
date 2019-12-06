//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDFill, TSDShadow, TSDStroke, TSUBezierPath, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSWPAdornmentRect : NSObject
{
    int _type;
    TSDStroke *_stroke;
    TSDFill *_fill;
    TSDShadow *_shadow;
    TSUSparseArray *_paths;
    TSUSparseArray *_rubyPaths;
    NSRange * _range;
    CGRect _rect;
}

@property(readonly, copy, nonatomic) TSUSparseArray *rubyPaths; // @synthesize rubyPaths=_rubyPaths;
@property(readonly, copy, nonatomic) TSUSparseArray *paths; // @synthesize paths=_paths;
@property(readonly, nonatomic) NSRange * range; // @synthesize range=_range;
@property(retain, nonatomic) TSDShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) TSDFill *fill; // @synthesize fill=_fill;
@property(readonly, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
@property(readonly, nonatomic) CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)pathFromLimitSelection:(id)arg1 rubyGlyphRange:(NSRange *)arg2;
@property(readonly, copy, nonatomic) TSUBezierPath *path;
- (id)initWithCharacterStrokeAdornmentState:(id)arg1;
- (id)initWithCharacterFillAdornmentState:(id)arg1;
- (id)initWithCharacterStroke:(id)arg1 rect:(CGRect)arg2 range:(NSRange *)arg3 paths:(id)arg4 rubyPaths:(id)arg5;
- (id)initWithCharacterFill:(id)arg1 rect:(CGRect)arg2 range:(NSRange *)arg3 paths:(id)arg4 rubyPaths:(id)arg5;
- (id)initWithRect:(CGRect)arg1 fill:(id)arg2;
- (id)initWithRect:(CGRect)arg1 stroke:(id)arg2;
- (id)initWithRect:(CGRect)arg1 stroke:(id)arg2 fill:(id)arg3 type:(int)arg4;
- (id)initWithRect:(CGRect)arg1 stroke:(id)arg2 fill:(id)arg3 type:(int)arg4 range:(NSRange *)arg5 paths:(id)arg6 rubyPaths:(id)arg7;
- (id)initWithRect:(CGRect)arg1 stroke:(id)arg2 fill:(id)arg3 type:(int)arg4 range:(NSRange *)arg5 paths:(id)arg6 rubyPaths:(id)arg7 shadow:(id)arg8;

@end

