//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NLPLearner/QuickTypePFLTrainingData.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface QuickTypePFLLanguageModelingData : QuickTypePFLTrainingData
{
    NSLocale *_locale;
//     struct CFScopedPtr<const _LXLexicon *> _lexicon;
    NSString *_tokenIDMapPath;
}

+ (NSUInteger)defaultMaxSequenceLength;
+ (void)initialize;
@property(copy, nonatomic) NSString *tokenIDMapPath; // @synthesize tokenIDMapPath=_tokenIDMapPath;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)addResource:(id)arg1;
- (id)getEvaluationDataPoint;
- (id)getTrainingDataBatch:(NSUInteger)arg1;
- (BOOL)loadFromCoreDuet:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (BOOL)addExamples:(id)arg1;

@end

