//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBProcessWatchdogProviding-Protocol.h>

@class FBApplicationProcessWatchdogPolicy;

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding>
{
    FBApplicationProcessWatchdogPolicy *_defaultProcessWatchdogProvider;
}

+ (id)defaultSceneWatchdogProvider;
// - (void).cxx_destruct;
- (id)_scaleProvisions:(id)arg1 byFactor:(double)arg2;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (id)init;

@end

