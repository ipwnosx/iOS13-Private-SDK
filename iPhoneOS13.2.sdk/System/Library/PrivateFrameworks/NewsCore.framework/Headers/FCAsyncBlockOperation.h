//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface FCAsyncBlockOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    id /* CDUnknownBlockType */ _block;
}

+ (id)asyncBlockOperationWithMainThreadBlock:(CDUnknownBlockType)arg1;
+ (id)asyncBlockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

