//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QuickTypePFLTrainingData : NSObject
{
    NSMutableArray *_sentences;
    NSUInteger _iterator;
    BOOL _processingNewRecord;
    NSUInteger _maxSequenceLength;
}

+ (NSUInteger)defaultMaxSequenceLength;
+ (id)trainingDataFor:(long long)arg1 andLocale:(id)arg2;
+ (void)initialize;
@property(nonatomic) BOOL processingNewRecord; // @synthesize processingNewRecord=_processingNewRecord;
@property(nonatomic) NSUInteger iterator; // @synthesize iterator=_iterator;
@property(retain, nonatomic) NSMutableArray *sentences; // @synthesize sentences=_sentences;
@property(nonatomic) NSUInteger maxSequenceLength; // @synthesize maxSequenceLength=_maxSequenceLength;
// - (void).cxx_destruct;
- (void)addResource:(id)arg1;
- (BOOL)loadFromCoreDuet:(id)arg1 withLocale:(id)arg2 andTokenizationBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSUInteger numTrainingSamples;
- (void)rewind;
- (id)getEvaluationDataPoint;
- (id)getTrainingDataBatch:(NSUInteger)arg1;
- (BOOL)loadFromCoreDuet:(id)arg1;
- (id)init;

@end

