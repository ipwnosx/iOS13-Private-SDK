//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class SBUIButton, UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    SBUIButton *_okButton;
    BOOL _showsOkButton;
    UILabel *_promptLabel;
    BOOL _showsPromptLabel;
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

+ (BOOL)_usesTextFieldForFirstResponder;
+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
@property(nonatomic) BOOL showsPromptLabel; // @synthesize showsPromptLabel=_showsPromptLabel;
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) BOOL showsOkButton; // @synthesize showsOkButton=_showsOkButton;
@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
// - (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (CGSize)_viewSize;
- (void)_getPasscodeFieldSize:(CGSize )arg1 okButtonSize:(CGSize )arg2;
- (void)_okButtonHit;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;

@end

