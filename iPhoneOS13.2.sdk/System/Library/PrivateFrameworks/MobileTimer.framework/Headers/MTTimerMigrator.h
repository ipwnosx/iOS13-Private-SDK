//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTTimer;

@interface MTTimerMigrator : NSObject
{
    MTTimer *_timer;
}

@property(retain, nonatomic) MTTimer *timer; // @synthesize timer=_timer;
// - (void).cxx_destruct;
- (void)removeFromOldStorage;
- (void)migrateFromOldStorage;

@end

