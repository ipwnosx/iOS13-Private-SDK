//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TransparencySignatureVerifier;

@interface TransparencyTrustedKeyStore : NSObject
{
    TransparencySignatureVerifier *_signatureVerifier;
    NSDictionary *_trustedKeys;
}

@property(retain) NSDictionary *trustedKeys; // @synthesize trustedKeys=_trustedKeys;
@property(retain) TransparencySignatureVerifier *signatureVerifier; // @synthesize signatureVerifier=_signatureVerifier;
// - (void).cxx_destruct;
- (id)initWithTrustedKeys:(id)arg1;

@end

