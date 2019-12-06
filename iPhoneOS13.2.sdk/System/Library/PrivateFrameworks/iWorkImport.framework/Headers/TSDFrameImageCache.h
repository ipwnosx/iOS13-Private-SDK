//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSDFrameImageCache : NSObject
{
    NSMutableArray *mEntries;
}

+ (id)sharedFrameImageCache;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)p_newEntryForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(BOOL)arg4;
- (CGImageRef)setCachedImage:(CGImageRef)arg1 forFrame:(id)arg2 size:(CGSize)arg3 viewScale:(double)arg4 forCALayer:(BOOL)arg5 mask:(BOOL)arg6;
- (CGImageRef)newCachedImageForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 forCALayer:(BOOL)arg4 mask:(BOOL)arg5;
- (void)dealloc;
- (id)init;

@end

