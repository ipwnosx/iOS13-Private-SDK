//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFTimer.h>

@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer
{
    NSUUID *_executionSessionID;
}

@property(readonly, nonatomic) NSUUID *executionSessionID; // @synthesize executionSessionID=_executionSessionID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2;

@end

