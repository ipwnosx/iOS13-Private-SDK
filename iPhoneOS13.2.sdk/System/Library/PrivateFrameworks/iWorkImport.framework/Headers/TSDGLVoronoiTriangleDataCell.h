//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLVoronoiTriangleDataCell : NSObject
{
    NSUInteger _triangleCount;
    NSUInteger _vertexCount;
//     CDStruct_6e3f967a _vertexData;
//     CDStruct_6e3f967a _centerPoint;
    CGRect _bounds;
}

@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
// @property(readonly, nonatomic) CDStruct_6e3f967a centerPoint; // @synthesize centerPoint=_centerPoint;
// @property(readonly, nonatomic) CDStruct_6e3f967a vertexData; // @synthesize vertexData=_vertexData;
@property(readonly, nonatomic) NSUInteger vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) NSUInteger triangleCount; // @synthesize triangleCount=_triangleCount;
- (void)dealloc;
// - (id)initWithTrianglePoints:(CDStruct_6e3f967a )arg1;
- (id)initWithEdges:(vector_5a9f1b73)arg1;
- (id)cellsBySplittingCellIntoTriangles;
- (void)p_setupTriangleDataWithEdges:(vector_5a9f1b73)arg1;

@end

