//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIContentSizeCategoryPreference.h"

__attribute__((visibility("hidden")))
@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference
{
    BOOL _observingNotification;
    BOOL _didCheckForPreferredContentSizeCategoryOverride;
    BOOL _applicationOverridesPreferredContentSizeCategory;
    UIContentSizeCategoryPreference *_overridePreferences;
}

@property(retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences; // @synthesize overridePreferences=_overridePreferences;
// - (void).cxx_destruct;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(BOOL)arg3;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (void)checkForChanges;
- (void)_readAndObservePreferences;
- (id)initAsSystem;

@end

