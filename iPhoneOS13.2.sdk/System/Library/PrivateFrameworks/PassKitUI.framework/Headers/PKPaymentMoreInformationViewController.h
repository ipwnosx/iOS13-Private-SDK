//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSString, PKBusinessChatController, UIButton, UILabel, UIScrollView, UITextView;
@protocol PKPaymentMoreInformationViewControllerDelegate;

@interface PKPaymentMoreInformationViewController : UIViewController <UITextViewDelegate>
{
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextView *_detailTextView;
    UIButton *_businessChatButton;
    PKBusinessChatController *_businessChatController;
    long long _context;
    id <PKPaymentMoreInformationViewControllerDelegate> _delegate;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailBody;
    NSString *_businessChatButtonTitle;
    NSString *_businessChatIdentifier;
    NSString *_businessChatIntentName;
}

@property(copy, nonatomic) NSString *businessChatIntentName; // @synthesize businessChatIntentName=_businessChatIntentName;
@property(copy, nonatomic) NSString *businessChatIdentifier; // @synthesize businessChatIdentifier=_businessChatIdentifier;
@property(copy, nonatomic) NSString *businessChatButtonTitle; // @synthesize businessChatButtonTitle=_businessChatButtonTitle;
@property(copy, nonatomic) NSString *detailBody; // @synthesize detailBody=_detailBody;
@property(copy, nonatomic) NSString *detailSubtitle; // @synthesize detailSubtitle=_detailSubtitle;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(nonatomic) id <PKPaymentMoreInformationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange *)arg3 interaction:(long long)arg4;
- (BOOL)_shouldShowBusinessChatButton;
- (void)_businessChatButtonTapped;
- (void)doneButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithContext:(long long)arg1;

@end

