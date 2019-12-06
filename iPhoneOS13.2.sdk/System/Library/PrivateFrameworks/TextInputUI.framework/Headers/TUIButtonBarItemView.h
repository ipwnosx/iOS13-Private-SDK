//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, _UIButtonBarButton;

@interface TUIButtonBarItemView : UIView
{
    BOOL _collapsedItem;
    UIBarButtonItem *_associatedItem;
    UIBarButtonItemGroup *_associatedGroup;
    _UIButtonBarButton *_barButtonView;
    UIView *_customView;
}

@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) _UIButtonBarButton *barButtonView; // @synthesize barButtonView=_barButtonView;
@property(retain, nonatomic) UIBarButtonItemGroup *associatedGroup; // @synthesize associatedGroup=_associatedGroup;
@property(retain, nonatomic) UIBarButtonItem *associatedItem; // @synthesize associatedItem=_associatedItem;
@property(nonatomic, getter=isCollapsedItem) BOOL collapsedItem; // @synthesize collapsedItem=_collapsedItem;
// - (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *contentView;

@end

