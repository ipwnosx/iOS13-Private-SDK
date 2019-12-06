//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationShifter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FMLocationShifter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    GEOLocationShifter *_locationShifter;
}

@property(retain, nonatomic) GEOLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)shiftLocations:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (BOOL)isLocationShiftRequiredForItems:(id)arg1;
- (BOOL)isLocationShiftRequiredForItem:(id)arg1;
- (id)init;
- (id)shiftLocations:(id)arg1 timeout:(double)arg2;
- (id)shiftLocation:(id)arg1 timeout:(double)arg2;

@end

