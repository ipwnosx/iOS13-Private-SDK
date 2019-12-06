//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class NSArray, NSMutableArray, NSString, TICursorEvent, TIKeyboardCandidate, TIKeyboardInput;

@interface TIWordEntry : TIUserAction
{
    BOOL _includesCursorEdits;
    BOOL _includesOrientationChange;
    BOOL _isRetrocorrection;
    BOOL _isMultilingual;
    BOOL _isOOV;
    BOOL _isContinuousPathCompletion;
    BOOL _isPunctuationEntryFollowingAWord;
    int _wordEntryType;
    int _wordAlignmentConf;
    int _touchAlignmentConf;
    NSString *_acceptedString;
    NSString *_originalAcceptedString;
    NSString *_orientation;
    TIKeyboardInput *_inputTriggeredTextAccepted;
    long long _layoutID;
    NSMutableArray *_allKeyboardInputsM;
    NSMutableArray *_allTouchesM;
    NSMutableArray *_candidatesOfferedM;
    NSMutableArray *_touchLayoutsM;
    TIKeyboardCandidate *_acceptedCandidate;
    TIKeyboardCandidate *_originalCandidate;
    NSString *_inputStem;
    NSString *_inputContext;
    TIWordEntry *_editedEntry;
    TICursorEvent *_editAction;
    NSMutableArray *_allEdits;
    NSUInteger _sessionIndex;
    NSUInteger _alignmentConflicts;
    long long _candidateIndex;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isPunctuationEntryFollowingAWord; // @synthesize isPunctuationEntryFollowingAWord=_isPunctuationEntryFollowingAWord;
@property long long candidateIndex; // @synthesize candidateIndex=_candidateIndex;
@property(nonatomic) NSUInteger alignmentConflicts; // @synthesize alignmentConflicts=_alignmentConflicts;
@property(nonatomic) NSUInteger sessionIndex; // @synthesize sessionIndex=_sessionIndex;
@property(retain, nonatomic) NSMutableArray *allEdits; // @synthesize allEdits=_allEdits;
@property(retain, nonatomic) TICursorEvent *editAction; // @synthesize editAction=_editAction;
@property(retain, nonatomic) TIWordEntry *editedEntry; // @synthesize editedEntry=_editedEntry;
@property(copy, nonatomic) NSString *inputContext; // @synthesize inputContext=_inputContext;
@property(copy, nonatomic) NSString *inputStem; // @synthesize inputStem=_inputStem;
@property(retain, nonatomic) TIKeyboardCandidate *originalCandidate; // @synthesize originalCandidate=_originalCandidate;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property(retain, nonatomic) NSMutableArray *touchLayoutsM; // @synthesize touchLayoutsM=_touchLayoutsM;
@property(retain, nonatomic) NSMutableArray *candidatesOfferedM; // @synthesize candidatesOfferedM=_candidatesOfferedM;
@property(retain, nonatomic) NSMutableArray *allTouchesM; // @synthesize allTouchesM=_allTouchesM;
@property(retain, nonatomic) NSMutableArray *allKeyboardInputsM; // @synthesize allKeyboardInputsM=_allKeyboardInputsM;
@property long long layoutID; // @synthesize layoutID=_layoutID;
@property(nonatomic) int touchAlignmentConf; // @synthesize touchAlignmentConf=_touchAlignmentConf;
@property(nonatomic) int wordAlignmentConf; // @synthesize wordAlignmentConf=_wordAlignmentConf;
@property(retain, nonatomic) TIKeyboardInput *inputTriggeredTextAccepted; // @synthesize inputTriggeredTextAccepted=_inputTriggeredTextAccepted;
@property(nonatomic) BOOL isContinuousPathCompletion; // @synthesize isContinuousPathCompletion=_isContinuousPathCompletion;
@property(nonatomic) BOOL isOOV; // @synthesize isOOV=_isOOV;
@property(nonatomic) BOOL isMultilingual; // @synthesize isMultilingual=_isMultilingual;
@property(nonatomic) BOOL isRetrocorrection; // @synthesize isRetrocorrection=_isRetrocorrection;
@property(nonatomic) BOOL includesOrientationChange; // @synthesize includesOrientationChange=_includesOrientationChange;
@property(nonatomic) BOOL includesCursorEdits; // @synthesize includesCursorEdits=_includesCursorEdits;
@property(nonatomic) int wordEntryType; // @synthesize wordEntryType=_wordEntryType;
@property(copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSString *originalAcceptedString; // @synthesize originalAcceptedString=_originalAcceptedString;
@property(copy, nonatomic) NSString *acceptedString; // @synthesize acceptedString=_acceptedString;
// - (void).cxx_destruct;
- (BOOL)isEntryFollowingANewLine;
@property(readonly, nonatomic) NSArray *touchLayouts;
@property(readonly, nonatomic) NSArray *candidatesOffered;
@property(readonly, nonatomic) NSArray *allTouches;
@property(readonly, nonatomic) NSArray *allKeyboardInputs;
- (void)addTouchEvent:(id)arg1 withLayoutId:(NSUInteger)arg2;
- (void)addCandidateOffered:(id)arg1;
- (void)addKeyInput:(id)arg1;
- (id)descriptionWithContext;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)documentContextBeforeInput;

@end

