//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFObserver : NSObject
{
}

+ (void)sendObserver:(id)arg1 resultsOfBlock:(CDUnknownBlockType)arg2;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1;

@end

