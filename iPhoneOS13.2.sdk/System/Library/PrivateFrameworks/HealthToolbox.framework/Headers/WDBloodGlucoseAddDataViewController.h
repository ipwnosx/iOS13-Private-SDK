//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

#import <HealthToolbox/WDAddDataManualEntrySpinnerDataSource-Protocol.h>

@class WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDBloodGlucoseAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource>
{
    WDAddDataManualEntrySpinner *_mealTimeEntryItem;
}

@property(retain, nonatomic) WDAddDataManualEntrySpinner *mealTimeEntryItem; // @synthesize mealTimeEntryItem=_mealTimeEntryItem;
// - (void).cxx_destruct;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)defaultMetadata;

@end

