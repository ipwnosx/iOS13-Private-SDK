//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GEORouteMatch, NSObject;
@protocol OS_os_log;

@protocol GEORoutePreloaderSubclass
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)stopLoading;
- (void)beginLoading;
@end

