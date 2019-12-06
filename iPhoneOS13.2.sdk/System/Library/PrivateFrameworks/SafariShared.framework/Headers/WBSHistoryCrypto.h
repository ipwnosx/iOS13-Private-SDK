//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WBSHistoryCrypto : NSObject
{
    NSData *_cachedCryptographicKey;
    NSData *_salt;
}

@property(readonly, nonatomic) NSData *salt; // @synthesize salt=_salt;
// - (void).cxx_destruct;
- (id)decryptDictionary:(id)arg1;
- (id)encryptDictionary:(id)arg1;
@property(readonly, nonatomic) NSData *cryptographicKey;
- (id)_createOrLoadCryptographicKey;
- (id)_createCryptographicKey;
- (id)initWithCryptographicKey:(id)arg1 salt:(id)arg2;
- (id)init;

@end

