//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFImageFetcher, TFLaunchScreen;
@protocol TFBetaAppLaunchDataProvider, TFBetaAppLaunchPresenterView;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchPresenter : NSObject
{
    id <TFBetaAppLaunchPresenterView> _presenterView;
    NSString *_bundleIdentifier;
    id <TFBetaAppLaunchDataProvider> _launchDataProvider;
    TFImageFetcher *_imageFetcher;
    TFLaunchScreen *_launchScreen;
}

@property(retain, nonatomic) TFLaunchScreen *launchScreen; // @synthesize launchScreen=_launchScreen;
@property(readonly, nonatomic) TFImageFetcher *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(readonly, nonatomic) id <TFBetaAppLaunchDataProvider> launchDataProvider; // @synthesize launchDataProvider=_launchDataProvider;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <TFBetaAppLaunchPresenterView> presenterView; // @synthesize presenterView=_presenterView;
// - (void).cxx_destruct;
- (void)_abortLaunchScreenLoadWithError:(id)arg1;
- (void)_showHowToViewWithLaunchScreen:(id)arg1;
- (void)_showTestNotesViewWithLaunchScreen:(id)arg1;
- (void)_showLoading;
- (void)exitLaunchScreen;
- (void)openHowToSupportLink;
- (void)showHowToScreen;
- (void)update;
- (id)initForIdentifier:(id)arg1 launchDataProvider:(id)arg2 launchScreenSidepack:(id)arg3;

@end

