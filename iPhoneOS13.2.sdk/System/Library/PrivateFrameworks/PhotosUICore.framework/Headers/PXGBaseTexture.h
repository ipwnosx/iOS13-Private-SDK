//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGMutableSpriteTexture-Protocol.h>
#import <PhotosUICore/PXGSpriteTexture-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString;
@protocol OS_dispatch_queue;

@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture>
{
    NSMutableIndexSet *_spriteIndexes;
    NSObject<OS_dispatch_queue> *_syncQueue;
   struct {
        int _field1;
        unsigned int _field2;
    } _syncQueue_pendingImageRequestInfo;
    NSUInteger _syncQueue_pendingImageRequestInfoCount;
    NSUInteger _syncQueue_pendingImageRequestInfoCapacity;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) CGSize pixelSize;
@property(readonly, nonatomic) CGImageRef imageRepresentation;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
- (void)_syncQueue_resizeStorageIfNeeded;
- (BOOL)containsSpriteIndex:(unsigned int)arg1;
- (void)applyChangeDetails:(id)arg1;
- (void)processPendingTextureRequestIDsWithHandler:(CDUnknownBlockType)arg1;
- (void)enumerateSpriteIndexes:(CDUnknownBlockType)arg1;
- (void)getSpriteIndexes:(unsigned int )arg1 maxSpriteCount:(unsigned int)arg2;
- (void)addSpriteIndexRange:(NSRange *)arg1;
- (void)_addSpriteIndex:(unsigned int)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

@end

