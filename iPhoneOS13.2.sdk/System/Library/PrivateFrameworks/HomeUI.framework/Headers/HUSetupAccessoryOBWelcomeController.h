//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class HFItem, HUHomeAccessoryTileView;
@protocol HFServiceLikeItem;

@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController
{
    HUHomeAccessoryTileView *_homeAccessoryTileView;
}

@property(readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView; // @synthesize homeAccessoryTileView=_homeAccessoryTileView;
// - (void).cxx_destruct;
- (double)_contentAspectRatio;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4;

@end

