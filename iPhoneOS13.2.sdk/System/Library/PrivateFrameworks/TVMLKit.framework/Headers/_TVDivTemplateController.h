//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSArray, TVImageProxy, UIImageView, _TVOrganizerView;

__attribute__((visibility("hidden")))
@interface _TVDivTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_viewElement;
    TVImageProxy *_backgroundImageProxy;
    UIImageView *_backgroundImageView;
    _TVOrganizerView *_contentView;
    NSArray *_viewControllers;
}

@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) _TVOrganizerView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TVImageProxy *backgroundImageProxy; // @synthesize backgroundImageProxy=_backgroundImageProxy;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (void)_updateContentView;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)_backgroundImageProxy;
- (CGSize)_backgroundImageProxySize;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (id)init;

@end

