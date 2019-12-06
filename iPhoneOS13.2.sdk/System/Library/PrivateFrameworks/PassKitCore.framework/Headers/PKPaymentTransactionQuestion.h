//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>
{
    BOOL _answered;
    BOOL _answeredOnThisDevice;
    NSUInteger _type;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL answeredOnThisDevice; // @synthesize answeredOnThisDevice=_answeredOnThisDevice;
@property(nonatomic) BOOL answered; // @synthesize answered=_answered;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToQuestion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic) NSArray *allowedAnswers;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

