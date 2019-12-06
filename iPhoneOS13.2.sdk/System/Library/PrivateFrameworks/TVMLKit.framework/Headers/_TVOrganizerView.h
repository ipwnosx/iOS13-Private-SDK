//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray, NSDictionary, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    UIView *_lastFocusedView;
    UIView *_rightColumnDivider;
    UIView *_leftColumnDivider;
    double _showcaseFactor;
    BOOL _columnDividersEnabled;
    BOOL _remembersLastFocusedItem;
    UIView *_backgroundImageView;
    double _columnDividerPadding;
    UIColor *_columnDividerColor;
    NSArray *_components;
    NSDictionary *_divsByPosition;
    NSDictionary *_divSizesByPosition;
}

@property(copy, nonatomic) NSDictionary *divSizesByPosition; // @synthesize divSizesByPosition=_divSizesByPosition;
@property(copy, nonatomic) NSDictionary *divsByPosition; // @synthesize divsByPosition=_divsByPosition;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) BOOL remembersLastFocusedItem; // @synthesize remembersLastFocusedItem=_remembersLastFocusedItem;
@property(retain, nonatomic) UIColor *columnDividerColor; // @synthesize columnDividerColor=_columnDividerColor;
@property(nonatomic) BOOL columnDividersEnabled; // @synthesize columnDividersEnabled=_columnDividersEnabled;
@property(nonatomic) double columnDividerPadding; // @synthesize columnDividerPadding=_columnDividerPadding;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
// - (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (long long)_positionFromView:(id)arg1;
- (CGSize)_contentSizeThatFits:(CGSize)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (BOOL)canBecomeFocused;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
@property(nonatomic) double cornerRadius;
- (void)setComponentsNeedUpdate;
@property(nonatomic) __weak UIView *preferredFocusedComponent;
- (id)initWithFrame:(CGRect)arg1;

@end

