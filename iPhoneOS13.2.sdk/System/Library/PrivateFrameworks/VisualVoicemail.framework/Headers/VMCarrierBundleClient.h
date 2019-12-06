//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMTelephonyClient.h>

#import <VisualVoicemail/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>

@interface VMCarrierBundleClient : VMTelephonyClient <CoreTelephonyClientCarrierBundleDelegate>
{
}

- (void)carrierBundleChange:(id)arg1;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3 error:(id )arg4;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3;
- (id)objectForKey:(id)arg1 subscription:(id)arg2 error:(id )arg3;
- (id)objectForKey:(id)arg1 subscription:(id)arg2;
- (BOOL)isServiceSupportedForSubscription:(id)arg1;
- (id)serviceNameForSubscription:(id)arg1;
- (BOOL)isPasswordChangeSupportedForSubscription:(id)arg1;
- (BOOL)isPasswordChangeSupportedForDefaultSubscription;
- (double)maximumGreetingDurationForSubscription:(id)arg1;
- (BOOL)isGreetingChangeSupportedForSubscription:(id)arg1;

@end

