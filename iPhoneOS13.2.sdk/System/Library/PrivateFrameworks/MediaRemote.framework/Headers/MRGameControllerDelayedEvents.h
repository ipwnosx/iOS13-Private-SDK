//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRGameControllerDelayedEvents : NSObject
{
    NSMutableDictionary *_events;
}

// - (void).cxx_destruct;
- (void)invokeEventsForController:(NSUInteger)arg1 beacuseElement:(int)arg2;
- (id)eventForController:(NSUInteger)arg1 element:(int)arg2;

@end

