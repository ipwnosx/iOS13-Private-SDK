//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSConfig : NSObject
{
}

+ (NSUInteger)serverLoggingChannelBitset;
+ (float)remoteVADDuration;
+ (float)daysBeforeRemovingLogFiles;
+ (int)csAudioProcessingQueuePriority;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (NSUInteger)zeroFilterWindowSizeInMs;
+ (NSUInteger)channelForProcessedInput;
+ (NSUInteger)channelForOutputReference;
+ (unsigned int)audioConverterBitrate;
+ (double)inputRecordingBufferDuration;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRateNarrowBand;
+ (float)inputRecordingSampleRate;

@end

