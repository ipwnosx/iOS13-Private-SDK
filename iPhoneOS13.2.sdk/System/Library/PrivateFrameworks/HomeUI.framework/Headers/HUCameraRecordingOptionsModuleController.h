//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@interface HUCameraRecordingOptionsModuleController : HUItemTableModuleController <HUSwitchCellDelegate>
{
}

- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (NSUInteger)didSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (BOOL)isItemHeader:(id)arg1;
- (id)initWithModule:(id)arg1;

@end

