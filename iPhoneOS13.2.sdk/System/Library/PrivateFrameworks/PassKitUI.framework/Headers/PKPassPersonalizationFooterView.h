//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class UITextView;
@protocol PKPassPersonalizationFooterViewDelegate;

@interface PKPassPersonalizationFooterView : UIView <UITextViewDelegate>
{
    UITextView *_privacyTextView;
    id <PKPassPersonalizationFooterViewDelegate> _delegate;
}

@property(nonatomic) id <PKPassPersonalizationFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange *)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithOrganizationName:(id)arg1 delegate:(id)arg2;

@end

