//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, NSURL;
@protocol FMDAsset;

@protocol FMDAudioAccessory <NSObject>
@property(readonly, nonatomic) BOOL playingSound;
@property(readonly, nonatomic) NSURL *audioURL;
@property(readonly, nonatomic) NSString *audioRoutingIdentifier;
@property(readonly, nonatomic) NSUInteger inEar;
- (BOOL)updatePlaybackChannels:(NSArray *)arg1;
- (BOOL)updateAudioAsset:(id <FMDAsset>)arg1;

@optional
- (BOOL)shouldStopSoundNow;
@end

