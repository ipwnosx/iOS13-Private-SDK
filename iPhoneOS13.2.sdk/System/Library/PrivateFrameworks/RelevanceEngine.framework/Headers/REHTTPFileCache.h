//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

@interface REHTTPFileCache : NSObject
{
    NSString *_directory;
    NSCache *_cache;
}

// - (void).cxx_destruct;
- (id)loadFileAtPath:(id)arg1;
- (id)initWithRootDirectory:(id)arg1;

@end

