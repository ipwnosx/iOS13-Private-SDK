//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _CDDataCollectionSession, _CDEventStreamsRegister;
@protocol OS_xpc_object, _DKKnowledgeQuerying;

@interface _CDDataCollection : NSObject
{
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSObject<OS_xpc_object> *_activity;
    id <_DKKnowledgeQuerying> _storage;
    id /* CDUnknownBlockType */ _submissionBlock;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDDataCollectionSession *_session;
    double _samplingRate;
    NSUInteger _daysPerBatch;
    NSUInteger _maxBatches;
    _CDEventStreamsRegister *_eventStreamsRegister;
}

@property(readonly, nonatomic) _CDEventStreamsRegister *eventStreamsRegister; // @synthesize eventStreamsRegister=_eventStreamsRegister;
@property(nonatomic) BOOL deleteSessionOnCleanup; // @synthesize deleteSessionOnCleanup=_deleteSessionOnCleanup;
@property(nonatomic) BOOL selectedForDataCollection; // @synthesize selectedForDataCollection=_selectedForDataCollection;
@property(readonly, nonatomic) NSUInteger maxBatches; // @synthesize maxBatches=_maxBatches;
@property(readonly, nonatomic) NSUInteger daysPerBatch; // @synthesize daysPerBatch=_daysPerBatch;
@property(readonly, nonatomic) double samplingRate; // @synthesize samplingRate=_samplingRate;
@property(retain, nonatomic) _CDDataCollectionSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSDate *collectionDate; // @synthesize collectionDate=_collectionDate;
@property(readonly, copy, nonatomic) NSString *sessionPath; // @synthesize sessionPath=_sessionPath;
@property(readonly, copy, nonatomic) NSString *dataDirectory; // @synthesize dataDirectory=_dataDirectory;
@property(copy, nonatomic) id /* CDUnknownBlockType */ submissionBlock; // @synthesize submissionBlock=_submissionBlock;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
// - (void).cxx_destruct;
- (BOOL)submitDataForCollection;
- (id)truncatedFileHandle;
@property(readonly, copy, nonatomic) NSString *dataPath;
- (void)cleanup;
- (void)_execute;
- (void)execute;
- (id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(NSUInteger)arg7 eventStreams:(id)arg8 maxBatches:(NSUInteger)arg9;
- (id)initWithStorage:(id)arg1 activity:(id)arg2;

@end
