//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding>
{
    id _revocationPolicyInternal;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(nonatomic) long long networkLookup;
@property(nonatomic) NSUInteger revocationMethods;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRevocationMethods:(NSUInteger)arg1 networkLookup:(long long)arg2;
- (id)init;

@end

