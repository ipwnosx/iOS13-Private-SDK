//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SFBLEClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedClient;
// - (void).cxx_destruct;
- (id)init;

@end

