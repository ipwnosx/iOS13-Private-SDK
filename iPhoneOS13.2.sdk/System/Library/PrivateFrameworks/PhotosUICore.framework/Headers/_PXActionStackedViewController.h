//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@interface _PXActionStackedViewController : UIViewController
{
    double _separatorHeight;
    NSArray *_separatorViews;
    NSArray *_viewControllers;
}

@property(readonly, copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
// - (void).cxx_destruct;
- (CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithViewControllers:(id)arg1;

@end

