//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

@interface DMFProvisioningProfile : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_UUID;
    NSString *_name;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 expirationDate:(id)arg3;

@end

