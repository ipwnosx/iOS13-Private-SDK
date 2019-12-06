//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/SBUIActiveOrientationObserver-Protocol.h>

@protocol SSActiveInterfaceOrientationObserverDelegate;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver>
{
    id <SSActiveInterfaceOrientationObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <SSActiveInterfaceOrientationObserverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_unregisterForActiveInterfaceOrientationChanges;
- (void)_registerForActiveInterfaceOrientationChanges;
- (id)_sbUIUserAgent;
- (void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2;
- (void)stopObserving;
- (void)beginObserving;

@end

