//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlPanelConfiguration-Protocol.h>

@protocol HUControlPanelRule;

@interface HUDurationWheelControlPanelConfiguration : NSObject <HUControlPanelConfiguration>
{
}

- (id)_characteristicTypesFromControlPanelItem:(id)arg1;
- (id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
- (id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
- (BOOL)shouldShowSectionFooterForItem:(id)arg1;
- (BOOL)shouldShowSectionTitleForItem:(id)arg1;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;

@end

