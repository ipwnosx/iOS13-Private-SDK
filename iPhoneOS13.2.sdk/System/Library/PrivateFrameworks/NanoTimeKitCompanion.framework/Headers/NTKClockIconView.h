//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NTKClockIconView : UIView
{
    BOOL _paused;
    double _fullDiameter;
}

@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) double fullDiameter; // @synthesize fullDiameter=_fullDiameter;
- (void)restoreBorrowedViews;
- (id)borrowTimeView;
- (id)borrowCircleView;

@end

