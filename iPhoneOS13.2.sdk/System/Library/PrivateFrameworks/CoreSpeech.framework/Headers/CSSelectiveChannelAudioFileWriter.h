//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioFileWriter-Protocol.h>

@class NSArray, NSURL;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter>
{
    BOOL isWriting;
//     struct OpaqueExtAudioFile fFile;
//     struct AudioStreamBasicDescription inASBD;
//     struct AudioStreamBasicDescription outASBD;
    NSArray *selectedChannelList;
    unsigned int _numberOfChannels;
    NSURL *_fileURL;
}

@property(readonly, nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
// - (void).cxx_destruct;
- (BOOL)addSamples:(const void *)arg1 numSamples:(long long)arg2;
- (BOOL)endAudio;
- (void)dealloc;
// - (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3 channelBitset:(NSUInteger)arg4;

@end

