//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSSet, NSString, WFTextTokenTextField;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberField : UIView <UITextFieldDelegate>
{
    BOOL _allowsDecimalNumbers;
    BOOL _allowsNegatingNumbers;
    id /* CDUnknownBlockType */ _doneBlock;
    id /* CDUnknownBlockType */ _updateBlock;
    id /* CDUnknownBlockType */ _variableBlock;
    WFTextTokenTextField *_textField;
}

@property(nonatomic) __weak WFTextTokenTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) id /* CDUnknownBlockType */ variableBlock; // @synthesize variableBlock=_variableBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ doneBlock; // @synthesize doneBlock=_doneBlock;
@property(nonatomic) BOOL allowsNegatingNumbers; // @synthesize allowsNegatingNumbers=_allowsNegatingNumbers;
@property(nonatomic) BOOL allowsDecimalNumbers; // @synthesize allowsDecimalNumbers=_allowsDecimalNumbers;
// - (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (void)textDidChange;
- (BOOL)becomeFirstResponder;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider;
@property(copy, nonatomic) NSSet *allowedVariableTypes;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *placeholder;
@property(nonatomic, getter=isEditable) BOOL editable;
@property(copy, nonatomic) NSString *text;
- (void)negateText;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

