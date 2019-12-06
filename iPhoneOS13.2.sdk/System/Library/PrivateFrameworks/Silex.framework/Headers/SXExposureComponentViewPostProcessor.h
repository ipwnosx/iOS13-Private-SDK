//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewPostProcessor-Protocol.h>

@class NSMapTable;
@protocol SXAnalyticsReportingProvider, SXComponentExposureMonitor;

@interface SXExposureComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>
{
    id <SXComponentExposureMonitor> _monitor;
    id <SXAnalyticsReportingProvider> _analyticsReporterProvider;
    NSMapTable *_exposedEvents;
}

@property(readonly, nonatomic) NSMapTable *exposedEvents; // @synthesize exposedEvents=_exposedEvents;
@property(readonly, nonatomic) id <SXAnalyticsReportingProvider> analyticsReporterProvider; // @synthesize analyticsReporterProvider=_analyticsReporterProvider;
@property(readonly, nonatomic) id <SXComponentExposureMonitor> monitor; // @synthesize monitor=_monitor;
// - (void).cxx_destruct;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)initWithExposureMonitor:(id)arg1 analyticsReportingProvider:(id)arg2;

@end

