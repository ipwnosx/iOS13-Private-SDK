//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;
    NSString *_message;
    NSString *_phoneNumber;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithMessage:(id)arg1 phoneNumber:(id)arg2 timestamp:(id)arg3;

@end

