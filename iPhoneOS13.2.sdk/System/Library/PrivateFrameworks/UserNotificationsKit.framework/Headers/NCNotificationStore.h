//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationStore : NSObject
{
    NSMutableDictionary *_notificationSections;
}

@property(retain, nonatomic) NSMutableDictionary *notificationSections; // @synthesize notificationSections=_notificationSections;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger notificationRequestsCount;
@property(readonly, nonatomic) NSUInteger sectionsCount;
- (id)notificationRequestMatchingNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (BOOL)removeNotificationRequest:(id)arg1;
- (BOOL)replaceNotificationRequest:(id)arg1;
- (BOOL)addNotificationRequest:(id)arg1;
- (id)init;

@end

