//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CNAutocompletePerformanceProbe, CNAutocompleteSuggestionsProbe, CNAutocompleteUsageMonitorProbe;

@protocol CNAutocompleteProbeProvider <NSObject>
- (id <CNAutocompleteSuggestionsProbe>)suggestionsProbe;
- (id <CNAutocompletePerformanceProbe>)performanceProbe;
- (id <CNAutocompleteUsageMonitorProbe>)usageMonitorProbe;
@end

