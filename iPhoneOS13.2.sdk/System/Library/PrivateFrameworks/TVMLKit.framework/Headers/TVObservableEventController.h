//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVObservable-Protocol.h>

@class NSMapTable, NSMutableDictionary;

@interface TVObservableEventController : NSObject <TVObservable>
{
    NSMutableDictionary *_observerRecords;
    NSMapTable *_eventsByObserver;
}

// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)dispatchEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;

@end

