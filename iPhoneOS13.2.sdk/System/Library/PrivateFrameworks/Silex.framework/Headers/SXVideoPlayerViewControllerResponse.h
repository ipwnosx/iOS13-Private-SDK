//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXVideoAnalyticsRouter, SXVideoPlayerVisibilityMonitor;

@interface SXVideoPlayerViewControllerResponse : NSObject
{
    BOOL _shouldAutoplay;
    BOOL _expectVideoPlayerViewController;
    SXVideoAnalyticsRouter *_analyticsRouter;
    SXVideoPlayerVisibilityMonitor *_visibilityMonitor;
}

@property(retain, nonatomic) SXVideoPlayerVisibilityMonitor *visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
@property(retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter; // @synthesize analyticsRouter=_analyticsRouter;
@property(nonatomic) BOOL expectVideoPlayerViewController; // @synthesize expectVideoPlayerViewController=_expectVideoPlayerViewController;
@property(nonatomic) BOOL shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
// - (void).cxx_destruct;

@end

