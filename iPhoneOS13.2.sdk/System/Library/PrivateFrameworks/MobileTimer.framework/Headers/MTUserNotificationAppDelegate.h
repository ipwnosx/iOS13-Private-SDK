//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/UNUserNotificationCenterDelegate-Protocol.h>

@class UNUserNotificationCenter;

@interface MTUserNotificationAppDelegate : NSObject <UNUserNotificationCenterDelegate>
{
    UNUserNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
// - (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

