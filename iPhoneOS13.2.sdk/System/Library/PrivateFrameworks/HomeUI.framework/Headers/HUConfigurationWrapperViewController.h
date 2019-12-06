//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeUI/HUConfigurationContentViewControllerDelegate-Protocol.h>
#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class NAFuture, UIBarButtonItem;
@protocol HUConfigurationContentViewController, HUConfigurationViewControllerDelegate;

@interface HUConfigurationWrapperViewController : UIViewController <HUPreloadableViewController, HUConfigurationViewController, HUConfigurationContentViewControllerDelegate>
{
    BOOL _isFinalStep;
    id <HUConfigurationViewControllerDelegate> _delegate;
    UIViewController *_contentViewController;
    NAFuture *_finishFuture;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_nextButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *nextButtonItem; // @synthesize nextButtonItem=_nextButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(retain, nonatomic) NAFuture *finishFuture; // @synthesize finishFuture=_finishFuture;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) BOOL isFinalStep; // @synthesize isFinalStep=_isFinalStep;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_nextAction:(id)arg1;
- (void)_backAction:(id)arg1;
- (void)_updateNextButton;
- (BOOL)_canGoNext;
@property(readonly, nonatomic) UIViewController<HUConfigurationContentViewController> *protocolConformingContentViewController;
- (void)contentViewControllerDidUpdate:(id)arg1;
- (id)hu_preloadContent;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)title;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1 configurationDelegate:(id)arg2;

@end

