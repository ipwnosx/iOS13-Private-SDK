//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

#import <HomeUI/HUQuickControlDetailsViewControllerVendor-Protocol.h>

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor>
{
}

+ (id)controlItemPredicate;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;
- (id)secondaryQuickControlPresentationStyle;
- (id)createDetailsViewController;
- (id)controlItem;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;

@end

