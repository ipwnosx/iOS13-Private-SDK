//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer
{
//    struct DataBuffer3DDimension mDimension;
    vector_aab22ae2 mContainer;
}

//  (id)bufferWithCapacity3DDimension:(const struct DataBuffer3DDimension )arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_aab22ae2 container;
- (NSUInteger)componentByteSize;
- (int)componentType;
- (NSUInteger)components;
- (NSUInteger)count;
- (tvec3_c2818ced)size;
//  (id)initWithCapacity3DDimension:(const struct DataBuffer3DDimension )arg1;

@end

