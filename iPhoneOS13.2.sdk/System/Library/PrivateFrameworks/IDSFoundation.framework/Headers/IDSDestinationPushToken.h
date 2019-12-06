//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class NSData, NSString;

@interface IDSDestinationPushToken : IDSDestination
{
    NSString *_alias;
    NSData *_pushToken;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) NSString *alias; // @synthesize alias=_alias;
// - (void).cxx_destruct;
- (id)groupID;
- (id)destinationURIs;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAlias:(id)arg1 pushToken:(id)arg2;

@end

