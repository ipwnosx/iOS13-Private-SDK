//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIButton.h>

@class TUIPredictionViewCell;

@interface TUIPredictionCellButton : UIButton
{
    TUIPredictionViewCell *_cellView;
}

@property(readonly, nonatomic) TUIPredictionViewCell *cellView; // @synthesize cellView=_cellView;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

