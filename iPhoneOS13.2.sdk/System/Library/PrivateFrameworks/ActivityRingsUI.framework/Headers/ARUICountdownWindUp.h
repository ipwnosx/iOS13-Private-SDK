//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownWindUp : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
{
}

+ (id)identifier;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)identifier;
- (BOOL)cancelable;
- (id)timingFunction;
- (double)duration;
- (double)delay;

@end

