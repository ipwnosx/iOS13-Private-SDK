//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, SiriUIPlatterSectionHeaderView;

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell
{
    SiriUIPlatterSectionHeaderView *_headerView;
}

+ (id)_font;
+ (CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2;
// - (void).cxx_destruct;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithText:(id)arg1;

@end

