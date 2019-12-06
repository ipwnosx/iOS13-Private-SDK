//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString, NSUUID, TIDocumentState, TIInputContextHistory, TIKeyboardCandidate, TIKeyboardLayout, TIKeyboardLayoutState, TIKeyboardSecureCandidateRenderTraits, TITextInputTraits;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding>
{
    union {
        long long integerValue;
       struct {
            unsigned int userSelectedCurrentCandidate:1;
            unsigned int shouldSkipCandidateSelection:1;
            unsigned int suppressingCandidateSelection:1;
            unsigned int needsCandidateMetadata:1;
            unsigned int keyboardEventsLagging:1;
            unsigned int hardwareKeyboardMode:1;
            unsigned int splitKeyboardMode:1;
            unsigned int floatingKeyboardMode:1;
            unsigned int wordLearningEnabled:1;
            unsigned int autocorrectionEnabled:1;
            unsigned int shortcutConversionEnabled:1;
            unsigned int candidateSelectionPredictionEnabled:1;
            unsigned int autocapitalizationEnabled:1;
            unsigned int canSendCurrentLocation:1;
            unsigned int isScreenLocked:1;
            unsigned int longPredictionListEnabled:1;
            unsigned int needAutofill:1;
            unsigned int needOneTimeCodeAutofill:1;
            unsigned int landscapeOrientation:1;
        } fields;
    } _mask;
    union {
        long long integerValue;
       struct {
            unsigned int displayed:1;
            unsigned int autoDisplayMode:1;
        } fields;
    } _autocorrectionListUIState;
    int _shiftState;
    NSUUID *_documentIdentifier;
    NSString *_clientIdentifier;
    NSString *_inputMode;
    NSArray *_auxiliaryInputModeLanguages;
    NSString *_recipientIdentifier;
    TIInputContextHistory *_inputContextHistory;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIDocumentState *_documentState;
    TIKeyboardSecureCandidateRenderTraits *_secureCandidateRenderTraits;
    NSString *_inputForMarkedText;
    NSString *_searchStringForMarkedText;
    TIKeyboardCandidate *_currentCandidate;
    TITextInputTraits *_textInputTraits;
    NSString *_responseContext;
    NSUInteger _autofillMode;
    NSDictionary *_autofillContext;
    NSArray *_supportedPayloadIds;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *supportedPayloadIds; // @synthesize supportedPayloadIds=_supportedPayloadIds;
@property(retain, nonatomic) NSDictionary *autofillContext; // @synthesize autofillContext=_autofillContext;
@property(nonatomic) NSUInteger autofillMode; // @synthesize autofillMode=_autofillMode;
@property(copy, nonatomic) NSString *responseContext; // @synthesize responseContext=_responseContext;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(retain, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;
@property(copy, nonatomic) NSString *searchStringForMarkedText; // @synthesize searchStringForMarkedText=_searchStringForMarkedText;
@property(copy, nonatomic) NSString *inputForMarkedText; // @synthesize inputForMarkedText=_inputForMarkedText;
@property(copy, nonatomic) TIKeyboardSecureCandidateRenderTraits *secureCandidateRenderTraits; // @synthesize secureCandidateRenderTraits=_secureCandidateRenderTraits;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(copy, nonatomic) TIKeyboardLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(nonatomic) int shiftState; // @synthesize shiftState=_shiftState;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(retain, nonatomic) TIInputContextHistory *inputContextHistory; // @synthesize inputContextHistory=_inputContextHistory;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(copy, nonatomic) NSArray *auxiliaryInputModeLanguages; // @synthesize auxiliaryInputModeLanguages=_auxiliaryInputModeLanguages;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSUUID *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL shouldOutputFullwidthSpace;
@property(nonatomic) BOOL needOneTimeCodeAutofill;
@property(nonatomic) BOOL needAutofill;
@property(nonatomic) BOOL longPredictionListEnabled;
@property(nonatomic) BOOL isScreenLocked;
@property(nonatomic) BOOL canSendCurrentLocation;
@property(nonatomic) BOOL autocorrectionListUIAutoDisplayMode;
@property(nonatomic) BOOL autocorrectionListUIDisplayed;
@property(nonatomic) BOOL secureTextEntry;
@property(nonatomic) NSUInteger keyboardType;
@property(nonatomic) NSUInteger autocapitalizationType;
- (void)_createTextInputTraitsIfNecessary;
@property(nonatomic) BOOL autocapitalizationEnabled;
@property(nonatomic) BOOL candidateSelectionPredictionEnabled;
@property(nonatomic) BOOL shortcutConversionEnabled;
@property(nonatomic) BOOL autocorrectionEnabled;
@property(nonatomic) BOOL wordLearningEnabled;
@property(nonatomic) BOOL landscapeOrientation;
@property(nonatomic) BOOL floatingKeyboardMode;
@property(nonatomic) BOOL splitKeyboardMode;
@property(nonatomic) BOOL hardwareKeyboardMode;
@property(nonatomic) BOOL keyboardEventsLagging;
@property(nonatomic) BOOL needsCandidateMetadata;
@property(nonatomic) BOOL suppressingCandidateSelection;
@property(nonatomic) BOOL shouldSkipCandidateSelection;
@property(nonatomic) BOOL userSelectedCurrentCandidate;

@end

