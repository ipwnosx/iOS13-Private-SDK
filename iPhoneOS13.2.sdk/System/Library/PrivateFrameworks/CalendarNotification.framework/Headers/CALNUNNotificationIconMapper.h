//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject
{
    CALNNotificationIconCache *_notificationIconCache;
}

@property(readonly, nonatomic) CALNNotificationIconCache *notificationIconCache; // @synthesize notificationIconCache=_notificationIconCache;
// - (void).cxx_destruct;
- (id)unNotificationIconFromIconIdentifier:(id)arg1;
- (id)iconIdentifierFromUNNotificationIcon:(id)arg1;
- (id)initWithNotificationIconCache:(id)arg1;

@end

