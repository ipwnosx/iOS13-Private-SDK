//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, SKUIClientContext, SKUIColorScheme, SKUILoadingView, UIColor;

@interface SKUILoadingViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    NSString *_loadingText;
    UIColor *_backgroundColor;
    SKUIColorScheme *_spinnerColorScheme;
    SKUILoadingView *_loadingView;
}

@property(retain, nonatomic) SKUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SKUIColorScheme *spinnerColorScheme; // @synthesize spinnerColorScheme=_spinnerColorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_initializeLoadingView;
- (void)viewDidLoad;
- (id)initWithClientContext:(id)arg1;

@end

