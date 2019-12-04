//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUIRuntimeStatistics : NSObject
{
    // Error parsing type: Aq, name: _wasted_size
    // Error parsing type: Aq, name: _total_size
    // Error parsing type: Aq, name: _shortCircuitImageLookup
    // Error parsing type: Aq, name: _total_lookup
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;
- (void)incrementStatisticLookup;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2;
- (void)_logStatistics:(int)arg1;
- (void)dealloc;
- (id)init;

@end
