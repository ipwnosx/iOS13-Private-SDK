//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSCacheFlushingManagerType-Protocol.h>

@class MISSING_TYPE;

@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType>
{
    MISSING_TYPE *cacheFlusher;
    MISSING_TYPE *storageLevelProvider;
    MISSING_TYPE *preFlushGroup;
}

// - (void).cxx_destruct;
- (id)init;
- (void)enableFlushing;
- (void)addPreFlushTask:(CDUnknownBlockType)arg1;

@end

