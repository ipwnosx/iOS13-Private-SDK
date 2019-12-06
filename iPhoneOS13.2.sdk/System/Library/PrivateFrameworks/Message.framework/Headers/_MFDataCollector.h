//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, MFFileCompressionQueue, MFLibraryMessage, MFMailMessageLibrary, NSString;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer>
{
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    MFFileCompressionQueue *_compressionQueue;
    NSString *_part;
    BOOL _partial;
    BOOL _incomplete;
    BOOL _relaxDataProtection;
}

// - (void).cxx_destruct;
- (id)data;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)pathForStorage;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5 relaxDataProtection:(BOOL)arg6 compressionQueue:(id)arg7;

@end

