//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _DKObserverEntry : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_call;
}

@property(retain) NSObject *call; // @synthesize call=_call;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;

@end

