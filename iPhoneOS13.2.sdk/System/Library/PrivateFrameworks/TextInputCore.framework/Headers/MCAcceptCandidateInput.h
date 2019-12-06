//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@class NSArray, NSString;

@interface MCAcceptCandidateInput : MCKeyboardInput
{
    NSString *_candidateText;
    NSString *_convertedInput;
    NSArray *_remainingMecabraInputs;
    NSString *_remainingInputString;
}

@property(copy) NSString *remainingInputString; // @synthesize remainingInputString=_remainingInputString;
@property(copy) NSArray *remainingMecabraInputs; // @synthesize remainingMecabraInputs=_remainingMecabraInputs;
@property(readonly, copy, nonatomic) NSString *convertedInput; // @synthesize convertedInput=_convertedInput;
@property(readonly, copy, nonatomic) NSString *candidateText; // @synthesize candidateText=_candidateText;
// - (void).cxx_destruct;
- (BOOL)canComposeNew:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCandidateText:(id)arg1 convertedInput:(id)arg2;

@end

