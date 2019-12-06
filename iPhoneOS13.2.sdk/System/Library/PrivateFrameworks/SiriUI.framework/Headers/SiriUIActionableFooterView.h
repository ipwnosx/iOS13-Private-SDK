//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class NSString, SiriUIKeyline, SiriUISnippetViewController, UIButton;
@protocol SiriUIActionableFooterViewDelegate;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView
{
    UIButton *_button;
    SiriUIKeyline *_keyline;
    BOOL _hasKeyline;
    SiriUISnippetViewController *_snippetViewController;
    id <SiriUIActionableFooterViewDelegate> _delegate;
}

+ (double)defaultHeight;
@property(nonatomic) BOOL hasKeyline; // @synthesize hasKeyline=_hasKeyline;
@property(nonatomic) __weak id <SiriUIActionableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)snippetViewController;
// - (void).cxx_destruct;
- (UIEdgeInsets)edgeInsets;
- (void)_buttonTapped:(id)arg1;
- (void)setSnippetViewController:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

