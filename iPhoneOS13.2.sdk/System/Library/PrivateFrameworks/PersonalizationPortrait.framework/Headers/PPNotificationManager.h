//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPNotificationManager : NSObject
{
    _PASLock *_lockedData;
}

+ (void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)unsetSharedManager;
+ (id)createNewSharedManager;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)addSuggestionsChangeBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)addEventKitChangeBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitInvalidationBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitChangeBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)addMeCardChangeBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)addContactsChangeBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)stopListening;
- (void)fireEventKitHandler:(id)arg1 events:(id)arg2;
- (void)fireHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)simulateSuggestionsChange;
- (void)simulateEventKitChange;
- (void)simulatePortraitInvalidation;
- (void)simulatePortraitChange;
- (void)simulateMeCardChange;
- (void)simulateContactsChange;

@end

