//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView
{
    long long _blockingReason;
    id <MFLoadBlockedContentBannerViewDelegate> _delegate;
    NSUInteger _blockedContentTypes;
}

@property(nonatomic) NSUInteger blockedContentTypes; // @synthesize blockedContentTypes=_blockedContentTypes;
@property(nonatomic) __weak id <MFLoadBlockedContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_titleControlTapped:(id)arg1;
- (void)_updateBannerText;
- (id)initWithFrame:(CGRect)arg1 blockedContentTypes:(NSUInteger)arg2 blockingReason:(long long)arg3;

@end

