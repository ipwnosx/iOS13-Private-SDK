//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessorySettingAdapter.h>

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class HFSiriLanguageOption, NAFuture, NSHashTable, NSSet;

@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
    NSSet *_availableLanguageOptions;
    HFSiriLanguageOption *_selectedLanguageOption;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption; // @synthesize selectedLanguageOption=_selectedLanguageOption;
@property(copy, nonatomic) NSSet *availableLanguageOptions; // @synthesize availableLanguageOptions=_availableLanguageOptions;
// - (void).cxx_destruct;
- (BOOL)shouldShowSettingsEntity:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (id)_reloadLanguagesFromHomeKitNotifyingObservers:(BOOL)arg1;
@property(readonly, nonatomic) NAFuture *languageSettingFuture;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1;
- (id)preferredOutputVoiceGenderOptionsForSelectedOption:(id)arg1;
- (id)preferredRecognitionLanguageOptions;
- (void)_dumpAvailableLanguageOptionsWithReason:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1;
- (id)updateAvailableLanguageOptions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(NSUInteger)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(NSUInteger)arg2;

@end

