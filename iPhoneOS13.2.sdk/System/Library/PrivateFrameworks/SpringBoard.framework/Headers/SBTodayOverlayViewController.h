//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/WGWidgetGroupViewControllerDelegate-Protocol.h>

@class MTMaterialView, NSLayoutConstraint, SBHRootSidebarController;
@protocol SBTodayOverlayViewControllerDelegate;

@interface SBTodayOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate>
{
    id <SBTodayOverlayViewControllerDelegate> _delegate;
    double _presentationProgress;
    SBHRootSidebarController *_contentViewController;
    MTMaterialView *_backgroundView;
    NSLayoutConstraint *_contentLeadingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // @synthesize contentLeadingConstraint=_contentLeadingConstraint;
@property(readonly, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SBHRootSidebarController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(nonatomic) __weak id <SBTodayOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGSize)_suggestedTodayViewSizeForBounds:(CGRect)arg1;
- (CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg1;
@property(readonly, nonatomic, getter=isHeaderVisible) BOOL headerVisible;
- (void)viewDidLoad;
@property(readonly, nonatomic) CGRect contentRect;
@property(readonly, nonatomic) double contentWidth;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

