//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject
{
    CMMotionManager *_motion;
    NSHashTable *_clients;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (BOOL)isClientRegistered:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)updateWithMotion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

