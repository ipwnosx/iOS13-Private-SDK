//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore;

@interface SXEventStoreProvider : NSObject
{
    EKEventStore *_eventStore;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;

@end

