//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXGMetalRenderTextureStore : NSObject
{
//     CDStruct_dcc83465 _textures;
    long long _count;
    long long _capacity;
    BOOL _sorted;
}

- (void)_sortIfNeeded;
- (void)removeAllTextures;
- (void)drawWithOrder:(NSUInteger)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
// - (void)addTexture:(CDStruct_dcc83465)arg1;
- (void)dealloc;
- (id)init;

@end

