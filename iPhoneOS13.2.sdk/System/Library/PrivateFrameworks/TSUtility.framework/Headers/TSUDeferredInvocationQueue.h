//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSUDeferredInvocationQueue : NSObject
{
    NSMutableArray *_invocations;
    id _target;
}

- (void)performInvocations;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)dealloc;

@end

