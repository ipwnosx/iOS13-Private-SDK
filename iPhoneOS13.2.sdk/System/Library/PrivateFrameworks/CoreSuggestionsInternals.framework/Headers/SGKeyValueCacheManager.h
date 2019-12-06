//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SGKeyValueCacheManager : NSObject
{
    NSString *_basePath;
    NSMutableArray *_cacheFiles;
//     struct _opaque_pthread_mutex_t _lock;
}

// - (void).cxx_destruct;
- (void)deleteValueByRecordIdSet:(id)arg1;
- (void)replaceCacheOfType:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (id)cacheOfType:(NSUInteger)arg1;
- (id)cacheOfType:(NSUInteger)arg1 forceReadFromDisk:(BOOL)arg2;
- (id)initInMemory;
- (id)init;
- (id)initWithBasePath:(id)arg1;

@end

