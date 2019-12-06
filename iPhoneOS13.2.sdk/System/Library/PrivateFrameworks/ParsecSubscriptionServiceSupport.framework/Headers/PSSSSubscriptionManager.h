//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManager : NSObject
{
    VSSubscriptionRegistrationCenter *_registrationCenter;
}

@property(retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // @synthesize registrationCenter=_registrationCenter;
// - (void).cxx_destruct;
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscriptionWithInfo:(id)arg1;
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;
- (id)init;

@end

