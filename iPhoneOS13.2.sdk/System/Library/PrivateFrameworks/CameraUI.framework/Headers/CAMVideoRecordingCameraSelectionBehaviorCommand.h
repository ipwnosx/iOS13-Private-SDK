//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordingCameraSelectionBehaviorCommand : CAMCaptureCommand
{
    BOOL __cameraSwitchingEnabled;
}

@property(readonly, nonatomic, getter=_isCameraSwitchingEnabled) BOOL _cameraSwitchingEnabled; // @synthesize _cameraSwitchingEnabled=__cameraSwitchingEnabled;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCameraSwitchingEnabled:(BOOL)arg1;

@end

