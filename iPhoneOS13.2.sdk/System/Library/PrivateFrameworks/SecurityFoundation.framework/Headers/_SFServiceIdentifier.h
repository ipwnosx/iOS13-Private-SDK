//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    id _serviceIdentifierInternal;
}

+ (BOOL)supportsSecureCoding;
+ (id)serviceIdentifierForCustomString:(id)arg1;
+ (id)serviceIdentifierForAccessGroup:(id)arg1;
+ (id)serviceIdentifierForBundleID:(id)arg1;
+ (id)serviceIdentifierForDomain:(id)arg1;
+ (id)serviceIdentifierForURL:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic, getter=_lookupKey) NSString *lookupKey;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *serviceID;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceID:(id)arg1 forType:(long long)arg2;

@end

