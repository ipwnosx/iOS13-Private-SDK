//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>


@class TUIPredictionCellButton, UIScrollView;
@protocol TUISystemInputAssistantPageViewDelegate;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate>
{
    NSUInteger _currentChevronStyle;
    BOOL _hidesExpandButton;
    BOOL _secondaryViewVisible;
    UIView *_primaryView;
    UIView *_secondaryView;
    TUIPredictionCellButton *_expandButton;
    id <TUISystemInputAssistantPageViewDelegate> _pageViewDelegate;
    UIView *_clipView;
    UIView *_primaryContainerView;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *primaryContainerView; // @synthesize primaryContainerView=_primaryContainerView;
@property(retain, nonatomic) UIView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) BOOL secondaryViewVisible; // @synthesize secondaryViewVisible=_secondaryViewVisible;
@property(nonatomic) __weak id <TUISystemInputAssistantPageViewDelegate> pageViewDelegate; // @synthesize pageViewDelegate=_pageViewDelegate;
@property(readonly, nonatomic) TUIPredictionCellButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) BOOL hidesExpandButton; // @synthesize hidesExpandButton=_hidesExpandButton;
@property(retain, nonatomic) UIView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
// - (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (CGSize)_contentSize;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)_checkOldBounds:(CGRect)arg1 forContentOffsetChangeWithNewBounds:(CGRect)arg2;
- (void)setSecondaryViewVisible:(BOOL)arg1 withAnimationType:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSecondaryViewVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_createExpandButtonIfNecessary;
- (id)imageSymbolConfigurationForAssistantItem;
- (void)_updateExpandButtonChevronImage;
- (NSUInteger)_expandChevronImageStyleForRenderConfig:(id)arg1;
- (BOOL)_expandButtonVisible;
- (void)_setRenderConfig:(id)arg1;
- (void)updateScrollEnabled;
- (id)initWithFrame:(CGRect)arg1;

@end

