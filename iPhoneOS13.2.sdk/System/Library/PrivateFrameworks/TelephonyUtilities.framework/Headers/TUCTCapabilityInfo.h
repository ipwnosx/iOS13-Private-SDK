//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUPubliclyAccessibleCopying-Protocol.h>

@class NSData, NSString, NSURL;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    BOOL _canEnable;
    BOOL _enabled;
    BOOL _canEnableRoaming;
    BOOL _roamingEnabled;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property(nonatomic) BOOL canEnableRoaming; // @synthesize canEnableRoaming=_canEnableRoaming;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL canEnable; // @synthesize canEnable=_canEnable;
@property(copy, nonatomic) NSData *provisioningPostData; // @synthesize provisioningPostData=_provisioningPostData;
@property(copy, nonatomic) NSURL *provisioningURL; // @synthesize provisioningURL=_provisioningURL;
@property(nonatomic) int provisioningStatus; // @synthesize provisioningStatus=_provisioningStatus;
// - (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(_NSZone )arg1;
- (id)publiclyAccessibleCopy;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
@property(readonly, nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid;
@property(readonly, copy) NSString *description;

@end

