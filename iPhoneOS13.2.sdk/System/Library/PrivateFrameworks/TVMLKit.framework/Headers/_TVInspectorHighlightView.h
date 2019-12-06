//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UILabel, UIWindow, _TVInspectorHighlightMetadataView;

@interface _TVInspectorHighlightView : UIView
{
    UIView *_highlightView;
    _TVInspectorHighlightMetadataView *_metadataView;
    UIWindow *_targetWindow;
    UIColor *_borderColor;
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) __weak UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)highlightView:(id)arg1;
@property(retain, nonatomic) UIColor *contentColor;
@property(readonly, nonatomic) UILabel *descriptionLabel;
- (id)initWithFrame:(CGRect)arg1;

@end

