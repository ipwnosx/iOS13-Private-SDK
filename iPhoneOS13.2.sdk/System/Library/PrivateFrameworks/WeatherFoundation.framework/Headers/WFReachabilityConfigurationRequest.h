//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@interface WFReachabilityConfigurationRequest : WFTask
{
    id /* CDUnknownBlockType */ _resultHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ resultHandler; // @synthesize resultHandler=_resultHandler;
// - (void).cxx_destruct;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (BOOL)requiresResponse;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;

@end

