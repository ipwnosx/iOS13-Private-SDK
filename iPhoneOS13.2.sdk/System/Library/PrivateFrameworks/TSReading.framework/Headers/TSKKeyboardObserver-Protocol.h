//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNotification;

@protocol TSKKeyboardObserver <NSObject>

@optional
- (void)keyboardDidChangeFrame:(NSNotification *)arg1;
- (void)keyboardWillChangeFrame:(NSNotification *)arg1;
- (void)keyboardHideCanceled;
- (void)keyboardDidHideOrUndock:(NSNotification *)arg1;
- (void)keyboardWillHideOrUndock:(NSNotification *)arg1;
- (void)keyboardShowCanceled;
- (void)keyboardDidShowOrDock:(NSNotification *)arg1;
- (void)keyboardWillShowOrDock:(NSNotification *)arg1;
@end

