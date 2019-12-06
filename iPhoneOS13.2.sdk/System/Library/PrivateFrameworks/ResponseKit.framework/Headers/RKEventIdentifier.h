//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject
{
    RKMontrealModel *_model;
    RKNLEventTokenizer *_tokenizer;
//     const struct IOMappings _ioMappings;
    int _outputPermutation[5];
}

// - (void).cxx_destruct;
- (id)identifyMessage:(id)arg1;
- (id)identifyText:(id)arg1;
- (id)identifyStrings:(id)arg1;
// - (id)_identifyStrings:(id)arg1 otherDateCount:(NSUInteger)arg2 otherDates:(struct RKEventIdentifierRange )arg3;
- (id)_identifyOwnedTokenSequences:(id)arg1;
- (void)resetEventIdentifierModel;
- (id)initWithLanguageID:(id)arg1;
- (id)init;

@end

