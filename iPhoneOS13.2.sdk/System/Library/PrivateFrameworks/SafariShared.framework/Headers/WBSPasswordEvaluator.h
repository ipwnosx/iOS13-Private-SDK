//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSPasswordPatternMatcher, WBSPasswordWordListCollection;

@interface WBSPasswordEvaluator : NSObject
{
    WBSPasswordWordListCollection *_passwordWordListCollection;
    WBSPasswordWordListCollection *_passcodeWordListCollection;
    WBSPasswordPatternMatcher *_patternMatcher;
}

+ (id)standardPasswordEvaluator;
+ (BOOL)passwordLooksLikeDigitOnlyPasscode:(id)arg1;
// - (void).cxx_destruct;
- (id)evaluatePassword:(id)arg1;
- (id)_initWithPasswordWordListCollection:(id)arg1 passcodeWordListCollection:(id)arg2;

@end

