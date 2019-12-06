//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, PXPlacesMapViewPort;

@interface PXPlacesMapPipelineExecutionContext : NSObject
{
    NSDate *_start;
    NSMutableSet *_dataSources;
    NSMutableDictionary *_timerStartDataSource;
    NSMutableDictionary *_timerStopDataSource;
    NSMutableDictionary *_timerStartPipeline;
    NSMutableDictionary *_timerStopPipeline;
    NSDate *_timerStartPlanResultsExecution;
    NSDate *_timerStopPlanResultsExecution;
    id /* CDUnknownBlockType */ _completionHandler;
    BOOL _stopped;
    NSArray *_callstack;
    double _duration;
    NSMapTable *_changesForDataSources;
    NSArray *_updatePlanResults;
    PXPlacesMapViewPort *_viewPort;
}

@property(retain) PXPlacesMapViewPort *viewPort; // @synthesize viewPort=_viewPort;
@property(retain) NSArray *updatePlanResults; // @synthesize updatePlanResults=_updatePlanResults;
@property(readonly) NSMapTable *changesForDataSources; // @synthesize changesForDataSources=_changesForDataSources;
@property(readonly) double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (double)durationForExecutionOfPlanResults;
- (void)stopTimerForExecutionOfPlanResults;
- (void)startTimerForExecutionOfPlanResults;
- (id)durationForPipelines;
- (void)stopTimerForPipeline:(id)arg1;
- (void)startTimerForPipeline:(id)arg1;
- (id)durationForDataSources;
- (void)stopTimerForDataSource:(id)arg1;
- (void)startTimerForDataSource:(id)arg1;
- (void)addDataSources:(id)arg1 changesForDataSources:(id)arg2;
- (void)stop;
- (void)start;
@property(readonly) NSArray *dataSources;
- (id)initWithViewPort:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

