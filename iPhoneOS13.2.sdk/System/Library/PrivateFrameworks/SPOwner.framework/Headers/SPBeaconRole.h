//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding>
{
    long long _roleId;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRoleId:(long long)arg1;

@end

