//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMPixelBufferWrapper : NSObject
{
//    struct __CVBuffer _pixelBuffer;
    unsigned int _orientation;
}

+ (id)new;
//  (id)wrapperWithPixelBuffer:(struct __CVBuffer )arg1 orientation:(unsigned int)arg2;
@property(readonly, nonatomic) CGSize orientedSize;
@property(readonly, nonatomic) CGSize unorientedSize;
@property(readonly, nonatomic) unsigned int orientation;
// property(readonly, nonatomic) struct __CVBuffer pixelBuffer;
- (void)dealloc;
//  (id)_initWithPixelBuffer:(struct __CVBuffer )arg1 orientation:(unsigned int)arg2;
- (id)init;

@end

