//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3Dvec2DataBuffer : TSCH3DFloatVectorDataBuffer
{
    vector_d73af98f mContainer;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)clear;
- (id)elementsAtIndices:(id)arg1;
- (NSUInteger)componentByteSize;
- (NSUInteger)components;
- (NSUInteger)count;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_d73af98f container;
- (id)initWithCapacity:(NSUInteger)arg1;

@end

