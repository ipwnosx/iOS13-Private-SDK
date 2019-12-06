//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PrivateKeyProtocol-Protocol.h>

@class NSData, SecKeyP256Public;

__attribute__((visibility("hidden")))
@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol>
{
    NSData *_privateKeyBlob;
    SecKeyP256Public *_publicKey;
}

//  (id)generateWithAccessControl:(struct __CFString )arg1;
+ (id)generate;
@property(retain, nonatomic) SecKeyP256Public *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSData *privateKeyBlob; // @synthesize privateKeyBlob=_privateKeyBlob;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1 error:(id )arg2;
- (id)keychainData;
- (id)signData:(id)arg1 error:(id )arg2;
- (id)keyAgreement:(id)arg1 error:(id )arg2 isRetry:(BOOL)arg3;
- (id)keyAgreement:(id)arg1 error:(id )arg2;
- (id)getPrivateKeyRefWithError:(id )arg1;

@end

