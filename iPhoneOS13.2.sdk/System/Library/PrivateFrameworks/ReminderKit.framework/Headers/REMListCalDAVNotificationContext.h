//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMList;

@interface REMListCalDAVNotificationContext : NSObject
{
    REMList *_list;
}

@property(retain, nonatomic) REMList *list; // @synthesize list=_list;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *calDAVNotifications;
- (id)initWithList:(id)arg1;

@end

