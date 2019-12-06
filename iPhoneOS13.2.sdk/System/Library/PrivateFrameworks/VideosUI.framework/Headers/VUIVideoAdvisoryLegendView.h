//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, VUILabel, VUIVideoAdvisoryViewLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLegendView : UIView
{
    VUIVideoAdvisoryViewLayout *_layout;
    VUILabel *_legendNameLabel;
    VUILabel *_legendDescriptionLabel;
}

@property(retain, nonatomic) VUILabel *legendDescriptionLabel; // @synthesize legendDescriptionLabel=_legendDescriptionLabel;
@property(retain, nonatomic) VUILabel *legendNameLabel; // @synthesize legendNameLabel=_legendNameLabel;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSString *legendDescription;
@property(copy, nonatomic) NSString *legendName;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithLayout:(id)arg1;

@end

