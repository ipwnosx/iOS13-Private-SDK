//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFBlockedSenderBannerViewDelegate;

@interface MFBlockedSenderBannerView : MFSuggestionBannerView
{
    id <MFBlockedSenderBannerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MFBlockedSenderBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_bannerDismissed:(id)arg1;
- (void)_titleControlTapped:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

