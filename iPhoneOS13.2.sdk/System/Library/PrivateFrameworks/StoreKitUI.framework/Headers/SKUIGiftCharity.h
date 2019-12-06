//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SKUIArtwork;

__attribute__((visibility("hidden")))
@interface SKUIGiftCharity : NSObject
{
    NSString *_amountDisclaimer;
    NSArray *_amounts;
    NSString *_description;
    NSString *_identifier;
    NSString *_legalText;
    NSString *_legalText2;
    SKUIArtwork *_logoArtwork;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) SKUIArtwork *logoArtwork; // @synthesize logoArtwork=_logoArtwork;
@property(readonly, nonatomic) NSString *legalText2; // @synthesize legalText2=_legalText2;
@property(readonly, nonatomic) NSString *legalText; // @synthesize legalText=_legalText;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *donationAmounts; // @synthesize donationAmounts=_amounts;
@property(readonly, nonatomic) NSString *charityDescription; // @synthesize charityDescription=_description;
@property(readonly, nonatomic) NSString *amountDisclaimer; // @synthesize amountDisclaimer=_amountDisclaimer;
// - (void).cxx_destruct;
- (id)initWithCharityDictionary:(id)arg1;

@end

