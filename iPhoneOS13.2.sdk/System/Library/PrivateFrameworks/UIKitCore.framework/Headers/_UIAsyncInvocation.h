//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _UIAsyncInvocation : NSObject
{
    _Atomic void _observer;
    id /* CDUnknownBlockType */ _invocationBlock;
    _Atomic BOOL _invocationBlockHasBeenCalled;
    _Atomic long long _invokeCallCount;
}

+ (id)emptyInvocation;
+ (id)invocationWithBlock:(CDUnknownBlockType)arg1;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)invoke;

@end

