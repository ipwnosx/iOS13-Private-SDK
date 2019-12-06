//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface OSLogPreferencesProcess : NSObject
{
    NSString *_systemPrefsFile;
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
    NSString *_bundleID;
}

@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (void)reset;
@property(nonatomic) long long persistedLevel;
@property(nonatomic) long long enabledLevel;
- (id)_levelPrefs;
- (long long)defaultPersistedLevel;
- (long long)defaultEnabledLevel;
@property(readonly, nonatomic) long long effectivePersistedLevel;
@property(readonly, nonatomic) long long effectiveEnabledLevel;
@property(readonly, nonatomic) BOOL isLocked;
- (id)initWithBundleID:(id)arg1;

@end

