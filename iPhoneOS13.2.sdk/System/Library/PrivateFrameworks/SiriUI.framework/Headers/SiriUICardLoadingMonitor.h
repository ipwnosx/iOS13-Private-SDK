//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject
{
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)broadcastCardSnippet:(id)arg1;
- (BOOL)isTrackingObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

