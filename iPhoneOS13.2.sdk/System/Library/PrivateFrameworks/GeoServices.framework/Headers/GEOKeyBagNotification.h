//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOKeyBagNotification : NSObject
{
    int _currentState;
    int _notifyToken;
}

+ (id)sharedObject;
- (void)updateState;
@property(readonly, nonatomic) int state;
- (void)removeObserver:(id)arg1;
- (BOOL)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(NSUInteger)arg2;
- (BOOL)canAccessFilesWithProtection:(NSUInteger)arg1;
- (void)dealloc;
- (id)init;

@end

