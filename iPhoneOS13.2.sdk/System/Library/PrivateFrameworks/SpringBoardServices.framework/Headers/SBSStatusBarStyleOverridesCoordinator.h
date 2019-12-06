//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface SBSStatusBarStyleOverridesCoordinator : NSObject
{
    int _styleOverrides;
    id <SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;
}

@property(readonly, nonatomic) int styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(nonatomic) __weak id <SBSStatusBarStyleOverridesCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_registrationInvalidated:(id)arg1;
- (void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setRegisteredStyleOverrides:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

