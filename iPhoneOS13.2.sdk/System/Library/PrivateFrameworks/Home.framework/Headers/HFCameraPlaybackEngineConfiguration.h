//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCameraPlaybackPosition, HMCameraProfile, HMHome;
@protocol HFCameraClipScrubbing, HFCameraLiveStreamControlling;

@interface HFCameraPlaybackEngineConfiguration : NSObject
{
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    HFCameraPlaybackPosition *_playbackPosition;
    id <HFCameraClipScrubbing> _clipScrubber;
    id /* CDUnknownBlockType */ _clipPlayerBuilder;
    id <HFCameraLiveStreamControlling> _liveStreamController;
}

@property(retain, nonatomic) id <HFCameraLiveStreamControlling> liveStreamController; // @synthesize liveStreamController=_liveStreamController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ clipPlayerBuilder; // @synthesize clipPlayerBuilder=_clipPlayerBuilder;
@property(nonatomic) __weak id <HFCameraClipScrubbing> clipScrubber; // @synthesize clipScrubber=_clipScrubber;
@property(retain, nonatomic) HFCameraPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)assertConfigurationIsValid;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;

@end

