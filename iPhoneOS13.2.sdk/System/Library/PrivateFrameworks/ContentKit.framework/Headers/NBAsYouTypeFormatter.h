//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NBPhoneMetaData, NBPhoneNumberUtil, NSMutableArray, NSMutableString, NSRegularExpression, NSString;

__attribute__((visibility("hidden")))
@interface NBAsYouTypeFormatter : NSObject
{
    BOOL _isSuccessfulFormatting;
    BOOL _ableToFormat_;
    BOOL _inputHasFormatting_;
    BOOL _isCompleteNumber_;
    BOOL _isExpectingCountryCallingCode_;
    BOOL _shouldAddSpaceAfterNationalPrefix_;
    NSString *_DIGIT_PLACEHOLDER_;
    NSString *_SEPARATOR_BEFORE_NATIONAL_NUMBER_;
    NSString *_currentOutput_;
    NSString *_currentFormattingPattern_;
    NSString *_defaultCountry_;
    NSString *_nationalPrefixExtracted_;
    NSMutableString *_formattingTemplate_;
    NSMutableString *_accruedInput_;
    NSMutableString *_prefixBeforeNationalNumber_;
    NSMutableString *_accruedInputWithoutFormatting_;
    NSMutableString *_nationalNumber_;
    NSRegularExpression *_DIGIT_PATTERN_;
    NSRegularExpression *_NATIONAL_PREFIX_SEPARATORS_PATTERN_;
    NSRegularExpression *_CHARACTER_CLASS_PATTERN_;
    NSRegularExpression *_STANDALONE_DIGIT_PATTERN_;
    NSRegularExpression *_ELIGIBLE_FORMAT_PATTERN_;
    NBPhoneNumberUtil *_phoneUtil_;
    NSUInteger _lastMatchPosition_;
    NSUInteger _originalPosition_;
    NSUInteger _positionToRemember_;
    NSUInteger _MIN_LEADING_DIGITS_LENGTH_;
    NSMutableArray *_possibleFormats_;
    NBPhoneMetaData *_currentMetaData_;
    NBPhoneMetaData *_defaultMetaData_;
    NBPhoneMetaData *_EMPTY_METADATA_;
}

@property(retain, nonatomic) NBPhoneMetaData *EMPTY_METADATA_; // @synthesize EMPTY_METADATA_=_EMPTY_METADATA_;
@property(retain, nonatomic) NBPhoneMetaData *defaultMetaData_; // @synthesize defaultMetaData_=_defaultMetaData_;
@property(retain, nonatomic) NBPhoneMetaData *currentMetaData_; // @synthesize currentMetaData_=_currentMetaData_;
@property(retain, nonatomic) NSMutableArray *possibleFormats_; // @synthesize possibleFormats_=_possibleFormats_;
@property(nonatomic) NSUInteger MIN_LEADING_DIGITS_LENGTH_; // @synthesize MIN_LEADING_DIGITS_LENGTH_=_MIN_LEADING_DIGITS_LENGTH_;
@property(nonatomic) NSUInteger positionToRemember_; // @synthesize positionToRemember_=_positionToRemember_;
@property(nonatomic) NSUInteger originalPosition_; // @synthesize originalPosition_=_originalPosition_;
@property(nonatomic) NSUInteger lastMatchPosition_; // @synthesize lastMatchPosition_=_lastMatchPosition_;
@property(retain, nonatomic) NBPhoneNumberUtil *phoneUtil_; // @synthesize phoneUtil_=_phoneUtil_;
@property(nonatomic) BOOL shouldAddSpaceAfterNationalPrefix_; // @synthesize shouldAddSpaceAfterNationalPrefix_=_shouldAddSpaceAfterNationalPrefix_;
@property(nonatomic) BOOL isExpectingCountryCallingCode_; // @synthesize isExpectingCountryCallingCode_=_isExpectingCountryCallingCode_;
@property(nonatomic) BOOL isCompleteNumber_; // @synthesize isCompleteNumber_=_isCompleteNumber_;
@property(nonatomic) BOOL inputHasFormatting_; // @synthesize inputHasFormatting_=_inputHasFormatting_;
@property(nonatomic) BOOL ableToFormat_; // @synthesize ableToFormat_=_ableToFormat_;
@property(retain, nonatomic) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_; // @synthesize ELIGIBLE_FORMAT_PATTERN_=_ELIGIBLE_FORMAT_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *STANDALONE_DIGIT_PATTERN_; // @synthesize STANDALONE_DIGIT_PATTERN_=_STANDALONE_DIGIT_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *CHARACTER_CLASS_PATTERN_; // @synthesize CHARACTER_CLASS_PATTERN_=_CHARACTER_CLASS_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_; // @synthesize NATIONAL_PREFIX_SEPARATORS_PATTERN_=_NATIONAL_PREFIX_SEPARATORS_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *DIGIT_PATTERN_; // @synthesize DIGIT_PATTERN_=_DIGIT_PATTERN_;
@property(retain, nonatomic) NSMutableString *nationalNumber_; // @synthesize nationalNumber_=_nationalNumber_;
@property(retain, nonatomic) NSMutableString *accruedInputWithoutFormatting_; // @synthesize accruedInputWithoutFormatting_=_accruedInputWithoutFormatting_;
@property(retain, nonatomic) NSMutableString *prefixBeforeNationalNumber_; // @synthesize prefixBeforeNationalNumber_=_prefixBeforeNationalNumber_;
@property(retain, nonatomic) NSMutableString *accruedInput_; // @synthesize accruedInput_=_accruedInput_;
@property(retain, nonatomic) NSMutableString *formattingTemplate_; // @synthesize formattingTemplate_=_formattingTemplate_;
@property(retain, nonatomic) NSString *nationalPrefixExtracted_; // @synthesize nationalPrefixExtracted_=_nationalPrefixExtracted_;
@property(retain, nonatomic) NSString *defaultCountry_; // @synthesize defaultCountry_=_defaultCountry_;
@property(retain, nonatomic) NSString *currentFormattingPattern_; // @synthesize currentFormattingPattern_=_currentFormattingPattern_;
@property(retain, nonatomic) NSString *currentOutput_; // @synthesize currentOutput_=_currentOutput_;
@property(nonatomic) NSString *SEPARATOR_BEFORE_NATIONAL_NUMBER_; // @synthesize SEPARATOR_BEFORE_NATIONAL_NUMBER_=_SEPARATOR_BEFORE_NATIONAL_NUMBER_;
@property(retain, nonatomic) NSString *DIGIT_PLACEHOLDER_; // @synthesize DIGIT_PLACEHOLDER_=_DIGIT_PLACEHOLDER_;
@property(readonly, nonatomic) BOOL isSuccessfulFormatting; // @synthesize isSuccessfulFormatting=_isSuccessfulFormatting;
// - (void).cxx_destruct;
- (id)description;
- (id)inputDigitHelper_:(id)arg1;
- (id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg1 rememberPosition:(BOOL)arg2;
- (BOOL)attemptToExtractCountryCallingCode_;
- (BOOL)attemptToExtractIdd_;
- (id)removeNationalPrefixFromNationalNumber_;
- (BOOL)isNanpaNumberWithNationalPrefix_;
- (id)inputAccruedNationalNumber_;
- (id)attemptToChooseFormattingPattern_;
- (long long)getRememberedPosition;
- (id)appendNationalNumber_:(id)arg1;
- (id)attemptToFormatAccruedDigits_;
- (BOOL)isDigitOrLeadingPlusSign_:(id)arg1;
- (BOOL)ableToExtractLongerNdd_;
- (id)attemptToChoosePatternWithPrefixExtracted_;
- (id)inputDigitWithOptionToRememberPosition_:(id)arg1 rememberPosition:(BOOL)arg2;
- (id)inputDigitAndRememberPosition:(id)arg1;
- (id)inputDigit:(id)arg1;
- (id)inputString:(id)arg1;
- (id)inputStringAndRememberPosition:(id)arg1;
- (id)removeLastDigit;
- (id)removeLastDigitAndRememberPosition;
- (void)clear;
- (id)getFormattingTemplate_:(id)arg1 numberFormat:(id)arg2;
- (BOOL)createFormattingTemplate_:(id)arg1;
- (void)narrowDownPossibleFormats_:(id)arg1;
- (BOOL)isFormatEligible_:(id)arg1;
- (void)getAvailableFormats_:(id)arg1;
- (BOOL)maybeCreateNewTemplate_;
- (id)getMetadataForRegion_:(id)arg1;
- (id)initWithRegionCodeForTest:(id)arg1 bundle:(id)arg2;
- (id)initWithRegionCode:(id)arg1 bundle:(id)arg2;
- (id)initWithRegionCodeForTest:(id)arg1;
- (id)initWithRegionCode:(id)arg1;
- (id)init;

@end

