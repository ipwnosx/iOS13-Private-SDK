//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <StoreKitUI/SKUIGiftViewControllerDelegate-Protocol.h>

@class SKUIClientContext, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate>
{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

// - (void).cxx_destruct;
- (void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityViewController;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end

