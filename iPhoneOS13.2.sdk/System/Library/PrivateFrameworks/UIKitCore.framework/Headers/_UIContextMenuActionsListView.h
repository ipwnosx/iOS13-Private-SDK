//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIFont, UIInterfaceActionGroupView, UIMenu;
@protocol _UIContextMenuActionsListViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsListView : UIView
{
    UIFont *_labelFont;
    BOOL _surfacesActionRadius;
    BOOL _showsTitle;
    BOOL _reversesActionOrder;
    id <_UIContextMenuActionsListViewDelegate> _delegate;
    UIMenu *_displayedMenu;
    UIInterfaceActionGroupView *_currentActionGroupView;
}

@property(retain, nonatomic) UIInterfaceActionGroupView *currentActionGroupView; // @synthesize currentActionGroupView=_currentActionGroupView;
@property(copy, nonatomic) UIMenu *displayedMenu; // @synthesize displayedMenu=_displayedMenu;
@property(nonatomic) BOOL reversesActionOrder; // @synthesize reversesActionOrder=_reversesActionOrder;
@property(nonatomic) BOOL showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) BOOL surfacesActionRadius; // @synthesize surfacesActionRadius=_surfacesActionRadius;
@property(nonatomic) __weak id <_UIContextMenuActionsListViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_testing_tapAnAction;
- (double)_clampedCornerRadiusForGroupView:(id)arg1;
- (void)_performActionForPreviewAction:(id)arg1;
- (id)_reversedActionGroupForActionGroup:(id)arg1;
- (id)_loadingInterfaceAction;
- (id)_interfaceActionGroupForActions:(id)arg1;
- (void)setDisplayedMenu:(id)arg1 withAnimationStyle:(NSUInteger)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_labelFont;
- (void)kickstartActionScrubbingWithGesture:(id)arg1;
- (id)initWithMenu:(id)arg1;

@end

