//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, NSString, UITextView;

@interface _CARLearnMoreViewController : UIViewController
{
    NSString *_resourcePath;
    UITextView *_textView;
    NSLayoutConstraint *_bottomMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)_configureLearnMoreView;
- (id)initWithContentsOfResource:(id)arg1 ofType:(id)arg2;

@end

