//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICEResultWaitQueue : NSObject
{
    NSMutableArray *queryList;
//     struct _opaque_pthread_cond_t resCond;
//     struct _opaque_pthread_mutex_t resMutex;
}

// - (void)addResult:(struct tagCONNRESULT )arg1 forCallID:(unsigned int)arg2;
- (id)copyResultForCallID:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

