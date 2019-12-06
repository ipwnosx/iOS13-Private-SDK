//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKToken.h>

@class NSData, NSMutableDictionary, NSString;

@interface AKMasterToken : AKToken
{
    NSMutableDictionary *_properties;
}

+ (id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2;
+ (id)tokenWithExternalizedVersionString:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *externalizedVersionString;
@property(readonly, nonatomic) NSData *externalizedVersion;
- (void)_setEncryptedSessionKey:(id)arg1;
@property(readonly, nonatomic) NSData *encryptedSessionKey;
- (void)_setSessionKey:(id)arg1;
@property(readonly, nonatomic) NSData *sessionKey;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (id)init;
- (BOOL)updateWithHTTPURLResponse:(id)arg1;

@end

