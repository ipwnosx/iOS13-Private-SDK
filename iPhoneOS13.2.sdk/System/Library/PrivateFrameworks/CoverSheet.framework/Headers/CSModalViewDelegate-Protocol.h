//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/SBLockScreenModalViewDelegate-Protocol.h>

@protocol SBLockScreenModalView;

@protocol CSModalViewDelegate <SBLockScreenModalViewDelegate>
- (void)handleSecondaryActionForView:(id <SBLockScreenModalView>)arg1;
- (void)handlePrimaryActionForView:(id <SBLockScreenModalView>)arg1;
- (BOOL)isPortrait;
@end

