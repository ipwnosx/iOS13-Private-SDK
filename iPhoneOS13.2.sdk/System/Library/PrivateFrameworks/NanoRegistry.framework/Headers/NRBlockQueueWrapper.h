//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRBlockQueueWrapper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _block;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;

@end

