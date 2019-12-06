//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/TXRDataSourceProvider-Protocol.h>

@class CUINamedTexture;
@protocol TXRBufferAllocator;

__attribute__((visibility("hidden")))
@interface _CUTextureLink : NSObject <TXRDataSourceProvider>
{
    CUINamedTexture *_namedTexture;
    id <TXRBufferAllocator> _bufferAllocator;
}

- (id)provideImageInfoAtLevel:(NSUInteger)arg1 element:(NSUInteger)arg2 face:(NSUInteger)arg3;
- (id)provideTextureInfo;
- (void)dealloc;
- (void)setBufferAllocator:(id)arg1;
- (id)bufferAllocator;
- (id)namedTexture;
- (void)setNamedTexture:(id)arg1;

@end

