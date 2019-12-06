//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate>
{
    NSString *_placeholderText;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
// - (void).cxx_destruct;
- (void)updatePlaceholderText:(BOOL)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
@property(readonly, copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

