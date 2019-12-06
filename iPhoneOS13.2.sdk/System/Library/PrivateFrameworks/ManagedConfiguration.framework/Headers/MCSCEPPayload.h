//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MCSCEPPayload : MCCertificatePayload
{
    NSString *_URLString;
    NSString *_CAInstanceName;
    NSString *_challenge;
    NSArray *_subject;
    NSUInteger _keySize;
    int _usageFlags;
    NSData *_CAFingerprint;
    NSArray *_CACaps;
    NSDictionary *_subjectAltName;
    NSUInteger _retries;
    NSUInteger _retryDelay;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSUInteger retryDelay; // @synthesize retryDelay=_retryDelay;
@property(readonly, nonatomic) NSUInteger retries; // @synthesize retries=_retries;
@property(readonly, retain, nonatomic) NSDictionary *subjectAltName; // @synthesize subjectAltName=_subjectAltName;
@property(readonly, retain, nonatomic) NSArray *CACaps; // @synthesize CACaps=_CACaps;
@property(readonly, retain, nonatomic) NSData *CAFingerprint; // @synthesize CAFingerprint=_CAFingerprint;
@property(readonly, nonatomic) int usageFlags; // @synthesize usageFlags=_usageFlags;
@property(readonly, nonatomic) NSUInteger keySize; // @synthesize keySize=_keySize;
@property(readonly, retain, nonatomic) NSArray *subject; // @synthesize subject=_subject;
@property(readonly, retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(readonly, retain, nonatomic) NSString *CAInstanceName; // @synthesize CAInstanceName=_CAInstanceName;
@property(readonly, retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
// - (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;
- (BOOL)isIdentity;
- (BOOL)isRoot;

@end

