//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _KSTextReplacementHelper : NSObject
{
}

+ (id)fetchConfigurationPlist;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)sampleShortcut;
+ (id)appleLanguagesPreference;
+ (void)logAggdValueForSyncIsPull:(BOOL)arg1 success:(BOOL)arg2;
+ (id)aggdPrefix;
+ (void)logPhraseWordCount:(long long)arg1;
+ (void)extractAggdMetricsForTextReplacement:(id)arg1;
+ (id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2;
+ (id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithCode:(long long)arg1 forEntry:(id)arg2;
+ (long long)validateTextReplacement:(id)arg1;
+ (id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(BOOL)arg2;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)arg1;
+ (id)errorStringForCode:(long long)arg1;

@end

