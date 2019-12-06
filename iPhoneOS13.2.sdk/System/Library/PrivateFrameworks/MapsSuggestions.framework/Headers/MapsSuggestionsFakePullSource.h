//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class NSSet;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
//    struct ReadWriteQueue _readwrite;
    NSArray *_entriesToPull;
    NSSet *_fakeCanProduceEntriesOfType;
    NSUInteger _calledStart;
    NSUInteger _calledUpdateSuggestionEntries;
    NSUInteger _calledStop;
    NSUInteger _calledUserRemove;
    NSUInteger _calledFeedbackForEntry;
    NSUInteger _calledfeedbackForMapItem;
    NSUInteger _calledfeedbackForContact;
    id /* CDUnknownBlockType */ _handlerForFeedback;
    long long _calledUserRemoveBehavior;
    NSUInteger _totalAdded;
    double _configFrequency;
    BOOL _configSendCopies;
}

+ (NSUInteger)disposition;
+ (BOOL)isEnabled;
@property BOOL configSendCopies; // @synthesize configSendCopies=_configSendCopies;
@property double configFrequency; // @synthesize configFrequency=_configFrequency;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)startDebugTest;
- (void)setPullResponseEntries:(NSArray *)arg1;
- (void)pushEntries:(NSArray *)arg1;
- (NSUInteger)_addEntries:(NSArray *)arg1;
- (NSArray *)_copyEntriesIfNecessary:(NSArray *)arg1;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)configCanProduceEntriesOfType:(id)arg1;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)configureHandlerForFeedbackBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSUInteger totalAdded;
@property(readonly) long long calledUserRemoveBehavior;
@property(readonly) NSUInteger calledfeedbackForContact;
@property(readonly) NSUInteger calledfeedbackForMapItem;
@property(readonly) NSUInteger calledFeedbackForEntry;
@property(readonly) NSUInteger calledUserRemove;
@property(readonly) NSUInteger calledUpdateSuggestionEntries;
@property(readonly) NSUInteger calledStop;
@property(readonly) NSUInteger calledStart;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;

@end

