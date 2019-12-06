//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>

@class NSArray;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>
{
    BOOL _isFocusEnvironment;
    id <UIFocusItemContainer> _itemContainer;
}

@property(nonatomic) BOOL isFocusEnvironment; // @synthesize isFocusEnvironment=_isFocusEnvironment;
@property(retain, nonatomic) id <UIFocusItemContainer> itemContainer; // @synthesize itemContainer=_itemContainer;
// - (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_preferredFocusRegionCoordinateSpace;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (id)_focusEnvironment;
- (id)initWithItemContainer:(id)arg1;

@end

