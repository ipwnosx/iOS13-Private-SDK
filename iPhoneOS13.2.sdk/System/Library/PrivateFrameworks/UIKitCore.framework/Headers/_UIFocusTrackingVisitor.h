//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewVisitor.h>

__attribute__((visibility("hidden")))
@interface _UIFocusTrackingVisitor : _UIViewVisitor
{
    BOOL _subviewAddedToHierarchy;
    NSUInteger _countOfFocusedAncestorTrackingViewsInSubtree;
}

- (BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (BOOL)_visitView:(id)arg1;

@end
