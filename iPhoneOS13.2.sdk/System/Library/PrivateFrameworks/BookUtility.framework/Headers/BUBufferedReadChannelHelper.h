//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUStreamReadChannel-Protocol.h>

@class BUBufferedReadChannel;

@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel>
{
    BUBufferedReadChannel *_bufferedReadChannel;
}

@property(nonatomic) __weak BUBufferedReadChannel *bufferedReadChannel; // @synthesize bufferedReadChannel=_bufferedReadChannel;
// - (void).cxx_destruct;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBufferedReadChannel:(id)arg1;

@end

