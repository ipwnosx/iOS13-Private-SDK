//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSCardMetadataRegistrationResult : NSObject
{
    NSString *_cardArtwork;
    long long _cardType;
    NSString *_descriptionLong;
    NSString *_descriptionShort;
    long long _paymentNetwork;
    NSString *_serialNumber;
    NSString *_suffix;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) long long paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(retain, nonatomic) NSString *descriptionShort; // @synthesize descriptionShort=_descriptionShort;
@property(retain, nonatomic) NSString *descriptionLong; // @synthesize descriptionLong=_descriptionLong;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardArtwork; // @synthesize cardArtwork=_cardArtwork;
// - (void).cxx_destruct;
- (id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7;
- (id)init;

@end

