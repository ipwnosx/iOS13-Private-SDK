//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SGRecordId : NSObject <NSCopying, NSSecureCoding>
{
    long long _internalEntityId;
}

+ (id)recordIdWithNumericValue:(long long)arg1;
+ (id)recordIdWithInternalEntityId:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (BOOL)isEqualToRecordId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (long long)numericValue;
- (long long)internalEntityId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalEntityId:(long long)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

