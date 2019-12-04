//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFWaiter : NSObject
{
    double _interval;
    double _timeout;
}

+ (id)error;
+ (void)waitUntil:(id /* block */)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(id /* block */)arg4 failure:(id /* block */)arg5;
+ (void)waitFor:(id /* block */)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(id /* block */)arg4 failure:(id /* block */)arg5;
+ (id)waitWithTimeout:(double)arg1 conditionProvider:(id /* block */)arg2;
+ (id)waitWithTimeout:(double)arg1 valueProvider:(id /* block */)arg2;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(id /* block */)arg3 condition:(id /* block */)arg4;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 conditionProvider:(id /* block */)arg3;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(id /* block */)arg3;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;

@end
