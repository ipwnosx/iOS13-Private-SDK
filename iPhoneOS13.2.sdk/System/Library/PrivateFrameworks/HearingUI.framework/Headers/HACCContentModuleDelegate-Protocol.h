//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AXRemoteHearingAidDevice, NSArray, UIView;
@protocol HACCContentModule;

@protocol HACCContentModuleDelegate <NSObject>
- (double)preferredContentWidth;
- (void)updateViewForProperties:(NSArray *)arg1;
- (void)controlDidActivate:(UIView<HACCContentModule> *)arg1;
- (AXRemoteHearingAidDevice *)currentHearingDevice;
@end

