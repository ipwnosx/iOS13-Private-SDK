//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/FUFlightViewControllerDelegate-Protocol.h>
#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class FUFlightViewController;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate>
{
    FUFlightViewController *_flightViewController;
    NSUInteger _lastSelectedLegIndex;
}

@property(nonatomic) NSUInteger lastSelectedLegIndex; // @synthesize lastSelectedLegIndex=_lastSelectedLegIndex;
@property(retain, nonatomic) FUFlightViewController *flightViewController; // @synthesize flightViewController=_flightViewController;
// - (void).cxx_destruct;
- (void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end

