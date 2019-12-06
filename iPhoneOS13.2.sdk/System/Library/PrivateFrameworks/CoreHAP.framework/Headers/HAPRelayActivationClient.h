//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;

@interface HAPRelayActivationClient : HMFObject
{
    id <HAPRelayActivationClientDelegate> _delegate;
}

@property __weak id <HAPRelayActivationClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)close;
- (void)open;

@end

