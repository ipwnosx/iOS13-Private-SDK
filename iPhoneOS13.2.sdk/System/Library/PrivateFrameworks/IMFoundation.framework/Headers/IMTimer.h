//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IMTimer : NSObject
{
    id _timer;
    id _target;
    NSDictionary *_userInfo;
    NSString *_name;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_queue;
    SEL _selector;
    BOOL _wakeDevice;
    BOOL _useCurrentRunLoop;
}

@property(readonly, retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (void)invalidate;
@property(readonly, retain, nonatomic) NSDate *fireDate;
- (void)_reschedulePCPersistentTimer;
- (void)setFireTimeInterval:(double)arg1;
- (id)_initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 queue:(id)arg8;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 queue:(id)arg7;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;

@end

