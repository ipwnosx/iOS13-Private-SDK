//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UIRecentsAccessoryDefaultView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subheadLabel;
}

@property(retain, nonatomic) UILabel *subheadLabel; // @synthesize subheadLabel=_subheadLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)_updateLabelTextColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (CGSize)intrinsicContentSize;
- (id)init;

@end

