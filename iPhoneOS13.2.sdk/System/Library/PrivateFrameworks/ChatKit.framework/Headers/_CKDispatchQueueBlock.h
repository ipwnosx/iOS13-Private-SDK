//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CKDispatchQueueBlock : NSObject
{
    id /* CDUnknownBlockType */ _block;
    NSString *_key;
    long long _priority;
    NSUInteger _fifo;
}

@property(nonatomic, setter=setFIFO:) NSUInteger fifo; // @synthesize fifo=_fifo;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (void)cancel;
- (long long)compare:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(NSUInteger)arg4;
- (id)description;

@end

