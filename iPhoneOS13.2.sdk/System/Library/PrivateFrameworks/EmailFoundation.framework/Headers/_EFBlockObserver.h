//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObserver.h>

@interface _EFBlockObserver : EFObserver
{
    id /* CDUnknownBlockType */ _resultBlock;
    id /* CDUnknownBlockType */ _completionBlock;
    id /* CDUnknownBlockType */ _failureBlock;
}

// - (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

