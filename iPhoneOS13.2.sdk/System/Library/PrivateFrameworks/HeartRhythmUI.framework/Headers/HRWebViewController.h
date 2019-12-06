//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HeartRhythmUI/WKNavigationDelegate-Protocol.h>

@class NSURL, WKWebView;

@interface HRWebViewController : UIViewController <WKNavigationDelegate>
{
    NSURL *_fileURL;
    WKWebView *_webView;
    UIEdgeInsets _bodyInsets;
}

@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) UIEdgeInsets bodyInsets; // @synthesize bodyInsets=_bodyInsets;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
// - (void).cxx_destruct;
- (void)_adjustWebView:(id)arg1 bodyInsets:(UIEdgeInsets)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 bodyInsets:(UIEdgeInsets)arg2;

@end

