//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSUUID, _UIActivityUserDefaultsViewController;

@protocol _UIActivityUserDefaultsViewControllerDelegate <NSObject>
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didSelectActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didUpdateFavoritesProxies:(NSArray *)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didFavoriteActivity:(BOOL)arg2 withIdentifier:(NSUUID *)arg3 activityCategory:(long long)arg4;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didToggleActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
@end

