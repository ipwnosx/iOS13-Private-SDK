//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSSocketPairMessage-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessage>
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    NSUInteger _totalBytesExpected;
    NSUInteger _totalBytesReceived;
    BOOL _done;
    BOOL _isResuming;
    BOOL _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) NSUInteger totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
// - (void).cxx_destruct;
- (id)finalizedMessageDictionaryIfDone;
- (BOOL)appendMessage:(id)arg1 receiverError:(unsigned char )arg2;
- (BOOL)writeResourceData:(id)arg1 resourceByteOffset:(NSUInteger)arg2;
- (BOOL)writeResourceData:(id)arg1;
- (void)dealloc;
- (void)abortTransfer;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(BOOL)arg2 receiverError:(unsigned char )arg3;

@end

