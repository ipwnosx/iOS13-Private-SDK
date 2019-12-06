//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_bankName;
    NSString *_identifier;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_classForType:(long long)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)maskedAccountNumber;
- (id)accountSuffix;
- (BOOL)isValid;
- (void)deleteAllLocalBankInformation;
- (void)deleteAllBankInformation;
- (void)_commonDeleteAllBankInformation;
- (void)updateToLatestKeychainData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

