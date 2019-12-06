//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

@interface PKBillPaymentSuggestedAmount : NSObject
{
    NSString *_title;
    NSString *_message;
    NSUInteger _category;
    NSDecimalNumber *_amount;
    long long _priority;
    long long _merchantCategory;
}

@property(nonatomic) long long merchantCategory; // @synthesize merchantCategory=_merchantCategory;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(nonatomic) NSUInteger category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAmount:(id)arg1 category:(NSUInteger)arg2;

@end

