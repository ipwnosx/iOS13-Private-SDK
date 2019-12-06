//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IDSEndpointCapabilities, IDSMPPublicDeviceIdentityContainer, IDSURI, NSData, NSDate, NSError, NSString;

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _legacyVersion;
    BOOL _verifiedBusiness;
    short _ngmVersion;
    IDSURI *_URI;
    NSData *_pushToken;
    IDSEndpointCapabilities *_capabilities;
    IDSMPPublicDeviceIdentityContainer *_publicDeviceIdentityContainer;
    NSData *_serializedNGMDeviceIdentity;
    NSData *_serializedLegacyPublicIdentity;
    NSData *_serializedNGMDevicePrekey;
    NSError *_identityContainerDeserializationError;
    NSData *_KTLoggableData;
    NSData *_sessionToken;
    NSDate *_expireDate;
    NSDate *_refreshDate;
    NSString *_anonymizedSenderID;
    NSString *_senderCorrelationIdentifier;
    double _queryTimeInterval;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double queryTimeInterval; // @synthesize queryTimeInterval=_queryTimeInterval;
@property(readonly, nonatomic) NSString *senderCorrelationIdentifier; // @synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier;
@property(readonly, nonatomic) BOOL verifiedBusiness; // @synthesize verifiedBusiness=_verifiedBusiness;
@property(readonly, nonatomic) NSString *anonymizedSenderID; // @synthesize anonymizedSenderID=_anonymizedSenderID;
@property(readonly, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(readonly, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, nonatomic) NSData *KTLoggableData; // @synthesize KTLoggableData=_KTLoggableData;
@property(readonly, nonatomic) NSError *identityContainerDeserializationError; // @synthesize identityContainerDeserializationError=_identityContainerDeserializationError;
@property(readonly, nonatomic) BOOL legacyVersion; // @synthesize legacyVersion=_legacyVersion;
@property(readonly, nonatomic) short ngmVersion; // @synthesize ngmVersion=_ngmVersion;
@property(readonly, nonatomic) NSData *serializedNGMDevicePrekey; // @synthesize serializedNGMDevicePrekey=_serializedNGMDevicePrekey;
@property(readonly, nonatomic) NSData *serializedLegacyPublicIdentity; // @synthesize serializedLegacyPublicIdentity=_serializedLegacyPublicIdentity;
@property(readonly, nonatomic) NSData *serializedNGMDeviceIdentity; // @synthesize serializedNGMDeviceIdentity=_serializedNGMDeviceIdentity;
@property(retain, nonatomic) IDSMPPublicDeviceIdentityContainer *publicDeviceIdentityContainer; // @synthesize publicDeviceIdentityContainer=_publicDeviceIdentityContainer;
@property(retain, nonatomic) IDSEndpointCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) IDSURI *URI; // @synthesize URI=_URI;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToEndpoint:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSData *serializedPublicLegacyIdentity;
- (id)initWithURI:(id)arg1 capabilities:(id)arg2 ngmVersion:(short)arg3 legacyVersion:(BOOL)arg4 KTLoggableData:(id)arg5 pushToken:(id)arg6 sessionToken:(id)arg7 expireDate:(id)arg8 refreshDate:(id)arg9 anonymizedSenderID:(id)arg10 verifiedBusiness:(BOOL)arg11 serializedPublicMessageProtectionIdentity:(id)arg12 senderCorrelationIdentifier:(id)arg13 queryTimeInterval:(double)arg14 serializedNGMDeviceIdentity:(id)arg15 serializedNGMDevicePrekey:(id)arg16;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 KTLoggableData:(id)arg3 pushToken:(id)arg4 sessionToken:(id)arg5 expireDate:(id)arg6 refreshDate:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(BOOL)arg9 serializedPublicMessageProtectionIdentity:(id)arg10 senderCorrelationIdentifier:(id)arg11 queryTimeInterval:(double)arg12 serializedNGMDeviceIdentity:(id)arg13 serializedNGMDevicePrekey:(id)arg14;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6;

@end

