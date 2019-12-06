//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, NSURL, PKPaymentPass;

@interface PKPaymentRemoteCredential : PKPaymentCredential
{
    NSString *_identifier;
    long long _status;
    NSURL *_passURL;
    NSArray *_summaryMetadata;
    NSArray *_metadata;
    NSString *_summaryMetadataDescription;
    NSString *_statusDescription;
    NSString *_ownershipTokenIdentifier;
    PKPaymentPass *_paymentPass;
    NSUInteger _rank;
    NSString *_productIdentifier;
    NSString *_serialNumber;
}

@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(nonatomic) NSUInteger rank; // @synthesize rank=_rank;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(readonly, copy, nonatomic) NSString *summaryMetadataDescription; // @synthesize summaryMetadataDescription=_summaryMetadataDescription;
@property(readonly, copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *summaryMetadata; // @synthesize summaryMetadata=_summaryMetadata;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)_isEqualToCredential:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

