//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSRemoteVADCircularBuffer : NSObject
{
//     struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> _remoteVADCircularBufferImpl;
    int _audioSamplesPerRemoteVAD;
    NSUInteger _capacity;
    NSUInteger _size;
    NSUInteger _beginSampleCount;
}

@property(readonly, nonatomic) NSUInteger beginSampleCount; // @synthesize beginSampleCount=_beginSampleCount;
@property(readonly, nonatomic) NSUInteger size; // @synthesize size=_size;
@property(readonly, nonatomic) NSUInteger capacity; // @synthesize capacity=_capacity;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)copySamplesFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (id)copySamplesFromAudioSampleCount:(NSUInteger)arg1 toAudioSampleCount:(NSUInteger)arg2;
- (NSUInteger)remoteVADSampleCount;
- (void)addSamples:(const void *)arg1 numSamples:(NSUInteger)arg2;
- (void)reset;
- (id)initWithRecordingDuration:(float)arg1 audioSamplesPerRemoteVAD:(int)arg2 audioSampleRate:(float)arg3;

@end

