//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WatchDogTimer : CHLogger
{
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}

// - (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(CDUnknownBlockType)arg4;

@end

