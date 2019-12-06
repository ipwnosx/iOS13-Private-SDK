//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/_SYStreamPropertyProxying-Protocol.h>

@class NSMutableArray, SYCompressedFileInputStream;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _SYInputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying>
{
    SYCompressedFileInputStream *_stream;
    NSMutableArray *_items;
    id /* CDUnknownBlockType */ _onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

// - (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (id)streamPropertyForKey:(id)arg1;
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;
- (void)close;
- (void)whenComplete:(CDUnknownBlockType)arg1;
- (void)_completeAllItemsWithError:(id)arg1;
- (void)_tryToReadData;
- (void)readDataOfLength:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;

@end

