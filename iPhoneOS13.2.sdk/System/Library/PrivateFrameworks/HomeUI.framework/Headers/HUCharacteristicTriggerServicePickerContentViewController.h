//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFCharacteristicTriggerBuilder, UINavigationItem;

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    HFCharacteristicTriggerBuilder *_characteristicTriggerBuilder;
    NSUInteger _mode;
    NSUInteger _source;
    UINavigationItem *_effectiveNavigationItem;
}

@property(readonly, nonatomic) UINavigationItem *effectiveNavigationItem; // @synthesize effectiveNavigationItem=_effectiveNavigationItem;
@property(readonly, nonatomic) NSUInteger source; // @synthesize source=_source;
@property(readonly, nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder; // @synthesize characteristicTriggerBuilder=_characteristicTriggerBuilder;
// - (void).cxx_destruct;
- (void)_validateNextButton;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1;
- (void)_addCharacteristicEventsForAlarmItem:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)didChangeSelection;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)_next:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(NSUInteger)arg2 source:(NSUInteger)arg3 effectiveNavigationItem:(id)arg4 delegate:(id)arg5;

@end

