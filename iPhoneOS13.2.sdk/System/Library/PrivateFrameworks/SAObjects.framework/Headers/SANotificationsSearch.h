//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SANotificationsSearch : SABaseClientBoundCommand
{
}

+ (id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)notificationsSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *supportsSpokenNotifications;
@property(copy, nonatomic) NSString *sourceAppId;
@property(copy, nonatomic) NSString *priority;
@property(copy, nonatomic) NSString *afterNotificationId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

