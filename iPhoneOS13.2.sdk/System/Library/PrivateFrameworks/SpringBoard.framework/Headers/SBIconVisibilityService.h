//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSSet, SBIconModel;

@interface SBIconVisibilityService : NSObject
{
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

// - (void).cxx_destruct;
- (void)_visibleIdentifiersChanged:(id)arg1;
- (id)iconStateDisplayIdentifiers;
- (void)dealloc;
- (id)initWithIconModel:(id)arg1;

@end

