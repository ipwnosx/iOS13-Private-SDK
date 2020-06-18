//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _UIVectorTextLayoutInfo, _UIVectorTextLayoutParameters;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayout : NSObject
{
    NSArray *_runs;
    NSUInteger _numberOfLines;
    CGRect _boundingRect;
    CGRect _usedBoundingRect;
    NSRange _fitRange;
    double _firstLineBaseline;
    double _lastLineBaseline;
    _UIVectorTextLayoutInfo *_layoutInfo;
    CGAffineTransform _coordinateAdjustment;
}

@property(readonly, nonatomic) CGAffineTransform coordinateAdjustment; // @synthesize coordinateAdjustment=_coordinateAdjustment;
// - (void).cxx_destruct;
- (void)_layoutIfNeeded;
- (id)layoutDescription;
- (id)description;
- (void)enumerateRunsUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) double lastLineBaseline;
@property(readonly, nonatomic) double firstLineBaseline;
@property(readonly, nonatomic) NSRange textRange;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) NSUInteger numberOfRuns;
@property(readonly, nonatomic) NSUInteger numberOfLines;
@property(readonly, nonatomic) CGRect usedBoundingRect;
@property(readonly, nonatomic) CGRect boundingRect;
- (void)resetLayout;
- (BOOL)hasLayout;
@property(readonly, copy, nonatomic) _UIVectorTextLayoutParameters *parameters;
- (id)initWithTextParameters:(id)arg1;

@end

