//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UILabel;

@interface PKCenteredTextCollectionViewCell : PKDashboardCollectionViewCell
{
    UILabel *_titleLabel;
}

// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)resetFonts;
- (id)initWithFrame:(CGRect)arg1;

@end

