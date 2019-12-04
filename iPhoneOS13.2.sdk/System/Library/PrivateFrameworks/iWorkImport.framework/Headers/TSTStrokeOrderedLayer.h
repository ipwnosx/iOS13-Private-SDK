//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTStrokeLayer.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeOrderedLayer : TSTStrokeLayer
{
    TSTStrokeLayer *_majorStrokeLayer;
    TSTStrokeLayer *_minorStrokeLayer;
}

@property(retain, nonatomic) TSTStrokeLayer *minorStrokeLayer; // @synthesize minorStrokeLayer=_minorStrokeLayer;
@property(retain, nonatomic) TSTStrokeLayer *majorStrokeLayer; // @synthesize majorStrokeLayer=_majorStrokeLayer;
- (void)enumerateRawStrokesSegmentsUsingBlock:(id /* block */)arg1;
- (void)invalidateRange:(struct TSTSimpleRange)arg1;
- (void)invalidate;
- (void)insertStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)appendStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)enumerateStrokesUsingBlock:(id /* block */)arg1;
- (id)nextStrokeAndRange:(id)arg1;
- (id)findStrokeAndRangeAtIndex:(long long)arg1;
- (id)p_findStrokeAndRangeAtIndex:(long long)arg1 highOrderToken:(id)arg2 updatingLowOrderToken:(id *)arg3 lowOrderLayer:(id)arg4;
- (long long)startingIndex;
- (id)initWithContext:(id)arg1 majorStrokeLayer:(id)arg2 minorStrokeLayer:(id)arg3;

@end
