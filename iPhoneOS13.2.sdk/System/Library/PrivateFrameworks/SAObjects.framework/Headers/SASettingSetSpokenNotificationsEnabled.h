//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetBool.h>

@class NSDate, NSString;

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool
{
}

+ (id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSpokenNotificationsEnabled;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDate *timeToReEnable;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

