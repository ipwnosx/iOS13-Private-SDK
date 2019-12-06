//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SharingUI/SFShareAudioBaseViewController.h>

@class MTMaterialView, SFMediaPlayerView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface SFShareAudioConfirmViewController : SFShareAudioBaseViewController
{
    MTMaterialView *_confirmButtonMaterialView;
    unsigned int _colorCode;
    unsigned int _productID;
    UIImageView *_productImageView;
    SFMediaPlayerView *_productMovieView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIImageView *_shareImageView;
}

@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned int colorCode; // @synthesize colorCode=_colorCode;
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) SFMediaPlayerView *productMovieView; // @synthesize productMovieView=_productMovieView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
// - (void).cxx_destruct;
- (void)_updateDeviceVisual:(id)arg1;
- (void)eventCancel:(id)arg1;
- (void)eventConfirm:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

