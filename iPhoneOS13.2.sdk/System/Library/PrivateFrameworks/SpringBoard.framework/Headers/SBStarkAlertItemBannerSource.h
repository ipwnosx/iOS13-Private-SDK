//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBStarkBannerSource.h>

#import <SpringBoard/SBAlertItemsControllerObserver-Protocol.h>

@interface SBStarkAlertItemBannerSource : SBStarkBannerSource <SBAlertItemsControllerObserver>
{
}

- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void )arg2;

@end

