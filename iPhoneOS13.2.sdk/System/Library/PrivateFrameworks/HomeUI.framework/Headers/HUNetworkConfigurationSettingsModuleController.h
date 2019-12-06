//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUNetworkConfigurationSettingsModuleDelegate-Protocol.h>
#import <HomeUI/HUTappableTextViewDelegate-Protocol.h>

@interface HUNetworkConfigurationSettingsModuleController : HUItemTableModuleController <HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate>
{
}

- (id)_presentNetworkConfigurationSettingsMismatchViewController;
- (void)tappableTextView:(id)arg1 tappedAtIndex:(NSUInteger)arg2 withAttributes:(id)arg3;
- (void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;

@end

