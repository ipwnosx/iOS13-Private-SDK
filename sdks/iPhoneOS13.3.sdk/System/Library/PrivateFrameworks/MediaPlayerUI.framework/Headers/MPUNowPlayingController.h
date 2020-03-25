//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUNowPlayingMetadata, NSDictionary, NSString, UIImage;
@protocol MPUNowPlayingDelegate, OS_dispatch_source;

@interface MPUNowPlayingController : NSObject
{
    NSObject<OS_dispatch_source> *_timeInformationTimer;
    NSDictionary *_currentNowPlayingInfo;
    double _currentElapsed;
    double _currentDuration;
    long long _isPlaying;
    NSString *_currentNowPlayingAppDisplayID;
    NSString *_currentNowPlayingAppParentApp;
    BOOL _hasValidCurrentNowPlayingAppDisplayID;
    BOOL _isRegisteredForNowPlayingNotifications;
    BOOL _isUpdatingNowPlayingInfo;
    BOOL _isUpdatingPlaybackState;
    BOOL _isUpdatingNowPlayingApp;
    BOOL _wantsTimeInformationUpdates;
    UIImage *_cachedNowPlayingArtwork;
    BOOL _cachedArtworkDirty;
    BOOL _currentNowPlayingAppIsRunning;
    BOOL _shouldUpdateNowPlayingArtwork;
    id <MPUNowPlayingDelegate> _delegate;
    NSString *_currentNowPlayingArtworkDigest;
    double _timeInformationUpdateInterval;
}

@property(nonatomic) BOOL shouldUpdateNowPlayingArtwork; // @synthesize shouldUpdateNowPlayingArtwork=_shouldUpdateNowPlayingArtwork;
@property(nonatomic) double timeInformationUpdateInterval; // @synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval;
@property(readonly, nonatomic) double currentElapsed; // @synthesize currentElapsed=_currentElapsed;
@property(readonly, nonatomic) BOOL currentNowPlayingAppIsRunning; // @synthesize currentNowPlayingAppIsRunning=_currentNowPlayingAppIsRunning;
@property(readonly, nonatomic) NSString *currentNowPlayingArtworkDigest; // @synthesize currentNowPlayingArtworkDigest=_currentNowPlayingArtworkDigest;
@property(nonatomic) __weak id <MPUNowPlayingDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_isUpdatingTimeInformation;
- (void)_updateTimeInformationAndCallDelegate:(BOOL)arg1;
- (void)_updateNowPlayingAppDisplayID;
- (void)_updatePlaybackState;
- (void)_updateCurrentNowPlaying;
- (void)_stopUpdatingTimeInformation;
- (void)_unregisterForNotifications;
- (void)_startUpdatingTimeInformation;
- (void)_registerForNotifications;
- (void)update;
- (void)stopUpdating;
- (void)startUpdating;
@property(readonly, nonatomic) double currentDuration;
@property(readonly, nonatomic) BOOL nowPlayingAppIsSystemMediaApp;
@property(readonly, nonatomic) NSString *nowPlayingAppParentAppDisplayID;
@property(readonly, nonatomic) NSString *nowPlayingAppDisplayID;
@property(readonly, nonatomic) BOOL isPlaying;
@property(readonly, nonatomic) UIImage *currentNowPlayingArtwork;
@property(readonly, nonatomic) MPUNowPlayingMetadata *currentNowPlayingMetadata;
@property(readonly, nonatomic) NSDictionary *currentNowPlayingInfo;
- (void)dealloc;
- (id)init;

@end
