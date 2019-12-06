//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAnalyticsBackendEventContextProviding-Protocol.h>

@class NSString, SBFAnalyticsBackend, SBSAnalyticsState;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding>
{
    SBSAnalyticsState *_eventPayload;
    SBFAnalyticsBackend *_backend;
}

// - (void).cxx_destruct;
- (void)stateForQueryName:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBSAnalyticsState *eventPayload;
- (id)initWithEventPayload:(id)arg1 backend:(id)arg2;

@end

