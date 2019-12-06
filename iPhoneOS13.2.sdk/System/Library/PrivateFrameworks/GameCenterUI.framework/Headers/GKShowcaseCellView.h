//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView
{
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    GKHairlineView *_underlineView;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKHairlineView *underlineView; // @synthesize underlineView=_underlineView;
@property(nonatomic) SEL touchedShowcaseCellAction; // @synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction;
@property(retain, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
- (CGRect)alignmentRectForText;
- (void)prepareForReuse;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

