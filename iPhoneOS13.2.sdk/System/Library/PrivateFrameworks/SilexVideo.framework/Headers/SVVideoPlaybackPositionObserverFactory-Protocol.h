//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SVVideo, SVVideoPlaybackPositionObserving;

@protocol SVVideoPlaybackPositionObserverFactory <NSObject>
- (id <SVVideoPlaybackPositionObserving>)createPlaybackPositionObserverForVideo:(id <SVVideo>)arg1;
@end

