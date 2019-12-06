//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardHome/SBHSidebarProvider-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, SBHDateHeaderViewController, SBHSidebarVisualConfiguration, WGWidgetGroupViewController, _UILegibilitySettings;
@protocol SBHSidebarProviderDelegate;

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider>
{
    SBHDateHeaderViewController *_dateViewController;
    _UILegibilitySettings *_legibilitySettings;
    WGWidgetGroupViewController *_widgetViewController;
    SBHSidebarVisualConfiguration *_sidebarVisualConfiguration;
    NSUInteger _layoutInsetsIgnoredEdges;
    id <SBHSidebarProviderDelegate> _delegate;
    NSMutableArray *_widgetViewControllerConstraints;
    NSLayoutConstraint *_dockHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *dockHeightConstraint; // @synthesize dockHeightConstraint=_dockHeightConstraint;
@property(copy, nonatomic) NSMutableArray *widgetViewControllerConstraints; // @synthesize widgetViewControllerConstraints=_widgetViewControllerConstraints;
@property(nonatomic) __weak id <SBHSidebarProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger layoutInsetsIgnoredEdges; // @synthesize layoutInsetsIgnoredEdges=_layoutInsetsIgnoredEdges;
@property(retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration; // @synthesize sidebarVisualConfiguration=_sidebarVisualConfiguration;
@property(retain, nonatomic) WGWidgetGroupViewController *widgetViewController; // @synthesize widgetViewController=_widgetViewController;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
// - (void).cxx_destruct;
- (void)_updateDockHeightConstraint;
- (void)_configureLayoutMargins;
- (void)_addEditButton;
- (void)_configureWidgetViewController;
- (void)setEditingIcons:(BOOL)arg1;
@property(readonly, nonatomic) SBHDateHeaderViewController *dateViewController; // @synthesize dateViewController=_dateViewController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

