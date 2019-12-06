//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSURL;

@interface PKDisbursementVoucher : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
    NSURL *_redemptionURL;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSURL *redemptionURL; // @synthesize redemptionURL=_redemptionURL;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqualToDisbursementVoucher:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

