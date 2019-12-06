//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAggregatedEventObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TIInputMode, TIKeyboardInput, TITypingSession, TIUserModelDataStore;
@protocol OS_dispatch_queue, TISensorWriterWrapper;

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver>
{
    TIInputMode *_inputMode;
    NSString *_wordSeparator;
    NSMutableDictionary *_touchToEventMap;
    NSMutableArray *_events;
    NSArray *_sortedEvents;
    NSMutableArray *_touches;
    NSMutableArray *_layoutIDs;
    NSMutableArray *_taps;
    long long _wordPosition;
    TIKeyboardInput *_lastInput;
    long long _currentWordPosition;
    long long _eventOrder;
    NSMutableArray *_currentSessionSamplesArray;
    NSUInteger _aggregatedWordThreshold;
    BOOL _isLoaded;
    TIUserModelDataStore *_userModelDataStore;
    BOOL _accentedLanguage;
    NSMutableArray *_accentedLayoutsMap;
    NSString *_idenitifer;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tccNotifyToken;
    BOOL _isTCCAuthorized;
    BOOL _skipTCCAuthorization;
    NSUInteger _wordAccumulationThreshold;
    id <TISensorWriterWrapper> _dataWriter;
    NSMutableArray *_savedSessionSamplesArray;
    TITypingSession *_typingSession;
}

+ (id)makeMetricCollector:(id)arg1 separator:(id)arg2 wordsThreshold:(NSUInteger)arg3 isTesting:(BOOL)arg4;
@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) TITypingSession *typingSession; // @synthesize typingSession=_typingSession;
@property(retain, nonatomic) NSMutableArray *currentSessionSamplesArray; // @synthesize currentSessionSamplesArray=_currentSessionSamplesArray;
@property(retain, nonatomic) NSMutableArray *savedSessionSamplesArray; // @synthesize savedSessionSamplesArray=_savedSessionSamplesArray;
@property(retain, nonatomic) id <TISensorWriterWrapper> dataWriter; // @synthesize dataWriter=_dataWriter;
@property(nonatomic) NSUInteger wordAccumulationThreshold; // @synthesize wordAccumulationThreshold=_wordAccumulationThreshold;
// - (void).cxx_destruct;
- (void)_persistSavedSessionSampleArray;
- (id)_retrieveSavedSessionSampleArray;
- (void)_loadStatsFromDataStore;
- (void)handleTypingSession:(id)arg1;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (void)_reportRipeBuckets;
- (void)_mergeStats:(id)arg1;
- (double)totalTimeSpanFromLastTap;
- (double)totalTimeSpan;
- (id)eventsDescription:(BOOL)arg1;
- (id)eventsDescription;
- (void)_coalesceTaps;
- (id)_mapIDToLayout:(NSUInteger)arg1;
- (void)_mapTapsToEvents;
- (void)_metricWalk;
- (void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2;
- (void)_processEvents;
- (void)_consumeWordEntry:(id)arg1;
- (void)_consumeUserAction:(id)arg1;
- (id)_consumeTypingSession:(id)arg1;
- (void)setupSessionSamplesForLayouts;
- (id)_findSessionWithLayoutOfSameDimentions:(id)arg1 layout:(id)arg2;
- (void)_clear;
- (void)_resetConsumeState;
- (id)consumeTypingSession:(id)arg1;
- (void)_setupTCCAuthNotification;
- (void)testTCCAuthorization;
- (void)dealloc;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(NSUInteger)arg3 accentedLanguage:(BOOL)arg4 skipTCCAuthorization:(BOOL)arg5;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(NSUInteger)arg3 accentedLanguage:(BOOL)arg4;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(NSUInteger)arg3;
- (id)init:(id)arg1;
- (void)placeTaskOnWorkQueue:(CDUnknownBlockType)arg1;

@end

