//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTextTokenTextField.h>


@class UIImageView;

@interface WFVariableField : WFTextTokenTextField <UITextFieldDelegate>
{
    UIImageView *_pillImageView;
}

// - (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

