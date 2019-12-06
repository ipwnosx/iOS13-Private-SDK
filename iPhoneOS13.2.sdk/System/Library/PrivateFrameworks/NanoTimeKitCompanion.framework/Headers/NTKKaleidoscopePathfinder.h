//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE;

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding>
{
    float _sampleRadiusX;
    float _sampleRadiusY;
    int _cellGridWidth;
    int _cellGridHeight;
    int _pathLength;
    MISSING_TYPE *_dominanceGrid;
    MISSING_TYPE *_path;
    float _startRotation;
}

+ (BOOL)supportsSecureCoding;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderFromDirectory:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1;
@property(readonly, nonatomic) float startRotation; // @synthesize startRotation=_startRotation;
@property(readonly, nonatomic) int pathLength; // @synthesize pathLength=_pathLength;
@property(readonly, nonatomic) int cellGridHeight; // @synthesize cellGridHeight=_cellGridHeight;
@property(readonly, nonatomic) int cellGridWidth; // @synthesize cellGridWidth=_cellGridWidth;
- (void)adjustSampleRadius:(float)arg1;
- (void)adjustRotationStart:(float)arg1;
- (BOOL)writeToFile:(id)arg1;
- (BOOL)writeToDirectory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
//  (struct NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

