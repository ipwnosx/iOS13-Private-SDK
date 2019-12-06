//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject
{
//     struct OpaqueAudioConverter _opusConverter;
    NSMutableData *_bufferedLPCM;
    unsigned int _recordBasePacketsPerSecond;
//     struct AudioStreamBasicDescription _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    NSUInteger _lastTimestamp;
    float _outPacketSizeInSec;
    id <CSAudioConverterDelegate> _delegate;
}

+ (id)narrowBandOpusConverter;
+ (id)opusConverter;
@property __weak id <CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
// - (void)_configureAudioConverter:(struct OpaqueAudioConverter )arg1;
- (void)reset;
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(BOOL)arg2 timestamp:(NSUInteger)arg3;
- (void)flush;
- (void)addSamples:(id)arg1 timestamp:(NSUInteger)arg2;
- (void)dealloc;
// - (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end

