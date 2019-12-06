//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCUCoverEffects, BCULayerRenderer, NSHashTable;
@protocol OS_dispatch_queue;

@interface BCUImageRenderContext : NSObject
{
    BCULayerRenderer *_renderer;
    BCUCoverEffects *_coverEffects;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_filterOperations;
}

@property(retain, nonatomic) NSHashTable *filterOperations; // @synthesize filterOperations=_filterOperations;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) BCUCoverEffects *coverEffects; // @synthesize coverEffects=_coverEffects;
@property(readonly, nonatomic) BCULayerRenderer *renderer; // @synthesize renderer=_renderer;
// - (void).cxx_destruct;
- (void)filteredImageFromImage:(CGImageRef)arg1 filterInfo:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

@end

