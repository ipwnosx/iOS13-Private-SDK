//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, UIColor, UITextView;
@protocol SKUIEditorTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEditorTemplateView : SKUIViewReuseView <UITextViewDelegate, SKUIViewElementView>
{
    UIColor *_textColor;
    UITextView *_textView;
    CGRect _keyboardFrame;
    BOOL _disabled;
    double _bottomInset;
    id <SKUIEditorTemplateViewDelegate> _delegate;
}

+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) __weak id <SKUIEditorTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
// - (void).cxx_destruct;
- (id)_textFromViewElement:(id)arg1;
- (void)_reloadSubviews;
@property(readonly, nonatomic) NSString *text;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

