//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UIConstraintBasedLayoutHostingView : UIView
{
    UIView *_hostedView;
    BOOL _hasAddedConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
- (CGSize)_layoutSizeThatFits:(CGSize)arg1 fixedAxes:(NSUInteger)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
// - (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(CGSize)arg1;
- (BOOL)_layoutHeightDependsOnWidth;
- (UIEdgeInsets)alignmentRectInsets;
- (void)updateConstraints;
- (void)_layoutMetricsInvalidatedForHostedView;
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg1;
- (void)constraintsDidChangeInEngine:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)_setFrameWithAlignmentRect:(CGRect)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)initWithHostedView:(id)arg1;

@end
