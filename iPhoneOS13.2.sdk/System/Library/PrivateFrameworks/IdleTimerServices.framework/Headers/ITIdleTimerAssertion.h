//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSSimpleAssertion.h>

@class ITIdleTimerConfiguration, NSString;

@interface ITIdleTimerAssertion : BSSimpleAssertion
{
    ITIdleTimerConfiguration *_configuration;
}

@property(readonly, copy, nonatomic) ITIdleTimerConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic, getter=_uniqueReason) NSString *uniqueReason;
- (id)succinctDescriptionBuilder;
- (id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;

@end

