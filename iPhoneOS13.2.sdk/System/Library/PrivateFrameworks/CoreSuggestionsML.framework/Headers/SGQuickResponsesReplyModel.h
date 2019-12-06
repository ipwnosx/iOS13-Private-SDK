//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject
{
    NSUInteger _semanticClassIndex;
    NSArray *_semanticClasses;
    NSArray *_selectedPseudocounts;
    double _scoreWeight;
    NSUInteger _category;
}

+ (id)semanticClassesForArray:(id)arg1;
@property(readonly, nonatomic) NSUInteger category; // @synthesize category=_category;
@property(readonly, nonatomic) double scoreWeight; // @synthesize scoreWeight=_scoreWeight;
@property(readonly, nonatomic) NSArray *selectedPseudocounts; // @synthesize selectedPseudocounts=_selectedPseudocounts;
@property(readonly, nonatomic) NSArray *semanticClasses; // @synthesize semanticClasses=_semanticClasses;
@property(readonly, nonatomic) NSUInteger semanticClassIndex; // @synthesize semanticClassIndex=_semanticClassIndex;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 index:(NSUInteger)arg2;

@end

