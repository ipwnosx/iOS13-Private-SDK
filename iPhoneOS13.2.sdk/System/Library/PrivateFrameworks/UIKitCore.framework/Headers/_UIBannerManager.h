//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class UIScene, UIWindowScene, _UIBannerContainerView, _UIBannerWindow;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding>
{
    UIWindowScene *_windowScene;
    _UIBannerWindow *_window;
    _UIBannerContainerView *_containerView;
}

@property(retain, nonatomic) _UIBannerContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) _UIBannerWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
// - (void).cxx_destruct;
- (id)bannerWithContent:(id)arg1;
- (void)_createWindowIfNeeded;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;

@end

