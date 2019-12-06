//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject
{
    NSString *_activityDefaultsKey;
    NSUserDefaults *_underlyingUserDefaults;
}

+ (void)migrateUserDefaultKeyIfNecessary:(id)arg1 hasMigratedKey:(id)arg2 fromUserDefaults:(id)arg3 toUserDefaults:(id)arg4;
+ (void)migrateUserDefaultKeysIfNecessary:(id)arg1 fromUIKitDefaultsToUserDefaults:(id)arg2;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;
+ (id)builtinActivityOrder;
@property(retain, nonatomic) NSUserDefaults *underlyingUserDefaults; // @synthesize underlyingUserDefaults=_underlyingUserDefaults;
@property(copy, nonatomic) NSString *activityDefaultsKey; // @synthesize activityDefaultsKey=_activityDefaultsKey;
// - (void).cxx_destruct;
- (id)_userDefaultsDictionary;
- (void)_setUserDefaultsDictionary:(id)arg1;
- (id)applicationExtensionForActivity:(id)arg1;
- (id)identifierForActivity:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (id)activityIdentifiersInUserOrder;
- (void)replaceUserActivityOrderIfNecessaryWithSystemDefaultOrder:(id)arg1;
- (void)removeActivityTypeFromDefaults:(id)arg1;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1;
- (id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2;
- (id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2;
- (void)setActivity:(id)arg1 asHidden:(BOOL)arg2;
- (BOOL)activityIsHidden:(id)arg1;
- (BOOL)canHideActivity:(id)arg1;
- (id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2;

@end

