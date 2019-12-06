//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSLayoutConstraint, STUsageReport, UIImageView, UILabel;

@interface STUsageSummaryTitleView : UIView
{
    BOOL _hasMultilineLayout;
    BOOL _useVibrancy;
    BOOL _truncateAverageLabel;
    NSUInteger _usageItemType;
    STUsageReport *_usageReport;
    double _previousWidth;
    UILabel *_titleLabel;
    UILabel *_usageLabel;
    UIImageView *_notificationDot;
    UIImageView *_deltaAverageImageView;
    UILabel *_deltaAverageLabel;
    NSArray *_variableConstraints;
    NSLayoutConstraint *_deltaAverageImageViewVerticalPosition;
    NSLayoutConstraint *_deltaAverageImageViewWidthConstraint;
    NSLayoutConstraint *_deltaAverageImageViewHeightConstraint;
}

@property(readonly) NSLayoutConstraint *deltaAverageImageViewHeightConstraint; // @synthesize deltaAverageImageViewHeightConstraint=_deltaAverageImageViewHeightConstraint;
@property(readonly) NSLayoutConstraint *deltaAverageImageViewWidthConstraint; // @synthesize deltaAverageImageViewWidthConstraint=_deltaAverageImageViewWidthConstraint;
@property(readonly) NSLayoutConstraint *deltaAverageImageViewVerticalPosition; // @synthesize deltaAverageImageViewVerticalPosition=_deltaAverageImageViewVerticalPosition;
@property(retain) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(readonly) UILabel *deltaAverageLabel; // @synthesize deltaAverageLabel=_deltaAverageLabel;
@property(readonly) UIImageView *deltaAverageImageView; // @synthesize deltaAverageImageView=_deltaAverageImageView;
@property(retain) UIImageView *notificationDot; // @synthesize notificationDot=_notificationDot;
@property(readonly) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property double previousWidth; // @synthesize previousWidth=_previousWidth;
@property(readonly) BOOL truncateAverageLabel; // @synthesize truncateAverageLabel=_truncateAverageLabel;
@property(readonly) BOOL useVibrancy; // @synthesize useVibrancy=_useVibrancy;
@property BOOL hasMultilineLayout; // @synthesize hasMultilineLayout=_hasMultilineLayout;
@property(retain, nonatomic) STUsageReport *usageReport; // @synthesize usageReport=_usageReport;
@property(nonatomic) NSUInteger usageItemType; // @synthesize usageItemType=_usageItemType;
// - (void).cxx_destruct;
- (BOOL)_shouldHaveMultilineLayoutForLineWidth:(double)arg1;
- (void)_setUpConstraints;
- (void)_updateDeltaAverageViews;
- (void)_updateUsageLabel;
- (void)_updateTitleLabel;
- (void)_setupSubviews;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithVibrancy:(BOOL)arg1 usageItemType:(NSUInteger)arg2 truncateAverageLabel:(BOOL)arg3;

@end

