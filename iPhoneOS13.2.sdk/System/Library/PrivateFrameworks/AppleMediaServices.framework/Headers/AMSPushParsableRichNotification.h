//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSPushParsable-Protocol.h>
#import <AppleMediaServices/AMSUserNotificationIntentDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface AMSPushParsableRichNotification : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>
{
}

+ (BOOL)shouldSkipAccountCheck;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;

@end

