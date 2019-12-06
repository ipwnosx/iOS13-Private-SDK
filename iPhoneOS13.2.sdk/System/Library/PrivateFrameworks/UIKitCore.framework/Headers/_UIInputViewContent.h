//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIInputView;

__attribute__((visibility("hidden")))
@interface _UIInputViewContent : UIView
{
    double _contentHeight;
    double _contentWidth;
    UIInputView *_inputView;
    NSUInteger _unclippableCorners;
}

@property(nonatomic) NSUInteger _unclippableCorners; // @synthesize _unclippableCorners;
- (void)_updateCornerClipping;
- (CGSize)_contentSize;
- (void)addSubview:(id)arg1;
- (CGSize)_sizeFittingContentViews;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (BOOL)_isToolbar;
- (id)initWithFrame:(CGRect)arg1 inputView:(id)arg2;

@end

