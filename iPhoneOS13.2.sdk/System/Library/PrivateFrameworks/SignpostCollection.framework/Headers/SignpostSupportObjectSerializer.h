//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SignpostSerializationFilterConfiguration, SignpostSupportObjectExtractor;

@interface SignpostSupportObjectSerializer : NSObject
{
    BOOL _redactPrivacySensitiveData;
    NSUInteger _maxBatchSize;
    NSUInteger _maxBytesSize;
    id /* CDUnknownBlockType */ _serializedSignpostEventBlock;
    id /* CDUnknownBlockType */ _serializedLogMessageBlock;
    SignpostSerializationFilterConfiguration *_filterConfiguration;
    NSMutableArray *_outstandingSignpostObjects;
    NSMutableArray *_outstandingLogMessage;
    SignpostSupportObjectExtractor *_extractor;
}

@property(retain, nonatomic) SignpostSupportObjectExtractor *extractor; // @synthesize extractor=_extractor;
@property(retain, nonatomic) NSMutableArray *outstandingLogMessage; // @synthesize outstandingLogMessage=_outstandingLogMessage;
@property(retain, nonatomic) NSMutableArray *outstandingSignpostObjects; // @synthesize outstandingSignpostObjects=_outstandingSignpostObjects;
@property(retain, nonatomic) SignpostSerializationFilterConfiguration *filterConfiguration; // @synthesize filterConfiguration=_filterConfiguration;
@property(nonatomic) BOOL redactPrivacySensitiveData; // @synthesize redactPrivacySensitiveData=_redactPrivacySensitiveData;
@property(copy, nonatomic) id /* CDUnknownBlockType */ serializedLogMessageBlock; // @synthesize serializedLogMessageBlock=_serializedLogMessageBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ serializedSignpostEventBlock; // @synthesize serializedSignpostEventBlock=_serializedSignpostEventBlock;
@property(nonatomic) NSUInteger maxBytesSize; // @synthesize maxBytesSize=_maxBytesSize;
@property(nonatomic) NSUInteger maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
// - (void).cxx_destruct;
- (BOOL)serializeNotificationsWithIntervalTimeoutInSeconds:(NSUInteger)arg1 errorOut:(id )arg2;
- (BOOL)serializeLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id )arg4;
- (id)_sanityCheckParameters;
- (BOOL)_hasProcessingBlocks;
- (id)init;
- (id)_dataArrayForSignpostSupportObjectArray:(id)arg1 errorOut:(id )arg2;

@end

