//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSSet, NSURL;
@protocol BMMiningTaskDelegate;

@interface BMMiningTask : NSObject
{
    id <BMMiningTaskDelegate> _delegate;
    long long _completionStatus;
    NSMutableDictionary *_coreAnalyticsDict;
    NSUInteger _rulePersistBatchSize;
    NSDate *_start;
    NSURL *_storageURL;
    NSSet *_types;
    NSSet *_targetTypes;
    double _samplingInterval;
    NSUInteger _absoluteSupport;
    double _confidence;
}

+ (id)supergreenMiningTask;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSUInteger absoluteSupport; // @synthesize absoluteSupport=_absoluteSupport;
@property(readonly, nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(readonly, copy, nonatomic) NSSet *targetTypes; // @synthesize targetTypes=_targetTypes;
@property(readonly, copy, nonatomic) NSSet *types; // @synthesize types=_types;
@property(readonly, copy, nonatomic) NSURL *storageURL; // @synthesize storageURL=_storageURL;
@property(copy, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSUInteger rulePersistBatchSize; // @synthesize rulePersistBatchSize=_rulePersistBatchSize;
@property(retain, nonatomic) NSMutableDictionary *coreAnalyticsDict; // @synthesize coreAnalyticsDict=_coreAnalyticsDict;
@property(nonatomic) long long completionStatus; // @synthesize completionStatus=_completionStatus;
@property(nonatomic) __weak id <BMMiningTaskDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)terminateEarly;
- (void)mine;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (void)finishWithCompletionStatus:(long long)arg1;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(NSUInteger)arg5 confidence:(double)arg6 rulePersistBatchSize:(NSUInteger)arg7;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(NSUInteger)arg5 confidence:(double)arg6;

@end

