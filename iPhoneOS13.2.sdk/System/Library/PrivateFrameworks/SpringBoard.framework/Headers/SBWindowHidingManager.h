//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSceneHandleObserver-Protocol.h>

@class NSMapTable, SBSceneHandle;
@protocol UIScenePresenter;

@interface SBWindowHidingManager : NSObject <SBSceneHandleObserver>
{
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    SBSceneHandle *_keyboardSceneHandle;
//    struct SBWindowLevelRange_struct _hideRange;
    id <UIScenePresenter> _keyboardPresenter;
}

+ (void)start;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (id)dumpKnownWindows;
- (id)dumpHidingState;
- (void)_releaseWindow:(id)arg1;
- (BOOL)_isHidingWindowLevel:(double)arg1;
- (void)_captureWindow:(id)arg1;
- (void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2;
- (void)_adjustWindowsForActiveHideRange;
- (void)_recomputeHideRangeAndAdjustWindows;
- (BOOL)_isHidingWindows;
- (void)stopHidingWindowsForContext:(id)arg1;
- (void)startHidingWindowsExclusivelyFromLevel:(double)arg1 toLevel:(double)arg2 forContext:(id)arg3 reason:(id)arg4;
- (void)setAlpha:(double)arg1 forWindow:(id)arg2;
- (id)init;

@end

