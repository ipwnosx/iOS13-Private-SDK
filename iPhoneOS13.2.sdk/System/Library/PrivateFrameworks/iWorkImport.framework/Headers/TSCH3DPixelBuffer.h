//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DPixelBuffer : NSObject
{
    tvec2_3b141483 mSize;
    NSUInteger mComponents;
    CGContextRef mBitmapContext;
}

+ (id)pixelBufferWithSize:(const tvec2_3b141483 )arg1 components:(NSUInteger)arg2;
+ (id)pixelBufferFromFramebuffer:(id)arg1 processor:(id)arg2 session:(id)arg3 sourceRegion:(const box_0260e9b3 )arg4 components:(NSUInteger)arg5 flipped:(BOOL)arg6;
@property(readonly, nonatomic) CGContextRef context; // @synthesize context=mBitmapContext;
@property(readonly, nonatomic) NSUInteger components; // @synthesize components=mComponents;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id).cxx_construct;
- (void)flip;
- (void)copyPixelsFromSourceBuffer:(id)arg1 sourceRegion:(const box_0260e9b3 )arg2 targetRegion:(const box_0260e9b3 )arg3 flipped:(BOOL)arg4;
- (void)copyPixelsFromData:(const void *)arg1;
@property(readonly, nonatomic) char buffer;
- (void )data;
- (id)TSUImage;
@property(readonly, nonatomic) box_0260e9b3 bounds;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 )arg1 components:(NSUInteger)arg2;
- (BOOL)copyPixelsFromFramebuffer:(id)arg1 processor:(id)arg2 session:(id)arg3 sourceRegion:(const box_0260e9b3 )arg4 targetRegion:(const box_0260e9b3 )arg5 flipped:(BOOL)arg6;

@end

