//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioClientManager : NSObject
{
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;
- (void)unregisterBlocksForService;
- (void)registerBlocksForService;
- (void)dealloc;
- (id)init;

@end

