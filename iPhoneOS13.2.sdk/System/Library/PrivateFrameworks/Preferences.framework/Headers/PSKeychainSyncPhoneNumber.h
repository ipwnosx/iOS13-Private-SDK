//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainSyncCountryInfo, NSString;

@interface PSKeychainSyncPhoneNumber : NSObject
{
    NSString *_digits;
    KeychainSyncCountryInfo *_countryInfo;
}

+ (id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2;
@property(retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
- (id)formattedAndObfuscatedString;
- (id)formattedStringWithDialingPrefix;
- (id)formattedString;
- (id)_stringByAddingDialingPrefixToString:(id)arg1;

@end
