//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSCH3DResource, TSCH3DTextureResource;

__attribute__((visibility("hidden")))
@interface TSCH3DTexture : NSObject <NSCopying>
{
    TSCH3DTextureResource *mTextureResource;
}

- (void)didInitFromSOS;
- (id)optimizedMipmapBuffer;
- (id)representativeColorBuffer;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (void)resetResource;
@property(readonly, nonatomic) TSCH3DResource *resource; // @dynamic resource;
- (BOOL)hasCompleteData;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

