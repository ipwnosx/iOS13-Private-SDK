//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBIdleTimerBase.h>

@interface SBDisabledIdleTimer : SBIdleTimerBase
{
    BOOL _activated;
}

- (void)setActivated:(BOOL)arg1;
- (BOOL)isActivated;
- (void)reset;
- (BOOL)isDisabled;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;

@end

