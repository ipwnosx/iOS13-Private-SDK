//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIBarButtonItem, UITextView;

@interface _PXConsoleViewController : UIViewController
{
    BOOL _toolBarWasHidden;
    UITextView *__textView;
    UIBarButtonItem *__shareBarButtonItem;
}

@property(readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem; // @synthesize _shareBarButtonItem=__shareBarButtonItem;
@property(nonatomic) BOOL toolBarWasHidden; // @synthesize toolBarWasHidden=_toolBarWasHidden;
// - (void).cxx_destruct;
- (void)_presentSharingViewController:(id)arg1;
@property(readonly, nonatomic) UITextView *_textView; // @synthesize _textView=__textView;
- (void)appendOutput:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)init;

@end

