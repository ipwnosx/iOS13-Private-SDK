//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSModeAssertionQuerying-Protocol.h>

@class DNDModeAssertionDetails, DNDModeAssertionSource, DNDSModeAssertionInvalidationRequest, DNDSModeAssertionUpdateResult, NSDate;

@protocol DNDSModeAssertionUpdateContext <DNDSModeAssertionQuerying>
- (DNDSModeAssertionUpdateResult *)invalidateAssertionsForRequest:(DNDSModeAssertionInvalidationRequest *)arg1;
- (DNDSModeAssertionUpdateResult *)takeAssertionWithDetails:(DNDModeAssertionDetails *)arg1 source:(DNDModeAssertionSource *)arg2 startDate:(NSDate *)arg3;
@end

