//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTConcurrentMutableIndexSet : NSObject
{
//     struct _opaque_pthread_rwlock_t mRWLock;
    NSMutableIndexSet *mMutableIndexSet;
}

- (void)removeAllIndexes;
- (void)addIndex:(NSUInteger)arg1;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

