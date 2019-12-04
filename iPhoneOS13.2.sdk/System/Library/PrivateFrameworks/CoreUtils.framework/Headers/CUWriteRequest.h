//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface CUWriteRequest : NSObject
{
    NSError *_error;
    struct iovec _iov[16];
    struct iovec *_iop;
    int _ion;
    unsigned long long _offset;
    unsigned char _messageUUID[16];
    _Bool _endOfData;
    _Bool _hasMessageUUID;
    struct iovec *_bytesIOArray;
    unsigned long long _bytesIOCount;
    unsigned long long _bytesIOMaxCount;
    id /* block */ _completion;
    NSArray *_dataArray;
}

@property(nonatomic) _Bool hasMessageUUID; // @synthesize hasMessageUUID=_hasMessageUUID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool endOfData; // @synthesize endOfData=_endOfData;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long bytesIOMaxCount; // @synthesize bytesIOMaxCount=_bytesIOMaxCount;
@property(nonatomic) unsigned long long bytesIOCount; // @synthesize bytesIOCount=_bytesIOCount;
@property(readonly, nonatomic) struct iovec *bytesIOArray; // @synthesize bytesIOArray=_bytesIOArray;
@property(readonly, nonatomic) char *messageUUID;
- (id)init;

@end
