//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject
{
    NSMutableArray *_availableControllers;
}

// - (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)recycleLockoutViewController:(id)arg1;
- (id)lockoutViewControllerForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

