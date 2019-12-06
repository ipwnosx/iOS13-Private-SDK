//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PSUIBadgeView : UIView
{
    UILabel *_badgeLabel;
    double _fontSize;
    double _cornerRadius;
    double _minPadding;
    double _baseline;
}

@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(nonatomic) double minPadding; // @synthesize minPadding=_minPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *text;
- (id)init;

@end

