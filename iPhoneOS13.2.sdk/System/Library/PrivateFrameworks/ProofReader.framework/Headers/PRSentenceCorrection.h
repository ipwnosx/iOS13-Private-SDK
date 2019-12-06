//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PRSentenceCorrection : NSObject
{
    int _category;
    NSRange * _range;
    NSString *_word;
    NSArray *_corrections;
}

- (BOOL)presentAsGrammarError;
- (BOOL)presentAsAutocorrection;
- (BOOL)presentAsSpellingError;
- (id)corrections;
- (id)word;
- (NSRange *)range;
- (int)category;
- (id)description;
- (void)dealloc;
- (id)initWithCategory:(int)arg1 range:(NSRange *)arg2 word:(id)arg3 corrections:(id)arg4;

@end

