//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_machineID;
    NSString *_oneTimePassword;
    NSUInteger _routingInfo;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger routingInfo; // @synthesize routingInfo=_routingInfo;
@property(copy, nonatomic) NSString *oneTimePassword; // @synthesize oneTimePassword=_oneTimePassword;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

