//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardUIServices/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardUIServices/SBFLegibilitySettingsProviderDelegate-Protocol.h>
#import <SpringBoardUIServices/SBSUIWallpaperPreviewViewDelegate-Protocol.h>

@class AVURLAsset, NSDictionary, NSString, NSTimer, SBFWallpaperConfiguration, SBFWallpaperConfigurationManager, SBFWallpaperOptions, SBSUIProgressHUD, UIImage, _SBSUIOrientedImageView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider>
{
    NSTimer *_dateTimer;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    SBFWallpaperConfiguration *_initialConfiguration;
    UIImage *_wallpaperImage;
    NSDictionary *_wallpaperImageDict;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    BOOL _allowScrolling;
    long long _variant;
    NSString *_name;
    BOOL _colorSamplingEnabled;
    AVURLAsset *_video;
    NSDictionary *_videoDict;
    double _stillTimeInVideo;
    SBFWallpaperOptions *_options;
    NSDictionary *_optionsDict;
    BOOL _enableButtons;
    BOOL _disableContents;
    SBSUIProgressHUD *_hud;
    _SBSUIOrientedImageView *_homeScreenPreviewView;
    BOOL _motionEnabled;
    BOOL _irisEnabled;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    id <SBSUIWallpaperPreviewViewControllerDelegate> _previewDelegate;
    double _zoomScale;
    double _parallaxFactor;
    SBFWallpaperConfiguration *_wallpaperConfiguration;
    CGRect _cropRect;
}

@property(copy, nonatomic) SBFWallpaperConfiguration *wallpaperConfiguration; // @synthesize wallpaperConfiguration=_wallpaperConfiguration;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) BOOL irisEnabled; // @synthesize irisEnabled=_irisEnabled;
@property(nonatomic) BOOL motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(readonly) UIImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property(nonatomic) __weak id <SBSUIWallpaperPreviewViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)colorSamplingEnabled;
- (void)setColorSamplingEnabled:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_startDateTimer;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_dateView;
- (void)_displaySettingWallpaperHUD;
- (id)_wallpaperView;
- (id)_previewView;
- (id)_colorWallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;
- (id)_proceduralWallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;
- (id)_wallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 options:(id)arg3;
- (id)_wallpaperViewWithFrame:(CGRect)arg1 image:(id)arg2 video:(id)arg3 videoURL:(id)arg4 stillTimeInVideo:(double)arg5 supportsCropping:(BOOL)arg6 variant:(long long)arg7 needsWallpaperDimming:(BOOL)arg8;
- (id)_wallpaperViewWithFrame:(CGRect)arg1;
- (void)userDidTapOnSetButton:(id)arg1;
- (void)userDidTapOnCancelButton:(id)arg1;
- (void)userDidTapOnParallaxButton:(id)arg1;
- (void)userDidTapOnIrisButton:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)setMotionEnabled:(BOOL)arg1 updateParallaxOnWallpaperView:(BOOL)arg2;
- (void)_applyHomeScreenPreview;
- (void)_setProceduralWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setImageWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setImageWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setWallpaperImagesOnMainThread:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3;
- (void)_setWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWallpaperForLocations:(long long)arg1;
- (double)_parallaxFactor;
- (long long)_wallpaperType;
- (id)_wallpaperTypeDescription;
- (id)wallpaperConfigurationManager;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(BOOL)arg5 enableButtons:(BOOL)arg6 disableContents:(BOOL)arg7;
- (id)initWithImage:(id)arg1 video:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(BOOL)arg5 enableButtons:(BOOL)arg6 disableContents:(BOOL)arg7;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithImage:(id)arg1 name:(id)arg2;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 variant:(long long)arg3 disableSegmentedControl:(BOOL)arg4 enableButtons:(BOOL)arg5 disableContents:(BOOL)arg6;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

