//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SATimerTimerAction-Protocol.h>

@interface SATimerTimerShow : SADomainCommand <SATimerTimerAction>
{
}

+ (id)timerShowWithDictionary:(id)arg1 context:(id)arg2;
+ (id)timerShow;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

