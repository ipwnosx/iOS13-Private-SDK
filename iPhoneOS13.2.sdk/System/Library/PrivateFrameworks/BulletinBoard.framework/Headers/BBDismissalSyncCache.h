//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface BBDismissalSyncCache : NSObject
{
    NSMutableDictionary *_cache;
    NSDate *_timeToCheck;
}

@property(retain, nonatomic) NSDate *timeToCheck; // @synthesize timeToCheck=_timeToCheck;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (id)description;
- (void)_checkCache;
- (BOOL)_isTimeToCheck;
- (void)removeBulletinMatch:(id)arg1;
- (id)findBulletinMatch:(id)arg1;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(NSUInteger)arg4;
- (id)init;

@end

