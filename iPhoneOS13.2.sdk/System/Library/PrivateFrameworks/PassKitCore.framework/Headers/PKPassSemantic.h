//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSNumber, NSPersonNameComponents, NSString, PKCurrencyAmount, PKLocation;

@interface PKPassSemantic : NSObject <NSSecureCoding>
{
    NSString *_semanticKey;
    NSString *_fieldKey;
    NSString *_stringValue;
    NSDate *_dateValue;
    NSNumber *_numberValue;
    PKLocation *_locationValue;
    PKCurrencyAmount *_currencyAmountValue;
    NSPersonNameComponents *_personNameComponentsValue;
    NSArray *_stringsValue;
    NSArray *_dictionariesValue;
}

+ (id)_supportedDictionaryValueTypes;
+ (BOOL)isSupportedDictionaryKeyType:(id)arg1;
+ (BOOL)isSupportedDictionaryValueType:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *dictionariesValue; // @synthesize dictionariesValue=_dictionariesValue;
@property(retain, nonatomic) NSArray *stringsValue; // @synthesize stringsValue=_stringsValue;
@property(retain, nonatomic) NSPersonNameComponents *personNameComponentsValue; // @synthesize personNameComponentsValue=_personNameComponentsValue;
@property(retain, nonatomic) PKCurrencyAmount *currencyAmountValue; // @synthesize currencyAmountValue=_currencyAmountValue;
@property(retain, nonatomic) PKLocation *locationValue; // @synthesize locationValue=_locationValue;
@property(retain, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *fieldKey; // @synthesize fieldKey=_fieldKey;
@property(copy, nonatomic) NSString *semanticKey; // @synthesize semanticKey=_semanticKey;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL hasValue;

@end

