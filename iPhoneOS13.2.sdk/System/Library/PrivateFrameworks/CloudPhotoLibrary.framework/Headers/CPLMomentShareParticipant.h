//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSPersonNameComponents, NSString;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _hasiCloudAccount;
    BOOL _isCurrentUser;
    short _type;
    short _status;
    NSString *_email;
    NSString *_phoneNumber;
    NSString *_userIdentifier;
    NSPersonNameComponents *_nameComponents;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) short status; // @synthesize status=_status;
@property(nonatomic) short type; // @synthesize type=_type;
@property(nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(nonatomic) BOOL hasiCloudAccount; // @synthesize hasiCloudAccount=_hasiCloudAccount;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

