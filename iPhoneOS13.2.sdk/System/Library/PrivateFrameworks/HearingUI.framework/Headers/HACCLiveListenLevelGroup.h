//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray;

@interface HACCLiveListenLevelGroup : UIView
{
    NSMutableArray *_levels;
}

@property(retain, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
// - (void).cxx_destruct;
- (void)updateLevel:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

