//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CSAudioFileLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
//     struct OpaqueExtAudioFile _audioFile;
//     struct AudioStreamBasicDescription _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)stopRecording;
- (void)appendAudioData:(id)arg1;
- (void)startRecording;
- (void)_closeAudioFile;
- (void)dealloc;
- (id)init;

@end

