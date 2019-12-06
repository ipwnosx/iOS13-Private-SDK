//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionUpdateContext-Protocol.h>

@class DNDSClientDetailsProvider, DNDSModeAssertionStore, DNDSModeAssertionUpdateResult;

@interface DNDSModeAssertionManagerUpdateContext : NSObject <DNDSModeAssertionUpdateContext>
{
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModeAssertionStore *_store;
    DNDSModeAssertionUpdateResult *_updateResult;
}

@property(readonly, copy, nonatomic) DNDSModeAssertionUpdateResult *updateResult; // @synthesize updateResult=_updateResult;
@property(readonly, copy, nonatomic) DNDSModeAssertionStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (id)_calculateUpdateResultForStore:(id)arg1 previousStore:(id)arg2;
- (void)_cleanupStore:(inout id)arg1;
- (void)_resolveStore:(inout id)arg1;
- (id)invalidateAssertionsForRequest:(id)arg1;
- (id)takeAssertionWithDetails:(id)arg1 source:(id)arg2 startDate:(id)arg3;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)arg1;
- (id)modeAssertionsMatchingPredicate:(id)arg1;
- (id)takeAssertionWithUUID:(id)arg1 details:(id)arg2 source:(id)arg3 startDate:(id)arg4;
- (id)initWithStore:(id)arg1 clientDetailsProvider:(id)arg2;

@end

