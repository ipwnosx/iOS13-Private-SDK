//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProofReader/PRErrorModel.h>

@interface CHSpellCheckerErrorModel : PRErrorModel
{
}

- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;

@end

