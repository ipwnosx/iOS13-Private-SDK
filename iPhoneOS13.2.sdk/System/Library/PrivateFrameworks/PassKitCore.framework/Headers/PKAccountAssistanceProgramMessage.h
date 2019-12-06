//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject>
{
    NSDecimalNumber *_pastDue;
    NSDecimalNumber *_chargeOffPreventionAmount;
    NSDecimalNumber *_currentBalance;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(retain, nonatomic) NSDecimalNumber *chargeOffPreventionAmount; // @synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount;
@property(retain, nonatomic) NSDecimalNumber *pastDue; // @synthesize pastDue=_pastDue;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

