//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

#import <MIME/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class MFLock;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer>
{
    id <MFGuaranteedCollectingDataConsumer> _mainConsumer;
    MFLock *_consumerLock;
    BOOL _isDone;
}

// - (void).cxx_destruct;
- (void)done;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)addDataConsumer:(id)arg1;
- (id)initWithMainConsumer:(id)arg1;

@end

