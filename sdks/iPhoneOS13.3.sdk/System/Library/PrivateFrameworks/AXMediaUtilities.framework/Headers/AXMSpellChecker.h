//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AppleSpell;

@interface AXMSpellChecker : NSObject
{
    AppleSpell *_spellChecker;
}

@property(retain, nonatomic) AppleSpell *spellChecker; // @synthesize spellChecker=_spellChecker;
// - (void).cxx_destruct;
- (BOOL)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2;
- (void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2;

@end
