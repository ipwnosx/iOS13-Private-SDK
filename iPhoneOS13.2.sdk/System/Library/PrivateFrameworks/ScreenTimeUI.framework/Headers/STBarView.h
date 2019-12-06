//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, STUsageReportGraphDataPoint, UIColor;

__attribute__((visibility("hidden")))
@interface STBarView : UIView
{
    BOOL _useVibrancy;
    STUsageReportGraphDataPoint *_dataPoint;
    UIColor *_color;
    NSArray *_sectionViews;
    NSArray *_sectionHeightConstraints;
    UIView *_darkenedView;
}

@property(readonly) UIView *darkenedView; // @synthesize darkenedView=_darkenedView;
@property(copy, nonatomic) NSArray *sectionHeightConstraints; // @synthesize sectionHeightConstraints=_sectionHeightConstraints;
@property(copy, nonatomic) NSArray *sectionViews; // @synthesize sectionViews=_sectionViews;
@property(readonly) BOOL useVibrancy; // @synthesize useVibrancy=_useVibrancy;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) STUsageReportGraphDataPoint *dataPoint; // @synthesize dataPoint=_dataPoint;
// - (void).cxx_destruct;
- (void)setUpSectionHeightConstraints;
- (void)setUpSections;
@property(getter=isDarkened) BOOL darkened;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithDataPoint:(id)arg1 useVibrancy:(BOOL)arg2;

@end

