//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ToneKit/PSStateRestoration-Protocol.h>

@class TKVibrationRecorderContentViewController;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration>
{
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

// - (void).cxx_destruct;
@property(nonatomic) __weak id <TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;

@end

