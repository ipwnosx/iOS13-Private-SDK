//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString;

@interface BYLocationController : NSObject
{
    NSString *_guessedCountryFromTelephony;
    NSArray *_guessedCountries;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    BOOL _fakeMode;
    NSArray *_firstGuessedLanguages;
    NSDate *_wirelessScanStartDate;
}

+ (id)sharedBuddyLocationController;
@property(retain, nonatomic) NSDate *wirelessScanStartDate; // @synthesize wirelessScanStartDate=_wirelessScanStartDate;
@property(nonatomic) BOOL fakeMode; // @synthesize fakeMode=_fakeMode;
@property(retain, nonatomic) NSArray *firstGuessedLanguages; // @synthesize firstGuessedLanguages=_firstGuessedLanguages;
@property(retain, nonatomic) NSArray *guessedCountries; // @synthesize guessedCountries=_guessedCountries;
// - (void).cxx_destruct;
- (void)reset;
- (void)_closeWifiConnection;
- (void)_scanComplete:(id)arg1 error:(BOOL)arg2;
- (void)_scanWifiList;
- (void)_getWifiDevice;
- (void)_startWifiScan;
- (id)guessedLanguages;
- (BOOL)getCountryFromTelephony;
- (id)guessedCountryFromTelephony;
- (void)dealloc;
- (id)init;
- (void)_setGuessedCountryDefault:(id)arg1;
- (id)_countriesFromDefaults;
- (id)_checkedArrayForString:(id)arg1;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)_checkForAliases:(id)arg1;
- (id)aliasDict;
- (id)_countryFromTelephony;

@end

