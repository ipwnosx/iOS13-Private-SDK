//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3D2DDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer
{
    vector_aab22ae2 mContainer;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
//  (void)resizeFillDimension:(const struct DataBuffer2DDimension )arg1;
- (void)fillCapacity;
- (void )mutableData;
- (const void *)data;
@property(readonly, nonatomic) vector_aab22ae2 container;
- (NSUInteger)componentByteSize;
- (int)componentType;
- (NSUInteger)count;
//  (id)initWithCapacityDimension:(const struct DataBuffer2DDimension )arg1;

@end

