//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSMemoryImageCache : NSObject
{
    MISSING_TYPE *lruCache;
    MISSING_TYPE *accessor;
}

// - (void).cxx_destruct;
- (id)init;
- (void)cacheImage:(id)arg1 forKey:(id)arg2 expires:(BOOL)arg3;
- (id)imageForKey:(id)arg1;
- (id)initWithMaxSize:(long long)arg1 accessor:(id)arg2;

@end

