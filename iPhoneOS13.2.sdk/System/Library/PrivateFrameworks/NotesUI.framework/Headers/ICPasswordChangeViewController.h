//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <NotesUI/ICScrollViewKeyboardResizerDelegate-Protocol.h>

@class ICAccount, ICLearnMoreTextView, ICPasswordUtilities, ICScrollViewKeyboardResizer, NSArray, NSLayoutConstraint, UIBarButtonItem, UILabel, UIScrollView, UISwitch, UITextField, UIView;

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate>
{
    BOOL _isSetupForChangePassword;
    BOOL _isInSettings;
    BOOL _isSettingInitialPassword;
    BOOL _didAttemptToSubmitWithoutHint;
    BOOL _usingLargerAXSizes;
    ICAccount *_account;
    NSArray *_textBackgroundViews;
    UIView *_headerBackground;
    ICScrollViewKeyboardResizer *_scrollViewResizer;
    UIScrollView *_scrollView;
    ICPasswordUtilities *_passwordUtilities;
    UILabel *_headerLabel;
    UILabel *_oldPasswordLabel;
    UILabel *_passwordLabel;
    UILabel *_verifyLabel;
    UILabel *_hintLabel;
    UILabel *_warningLabel;
    ICLearnMoreTextView *_disclaimerLabel;
    UITextField *_oldPasswordTextField;
    UITextField *_passwordTextField;
    UITextField *_verifyTextField;
    UITextField *_hintTextField;
    NSArray *_orderedTextFields;
    UILabel *_useBiometricIDLabel;
    UISwitch *_useBiometricIDSwitch;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    NSLayoutConstraint *_oldPasswordHeightConstraint;
    NSLayoutConstraint *_disclaimerHeightConstraint;
    NSLayoutConstraint *_biometricIDZeroHeightConstraint;
    NSLayoutConstraint *_biometricIDTopConstraint;
    long long _incorrectPasswordAttempts;
    UIView *_biometricIDContainer;
    id /* CDUnknownBlockType */ _completionHandler;
    NSArray *_defaultConstraints;
    NSArray *_alternateConstraintsForAXLargerTextSizes;
}

@property(retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes; // @synthesize alternateConstraintsForAXLargerTextSizes=_alternateConstraintsForAXLargerTextSizes;
@property(retain, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property(nonatomic) BOOL usingLargerAXSizes; // @synthesize usingLargerAXSizes=_usingLargerAXSizes;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL didAttemptToSubmitWithoutHint; // @synthesize didAttemptToSubmitWithoutHint=_didAttemptToSubmitWithoutHint;
@property(nonatomic) __weak UIView *biometricIDContainer; // @synthesize biometricIDContainer=_biometricIDContainer;
@property(nonatomic) long long incorrectPasswordAttempts; // @synthesize incorrectPasswordAttempts=_incorrectPasswordAttempts;
@property(nonatomic) __weak NSLayoutConstraint *biometricIDTopConstraint; // @synthesize biometricIDTopConstraint=_biometricIDTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *biometricIDZeroHeightConstraint; // @synthesize biometricIDZeroHeightConstraint=_biometricIDZeroHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *disclaimerHeightConstraint; // @synthesize disclaimerHeightConstraint=_disclaimerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *oldPasswordHeightConstraint; // @synthesize oldPasswordHeightConstraint=_oldPasswordHeightConstraint;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UISwitch *useBiometricIDSwitch; // @synthesize useBiometricIDSwitch=_useBiometricIDSwitch;
@property(nonatomic) __weak UILabel *useBiometricIDLabel; // @synthesize useBiometricIDLabel=_useBiometricIDLabel;
@property(retain, nonatomic) NSArray *orderedTextFields; // @synthesize orderedTextFields=_orderedTextFields;
@property(nonatomic) __weak UITextField *hintTextField; // @synthesize hintTextField=_hintTextField;
@property(nonatomic) __weak UITextField *verifyTextField; // @synthesize verifyTextField=_verifyTextField;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak UITextField *oldPasswordTextField; // @synthesize oldPasswordTextField=_oldPasswordTextField;
@property(nonatomic) __weak ICLearnMoreTextView *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(nonatomic) __weak UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak UILabel *verifyLabel; // @synthesize verifyLabel=_verifyLabel;
@property(nonatomic) __weak UILabel *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(nonatomic) __weak UILabel *oldPasswordLabel; // @synthesize oldPasswordLabel=_oldPasswordLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) ICPasswordUtilities *passwordUtilities; // @synthesize passwordUtilities=_passwordUtilities;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer; // @synthesize scrollViewResizer=_scrollViewResizer;
@property(nonatomic) __weak UIView *headerBackground; // @synthesize headerBackground=_headerBackground;
@property(retain, nonatomic) NSArray *textBackgroundViews; // @synthesize textBackgroundViews=_textBackgroundViews;
@property(retain, nonatomic) ICAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL isSettingInitialPassword; // @synthesize isSettingInitialPassword=_isSettingInitialPassword;
@property(nonatomic) BOOL isInSettings; // @synthesize isInSettings=_isInSettings;
@property(nonatomic) BOOL isSetupForChangePassword; // @synthesize isSetupForChangePassword=_isSetupForChangePassword;
// - (void).cxx_destruct;
- (void)setupAccessibility;
- (void)updateFonts;
- (void)contentSizeCategoryDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)keyboardResizerScrollView;
- (double)topInsetForResizer:(id)arg1;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)dismissKeyboardIfNeeded;
- (id)disclaimerAttributedString;
- (void)resetTextFields;
- (void)setUpForChangePasswordWithAccount:(id)arg1;
- (void)setUpForInitialPasswordWithAccount:(id)arg1;
@property(readonly, nonatomic) BOOL passwordAndVerifyTextFieldsMatch;
- (void)showSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showUnableToSetPasswordAlert;
- (void)showEnterAPasswordAlert;
- (void)showOldPasswordIsNotCorrectAlert;
- (void)showPasswordsDoNotMatchAlert;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (BOOL)validateInput;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setUpNavigationBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

