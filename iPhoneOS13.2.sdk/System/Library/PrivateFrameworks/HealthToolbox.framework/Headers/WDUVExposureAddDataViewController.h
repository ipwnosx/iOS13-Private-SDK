//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDAddDataViewController.h>

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>

@class WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDUVExposureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateRangeEntryItem;
    WDAddDataManualEntryItem *_valueEntryItem;
}

// - (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultEditingItem;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)generateHKObjects;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end

