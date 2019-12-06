//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusUpdateRequesting-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusSystem, UIWindow, _UIFocusInputDeviceInfo, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting>
{
    BOOL _shouldPerformHapticFeedback;
    UIFocusSystem *_focusSystem;
    _UIFocusInputDeviceInfo *_inputDeviceInfo;
    UIWindow *_window;
    _UIFocusItemInfo *_focusedItemInfo;
    _UIFocusMovementInfo *_movementInfo;
    _UIFocusSearchInfo *_searchInfo;
}

@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) _UIFocusMovementInfo *movementInfo; // @synthesize movementInfo=_movementInfo;
@property(retain, nonatomic) _UIFocusItemInfo *focusedItemInfo; // @synthesize focusedItemInfo=_focusedItemInfo;
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo; // @synthesize inputDeviceInfo=_inputDeviceInfo;
@property(nonatomic) BOOL shouldPerformHapticFeedback; // @synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allowsFocusRestoration;
@property(readonly, nonatomic) BOOL allowsDeferral;
@property(readonly, nonatomic) BOOL allowsFocusingCurrentItem;
@property(readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property(readonly, nonatomic) BOOL requiresNextFocusedItem;
@property(readonly, nonatomic) BOOL shouldPlayFocusSound;
@property(readonly, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property(readonly, nonatomic) _UIFocusMovementRequest *fallbackRequest;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 window:(id)arg2;
- (id)init;

@end

