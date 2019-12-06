//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDictionary, NSString;

@interface CRKLogEvent : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSDate *_date;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithName:(id)arg1 date:(id)arg2 userInfo:(id)arg3;
- (id)init;

@end

