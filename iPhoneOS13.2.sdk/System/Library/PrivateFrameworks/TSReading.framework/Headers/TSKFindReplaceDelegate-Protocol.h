//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, TSKFindReplaceController, TSKSelection;
@protocol TSKSearchReference;

@protocol TSKFindReplaceDelegate <NSObject>
- (NSRange *)visibleRootIndexRange;
- (void)setSelection:(TSKSelection *)arg1 onModel:(NSObject *)arg2 withFlags:(NSUInteger)arg3;

@optional
- (BOOL)findReplaceController:(TSKFindReplaceController *)arg1 shouldSkipSearchReference:(id <TSKSearchReference>)arg2;
- (void)findReplaceControllerDidFindNoResults:(TSKFindReplaceController *)arg1;
- (void)findReplaceController:(TSKFindReplaceController *)arg1 didWrapInDirection:(NSUInteger)arg2;
- (void)willScrollToReference:(id <TSKSearchReference>)arg1;
@end

