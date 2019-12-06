//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSInputStream, NSMutableArray, NSOutputStream;
@protocol OS_dispatch_queue;

@interface MSVStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_pendingWriteDataList;
    BOOL _stopped;
    BOOL _closeOnStop;
//    struct z_stream_s _zstreamp;
    BOOL _compressed;
    NSUInteger _maximumBufferSize;
    double _timestamp;
    NSUInteger _bytesWritten;
    id /* CDUnknownBlockType */ _canWriteDataBlock;
    id /* CDUnknownBlockType */ _didFinishWritingBlock;
    id /* CDUnknownBlockType */ _didEncounterErrorBlock;
    NSOutputStream *_outputStream;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didFinishWritingBlock; // @synthesize didFinishWritingBlock=_didFinishWritingBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ canWriteDataBlock; // @synthesize canWriteDataBlock=_canWriteDataBlock;
@property(nonatomic) NSUInteger bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property(nonatomic) NSUInteger maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
// - (void).cxx_destruct;
- (void)_onQueue_stop;
- (void)_writeAvailablePendingData;
- (id)_decompressData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
// - (void)writeStreamError:(CDStruct_87dc826d)arg1;
- (BOOL)writeAllData:(id)arg1 error:(id )arg2;
- (void)writeData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

