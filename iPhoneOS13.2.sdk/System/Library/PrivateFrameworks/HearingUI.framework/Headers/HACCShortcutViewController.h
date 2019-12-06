//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HearingUI/HACCContentModuleDelegate-Protocol.h>

@class AXDispatchTimer, AXRemoteHearingAidDevice, CCUIContentModuleContext, HACCContentViewController, NSMutableArray, NSMutableDictionary, UIScrollView;
@protocol AXHAShortcutUpdateProtocol;

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCContentModuleDelegate>
{
    double _dismissalGestureYOffset;
    CGPoint _backgroundViewDismissalOrigin;
    AXDispatchTimer *_bluetoothAvailabilityTimer;
    BOOL _bluetoothAvailable;
    BOOL _listeningForUpdates;
    id <AXHAShortcutUpdateProtocol> _delegate;
    CCUIContentModuleContext *_contentModuleContext;
    NSMutableDictionary *_moduleToViewControllerMap;
    NSMutableDictionary *_gridToModuleMap;
    NSMutableDictionary *_moduleToPointMap;
    UIScrollView *_scrollView;
    NSMutableArray *_separatorViews;
    AXRemoteHearingAidDevice *_currentHearingDevice;
}

@property(nonatomic) BOOL listeningForUpdates; // @synthesize listeningForUpdates=_listeningForUpdates;
@property(nonatomic) BOOL bluetoothAvailable; // @synthesize bluetoothAvailable=_bluetoothAvailable;
@property(retain, nonatomic) AXRemoteHearingAidDevice *currentHearingDevice; // @synthesize currentHearingDevice=_currentHearingDevice;
@property(retain, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableDictionary *moduleToPointMap; // @synthesize moduleToPointMap=_moduleToPointMap;
@property(retain, nonatomic) NSMutableDictionary *gridToModuleMap; // @synthesize gridToModuleMap=_gridToModuleMap;
@property(retain, nonatomic) NSMutableDictionary *moduleToViewControllerMap; // @synthesize moduleToViewControllerMap=_moduleToViewControllerMap;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property(nonatomic) __weak id <AXHAShortcutUpdateProtocol> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)setAlpha:(double)arg1 forAllModulesExcept:(id)arg2;
- (void)controlDidActivate:(id)arg1;
- (void)updateViewForProperties:(id)arg1;
- (void)updateView;
- (BOOL)isExpanded;
@property(readonly, nonatomic) __weak HACCContentViewController *expandedController;
- (double)preferredContentWidth;
- (double)preferredExpandedContentHeight;
- (double)_separatorHeight;
- (double)moduleHeight;
- (void)updateAvailableControlsForSize:(CGSize)arg1;
- (NSUInteger)numberOfColumnsForSize:(CGSize)arg1;
- (BOOL)shouldDisplayControlForModule:(NSUInteger)arg1;
- (void)contentCategoryDidChange:(id)arg1;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)listenForUpdates;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

