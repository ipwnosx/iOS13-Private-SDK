//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject
{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)displayName;
- (id)allTargets;
- (void)setPrimaryTarget:(id)arg1;
- (id)primaryTarget;
- (BOOL)removeActivityTarget:(id)arg1;
- (BOOL)addActivityTarget:(id)arg1;
- (void)dealloc;

@end

