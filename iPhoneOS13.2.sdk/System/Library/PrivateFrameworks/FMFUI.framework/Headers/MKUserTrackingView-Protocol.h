//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MKUserTrackingView <NSObject>
- (BOOL)isCurrentlyRotated;
- (BOOL)canRotateForHeading;
- (BOOL)hasUserLocation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (long long)userTrackingMode;

@optional
- (BOOL)postsMapViewInitialRenderingNotification;
- (BOOL)hasRenderedSomething;
@end

