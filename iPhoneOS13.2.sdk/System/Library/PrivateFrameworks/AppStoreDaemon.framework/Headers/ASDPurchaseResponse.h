//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>


@class NSArray;

@interface ASDPurchaseResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    NSArray *_items;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPurchaseResponseItems:(id)arg1;
- (id)init;

@end

