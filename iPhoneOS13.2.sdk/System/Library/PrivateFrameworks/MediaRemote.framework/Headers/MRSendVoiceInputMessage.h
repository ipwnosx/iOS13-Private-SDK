//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioBuffer, MRAudioDataBlock;

@interface MRSendVoiceInputMessage : MRProtocolMessage
{
    MRAudioDataBlock *_dataBlock;
}

// - (void).cxx_destruct;
- (void)_initializeDataIfNecessary;
@property(readonly, nonatomic) float gain;
// @property(readonly, nonatomic) CDStruct_ace97b7a time;
@property(readonly, nonatomic) MRAudioBuffer *buffer;
- (NSUInteger)priority;
- (NSUInteger)type;
// - (id)initWithBuffer:(id)arg1 time:(CDStruct_ace97b7a)arg2 gain:(float)arg3;

@end

