//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentView;

@interface SXStrokeRenderer : NSObject
{
    SXComponentView *_componentView;
}

@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
// - (void).cxx_destruct;
- (id)cropImage:(id)arg1 withRect:(CGRect)arg2;
- (double)dashLengthForWidth:(double)arg1 andStyle:(int)arg2;
- (id)imageFromContext:(CGContextRef )arg1;
- (CGContextRef )newContextForFrame:(CGRect)arg1;
- (void)drawFullDottedBorder:(id)arg1 withFrame:(CGRect)arg2 inContext:(CGContextRef )arg3;
- (id)dottedStrokesForBorder:(id)arg1 withFrame:(CGRect)arg2;
- (double)phaseForBorderWidth:(double)arg1 style:(int)arg2 borderSide:(int)arg3 length:(double)arg4 startingGap:(double )arg5;
// - (void)drawDashedSide:(id)arg1 borderSide:(int)arg2 withStyleFrames:(CDStruct_b7523c42)arg3 inContext:(CGContextRef )arg4;
// - (CDStruct_b7523c42)framesForBorder:(id)arg1 contentSize:(CGSize)arg2;
- (id)lineForStyle:(id)arg1 andFrame:(CGRect)arg2;
- (id)dashedBorders:(id)arg1 forFrame:(CGRect)arg2;
- (id)dottedBorders:(id)arg1 forFrame:(CGRect)arg2;
- (id)renderBorders:(id)arg1 forFrame:(CGRect)arg2;
- (id)initWithComponentView:(id)arg1;

@end

