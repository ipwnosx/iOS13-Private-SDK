//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUILabelComponentView.h>

@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView
{
    UILabel *_mainLabel;
    UILabel *_detailLabel;
}

+ (id)viewForComponent:(id)arg1;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
// - (void).cxx_destruct;
- (void)addSubviewsForComponentModel:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;

@end

