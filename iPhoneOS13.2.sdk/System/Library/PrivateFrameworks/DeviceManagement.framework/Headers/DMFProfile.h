//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isManaged;
    BOOL _isLocked;
    BOOL _hasRemovalPasscode;
    BOOL _isEncrypted;
    NSString *_UUID;
    NSUInteger _type;
    NSString *_identifier;
    long long _profileVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_profileDescription;
    NSArray *_signerCertificates;
    NSArray *_payloads;
    NSDictionary *_restrictions;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, copy, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, copy, nonatomic) NSArray *signerCertificates; // @synthesize signerCertificates=_signerCertificates;
@property(readonly, nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, nonatomic) BOOL hasRemovalPasscode; // @synthesize hasRemovalPasscode=_hasRemovalPasscode;
@property(readonly, nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUUID:(id)arg1 type:(NSUInteger)arg2 identifier:(id)arg3 profileVersion:(long long)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(BOOL)arg8 isLocked:(BOOL)arg9 hasRemovalPasscode:(BOOL)arg10 isEncrypted:(BOOL)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14;

@end

