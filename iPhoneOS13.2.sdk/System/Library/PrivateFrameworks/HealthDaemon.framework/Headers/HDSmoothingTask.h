//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemonTransaction, HKWorkoutRoute, NSArray;

@interface HDSmoothingTask : NSObject
{
    HKWorkoutRoute *_sample;
    NSArray *_unsmoothedLocations;
    id /* CDUnknownBlockType */ _completionHandler;
    HDDaemonTransaction *_transaction;
    NSUInteger _smoothingAttempts;
}

@property NSUInteger smoothingAttempts; // @synthesize smoothingAttempts=_smoothingAttempts;
@property(retain, nonatomic) HDDaemonTransaction *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *unsmoothedLocations; // @synthesize unsmoothedLocations=_unsmoothedLocations;
@property(retain, nonatomic) HKWorkoutRoute *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1;

@end

