//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UITextView;

@interface TSWPEffectsWindow : UIWindow
{
    BOOL _readyToGo;
    unsigned int _activeEffectsCount;
    UITextView *_dummyToReclaimFirstResponder;
}

+ (id)sharedEffectsWindowAboveStatusBarForView:(id)arg1;
+ (id)sharedEffectsWindowAboveStatusBar;
- (void)pDidChangeStatusBarOrientation:(id)arg1;
- (void)p_updateForOrientation:(long long)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)dealloc;
- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithFrame:(CGRect)arg1;

@end

