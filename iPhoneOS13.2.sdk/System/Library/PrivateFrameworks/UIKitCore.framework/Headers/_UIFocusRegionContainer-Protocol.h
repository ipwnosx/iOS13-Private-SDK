//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>

@class _UIFocusRegion;
@protocol UICoordinateSpace, UIFocusItem, _UIFocusRegionSearchContext;

@protocol _UIFocusRegionContainer <_UIFocusEnvironmentPrivate>
- (_UIFocusRegion *)_regionForFocusedItem:(id <UIFocusItem>)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)_searchForFocusRegionsInContext:(id <_UIFocusRegionSearchContext>)arg1;
- (id <UICoordinateSpace>)_preferredFocusRegionCoordinateSpace;
@end

