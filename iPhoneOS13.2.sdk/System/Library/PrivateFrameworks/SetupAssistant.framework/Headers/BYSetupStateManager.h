//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYSetupStateManager : NSObject
{
}

+ (id)sharedManager;
- (void)recordSetupUsingBuddy;
- (void)recordLanguageSelectedUsingBuddy;
- (BOOL)didSetupUsingiTunes;
- (BOOL)didRestoreFromBackup;
- (void)clearRestoreType;
- (long long)restoreType;
- (id)buddyPrefsValueForKey:(id)arg1;

@end

