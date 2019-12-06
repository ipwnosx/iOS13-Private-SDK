//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, TISmartPunctuationOptions;

@interface TISmartPunctuationController : NSObject
{
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    NSCharacterSet *_alphanumericCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_punctuationCharacterSet;
    NSCharacterSet *_openerCharacterSet;
    NSCharacterSet *_germanApostrophePrecedingSet;
    NSCharacterSet *_dutchApostropheFollowingSet;
    NSCharacterSet *_cornerBracketCharacterSet;
    NSCharacterSet *_bookTitleMarkCharacterSet;
    NSCharacterSet *_dashCharacterSet;
    NSCharacterSet *_enDashCharacterSet;
    NSCharacterSet *_emDashCharacterSet;
    BOOL _smartQuotesEnabled;
    BOOL _smartDashesEnabled;
    NSUInteger _autoQuoteType;
    TISmartPunctuationOptions *_smartPunctuationOptions;
}

+ (id)_chineseContextualVariantMapping;
@property(retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions; // @synthesize smartPunctuationOptions=_smartPunctuationOptions;
@property(nonatomic) NSUInteger autoQuoteType; // @synthesize autoQuoteType=_autoQuoteType;
@property(nonatomic) BOOL smartDashesEnabled; // @synthesize smartDashesEnabled=_smartDashesEnabled;
@property(nonatomic) BOOL smartQuotesEnabled; // @synthesize smartQuotesEnabled=_smartQuotesEnabled;
// - (void).cxx_destruct;
- (id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2;
- (id)_alternatingStringForInputString:(id)arg1 isLockedInput:(BOOL)arg2 hasMarkedText:(BOOL)arg3;
- (void)reset;
- (id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(BOOL)arg2 documentState:(id)arg3;
- (id)smartPunctuationedStringForString:(id)arg1;
- (id)smartPunctuationResultsForString:(id)arg1;
- (void)_initializeDashCharacterSetsIfNecessary;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (id)init;

@end

