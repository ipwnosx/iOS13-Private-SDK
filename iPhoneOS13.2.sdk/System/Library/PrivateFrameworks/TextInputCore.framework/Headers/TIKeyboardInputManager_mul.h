//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager
{
    BOOL _isSuspended;
}

- (id)resourceInputModes;
- (void)updateLanguagePriors;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (void)loadDictionaries;
- (BOOL)shouldUpdateDictionary;
- (BOOL)updateLanguageModelForKeyboardState;
//  (struct LanguageModelContainer )languageModelContainer;
- (vector_4dc11a9b)lexiconInformationVector;
// - (CDStruct_69b8fb94)lexiconInfoForInputMode:(id)arg1;
- (float)weightForInputMode:(id)arg1;
- (unsigned int)lexiconIDForInputMode:(id)arg1;
- (void)enumerateInputModesWithBlock:(CDUnknownBlockType)arg1;
- (id)keyboardConfiguration;
- (void)suspend;
- (void)resume;

@end

