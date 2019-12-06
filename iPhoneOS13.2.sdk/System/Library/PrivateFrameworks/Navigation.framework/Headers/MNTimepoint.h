//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>

@class NSDate, NSString;

@interface MNTimepoint : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>
{
    long long _type;
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
+ (id)arriveBy:(id)arg1;
+ (id)leaveBy:(id)arg1;
+ (id)leaveNow;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)jsonDictionary;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 date:(id)arg2;

@end

