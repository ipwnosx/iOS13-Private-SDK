//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFocusSystem, _UIFocusRegion, _UIFocusRegionContentAttributes, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotter : NSObject
{
    BOOL _snapshotFrameIsEmpty;
    BOOL _clipToSnapshotRect;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFocusRegionContentAttributes *_contentAttributes;
    _UIFocusRegion *_focusedRegion;
    id <_UIFocusRegionContainer> _regionsContainer;
    _UIFocusSearchInfo *_searchInfo;
    CGRect _snapshotFrame;
}

@property(nonatomic) BOOL clipToSnapshotRect; // @synthesize clipToSnapshotRect=_clipToSnapshotRect;
@property(nonatomic) CGRect snapshotFrame; // @synthesize snapshotFrame=_snapshotFrame;
@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <_UIFocusRegionContainer> regionsContainer; // @synthesize regionsContainer=_regionsContainer;
@property(copy, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property(readonly, copy, nonatomic) _UIFocusRegionContentAttributes *contentAttributes; // @synthesize contentAttributes=_contentAttributes;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
// - (void).cxx_destruct;
- (id)captureSnapshot;
- (id)_searchAreaForContainerSearchRect:(CGRect)arg1;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4;
- (id)init;

@end

