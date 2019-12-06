//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMTimelapseSettings : NSObject
{
    double _initialCaptureTimeInterval;
    double _maxOutputFPS;
    double _maxOutputLength;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) double maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
@property(readonly, nonatomic) double maxOutputFPS; // @synthesize maxOutputFPS=_maxOutputFPS;
@property(readonly, nonatomic) double initialCaptureTimeInterval; // @synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval;
@property(readonly, nonatomic) long long maxFailedStateReadAttempts;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1;
@property(readonly, nonatomic) long long maxMovieWriteAttempts;
//  (id)outputSettingsForWidth:(long long)arg1 height:(long long)arg2 videoFormatDescription:(struct opaqueCMFormatDescription )arg3 framesPerSecond:(long long)arg4 frameCount:(long long)arg5 useHEVC:(BOOL)arg6;
- (id)_outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3;
- (long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3;
- (long long)_averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3;
- (double)outputFPSForFrameCount:(long long)arg1;
@property(readonly, nonatomic) long long maxOutputFrames;
- (id)init;

@end

