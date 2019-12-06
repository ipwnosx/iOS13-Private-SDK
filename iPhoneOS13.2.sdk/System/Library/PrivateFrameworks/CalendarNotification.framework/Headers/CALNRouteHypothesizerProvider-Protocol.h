//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOPlannedDestination, NSString;
@protocol CALNRouteHypothesizer;

@protocol CALNRouteHypothesizerProvider <NSObject>
- (void)removedRouteHypothesizerForEventExternalURL:(NSString *)arg1;
- (void)createdRouteHypothesizer:(id <CALNRouteHypothesizer>)arg1 forEventExternalURL:(NSString *)arg2;
- (void)didDismissUINotification:(NSUInteger)arg1 forPlannedDestination:(GEOPlannedDestination *)arg2 dismissalType:(NSUInteger)arg3;
- (id <CALNRouteHypothesizer>)hypothesizerForPlannedDestination:(GEOPlannedDestination *)arg1;
@end

