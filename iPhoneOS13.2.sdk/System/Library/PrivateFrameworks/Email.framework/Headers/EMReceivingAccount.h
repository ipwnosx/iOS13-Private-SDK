//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMAccount.h>

#import <Email/EMReceivingAccountBuilder-Protocol.h>

@class EMDeliveryAccount, NSArray, NSString;

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder>
{
    BOOL _primaryiCloudAccount;
    BOOL _sourceIsManaged;
    BOOL _shouldArchiveByDefault;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    EMDeliveryAccount *_deliveryAccount;
    NSArray *_emailAddresses;
    NSString *_statisticsKind;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *statisticsKind; // @synthesize statisticsKind=_statisticsKind;
@property(nonatomic) BOOL shouldArchiveByDefault; // @synthesize shouldArchiveByDefault=_shouldArchiveByDefault;
@property(nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) EMDeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
@property(nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // @synthesize primaryiCloudAccount=_primaryiCloudAccount;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)name;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(CDUnknownBlockType)arg4;

@end

