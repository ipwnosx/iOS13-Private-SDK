//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessorySettingAdapter.h>

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
}

+ (BOOL)areAllAccessoriesLoggedOut:(id)arg1;
+ (BOOL)areAllAccessoriesLoggedIntoSameAccount:(id)arg1;
- (BOOL)shouldShowSettingsEntity:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(NSUInteger)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(NSUInteger)arg2;

@end

