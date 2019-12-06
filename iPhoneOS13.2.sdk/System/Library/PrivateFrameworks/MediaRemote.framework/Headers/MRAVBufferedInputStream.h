//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableData, NSMutableDictionary, NSObject, NSRunLoop;
@protocol NSStreamDelegate, OS_dispatch_queue;

@interface MRAVBufferedInputStream : NSInputStream
{
    NSUInteger _status;
    id <NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableData *_buffer;
    NSMutableData *_preBuffer;
}

// - (void).cxx_destruct;
- (void)_onRunLoop_notifyDelegateOfStreamEvent:(NSUInteger)arg1;
- (void)handleStreamDisconnect;
- (void)_onSerialQueue_handleDataReceived:(id)arg1;
- (void)handleDataReceived:(id)arg1;
- (void)notifyDelegateOfStreamEvent:(NSUInteger)arg1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char )arg1 length:(NSUInteger )arg2;
- (long long)read:(char )arg1 maxLength:(NSUInteger)arg2;
- (id)streamError;
- (NSUInteger)streamStatus;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (id)init;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)_init;

@end

