//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray, UIResponder;
@protocol SKUIComposeTextFieldListViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeTextFieldListView : UIView
{
    id <SKUIComposeTextFieldListViewDelegate> _delegate;
    NSMutableArray *_fields;
    BOOL _isValid;
    long long _style;
}

@property(nonatomic) __weak id <SKUIComposeTextFieldListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
// - (void).cxx_destruct;
- (void)_updateValidity;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (id)textForFieldAtIndex:(NSUInteger)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (BOOL)isValid;
@property(readonly, nonatomic) UIResponder *initialFirstResponder;
@property(readonly, nonatomic) double height;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;

@end

