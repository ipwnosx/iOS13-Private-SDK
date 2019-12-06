//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSNumber, NSSet, NSString;

@interface _EARLanguageDetectorRequestContext : NSObject <NSCopying>
{
    NSDictionary *_languagePriors;
    NSSet *_dictationLanguages;
    NSString *_currentDictationLanguage;
    NSNumber *_wasLanguageToggled;
    NSArray *_multilingualKeyboardLanguages;
    NSDictionary *_keyboardConvoLanguagePriors;
    NSDictionary *_keyboardGlobalLanguagePriors;
    NSString *_previousMessageLanguage;
    NSString *_globalLastKeyboardUsed;
    NSDictionary *_dictationLanguagePriors;
    NSArray *_recentMessages;
}

//  (id)contextFromLDContext:(const struct LDContext )arg1;
@property(copy, nonatomic) NSArray *recentMessages; // @synthesize recentMessages=_recentMessages;
@property(copy, nonatomic) NSDictionary *dictationLanguagePriors; // @synthesize dictationLanguagePriors=_dictationLanguagePriors;
@property(copy, nonatomic) NSString *globalLastKeyboardUsed; // @synthesize globalLastKeyboardUsed=_globalLastKeyboardUsed;
@property(copy, nonatomic) NSString *previousMessageLanguage; // @synthesize previousMessageLanguage=_previousMessageLanguage;
@property(copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // @synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors;
@property(copy, nonatomic) NSDictionary *keyboardConvoLanguagePriors; // @synthesize keyboardConvoLanguagePriors=_keyboardConvoLanguagePriors;
@property(copy, nonatomic) NSArray *multilingualKeyboardLanguages; // @synthesize multilingualKeyboardLanguages=_multilingualKeyboardLanguages;
@property(copy, nonatomic) NSNumber *wasLanguageToggled; // @synthesize wasLanguageToggled=_wasLanguageToggled;
@property(copy, nonatomic) NSString *currentDictationLanguage; // @synthesize currentDictationLanguage=_currentDictationLanguage;
@property(copy, nonatomic) NSSet *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property(copy, nonatomic) NSDictionary *languagePriors; // @synthesize languagePriors=_languagePriors;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
// property(readonly) struct LDContext LDContext;

@end

