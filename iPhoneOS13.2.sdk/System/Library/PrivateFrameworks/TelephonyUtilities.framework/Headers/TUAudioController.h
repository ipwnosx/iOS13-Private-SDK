//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TUAudioController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock; // @synthesize modifyingStateLock=_modifyingStateLock;
// - (void).cxx_destruct;
- (id)init;
- (void)_requestUpdatedValueWithBlock:(CDUnknownBlockType)arg1 object:(id )arg2 isRequestingPointer:(BOOL )arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(NSUInteger )arg5 notificationString:(id)arg6 queue:(id)arg7;
- (void)_releaseLock;
- (void)_acquireLock;

@end

