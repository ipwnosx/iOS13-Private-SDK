//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDPCSSQLCachePool : NSObject
{
    NSMutableDictionary *_cachesByPath;
    NSMutableDictionary *_checkoutsByPath;
}

+ (id)sharedPool;
@property(retain, nonatomic) NSMutableDictionary *checkoutsByPath; // @synthesize checkoutsByPath=_checkoutsByPath;
@property(retain, nonatomic) NSMutableDictionary *cachesByPath; // @synthesize cachesByPath=_cachesByPath;
// - (void).cxx_destruct;
- (void)releaseCache:(id)arg1 forContext:(id)arg2;
- (id)cacheForContext:(id)arg1;
- (id)_init;

@end

