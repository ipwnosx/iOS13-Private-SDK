//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContextDelegate-Protocol.h>

@class _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate>
{
    BOOL _allowsInferringPreferences;
    id /* CDUnknownBlockType */ _didVisitAllPreferencesForEnvironmentHandler;
    id /* CDUnknownBlockType */ _shouldInferPreferenceForEnvironmentHandler;
    _UIDebugLogReport *_debugReport;
}

@property(retain, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shouldInferPreferenceForEnvironmentHandler; // @synthesize shouldInferPreferenceForEnvironmentHandler=_shouldInferPreferenceForEnvironmentHandler;
@property(nonatomic) BOOL allowsInferringPreferences; // @synthesize allowsInferringPreferences=_allowsInferringPreferences;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didVisitAllPreferencesForEnvironmentHandler; // @synthesize didVisitAllPreferencesForEnvironmentHandler=_didVisitAllPreferencesForEnvironmentHandler;
// - (void).cxx_destruct;
- (BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1;
- (void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

