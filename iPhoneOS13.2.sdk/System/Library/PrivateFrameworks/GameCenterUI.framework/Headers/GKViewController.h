//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKColorPalette;

@interface GKViewController : UIViewController
{
    BOOL _shouldUpdateContentOnlyWhenAuthenticated;
    GKViewController *_rootViewController;
    GKColorPalette *_colorPalette;
    long long _gkFocusBubbleType;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) long long gkFocusBubbleType; // @synthesize gkFocusBubbleType=_gkFocusBubbleType;
@property(nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated; // @synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(retain, nonatomic) GKViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)displayUsingSplitNavigationBar;
- (void)loadView;
- (void)dealloc;

@end

