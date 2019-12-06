//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate
{
    BOOL _shouldRepost;
    UNSNotificationRecord *_replacedNotificationRecord;
}

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldRepost; // @synthesize shouldRepost=_shouldRepost;
@property(readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord; // @synthesize replacedNotificationRecord=_replacedNotificationRecord;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3;

@end

