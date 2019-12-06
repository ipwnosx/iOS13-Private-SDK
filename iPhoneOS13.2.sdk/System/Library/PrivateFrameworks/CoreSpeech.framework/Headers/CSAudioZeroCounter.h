//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSAudioZeroCounter : NSObject
{
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSz;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    BOOL _shouldDeinterleaveAudio;
}

// - (void).cxx_destruct;
- (void)stopReportZeroStatistics;
- (void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned int)arg2;
- (void)resetWithSampleRate:(float)arg1;
- (id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned int)arg3;

@end

