//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, PKDrawing, PKSelectionController, PKSpaceInsertionView, PKStroke, PKStrokeSelection, UIImageView, UIPanGestureRecognizer, UIView;

@interface PKSpaceInsertionController : NSObject
{
    NSMutableOrderedSet *_strokesBelow;
    NSMutableOrderedSet *_strokesAbove;
    UIView *_tapToDismissView;
    PKSpaceInsertionView *_topInsertionView;
    PKSpaceInsertionView *_bottomInsertionView;
    CGPoint _beginDragLocation;
    CGPoint _initialViewLocation;
    UIPanGestureRecognizer *_dragTopLollipopGR;
    UIPanGestureRecognizer *_dragBottomLollipopGR;
    PKStrokeSelection *_bottomStrokeSelection;
    PKStrokeSelection *_topStrokeSelection;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    BOOL _topHandleRemovesWhitespace;
    BOOL _isCurrentlyAddingSpace;
    BOOL _didMoveStrokes;
    PKStroke *_lassoStroke;
    PKDrawing *_drawing;
    PKSelectionController *_selectionController;
}

@property(readonly, nonatomic) BOOL didMoveStrokes; // @synthesize didMoveStrokes=_didMoveStrokes;
@property(readonly, nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(nonatomic) BOOL isCurrentlyAddingSpace; // @synthesize isCurrentlyAddingSpace=_isCurrentlyAddingSpace;
// - (void).cxx_destruct;
- (double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2;
- (id)_visibleStrokesOnPage:(id)arg1;
- (void)_blitStrokesToViewForSpaceInsertionType:(NSUInteger)arg1;
- (void)initTopAndBottomSelectionIfNecessary;
- (void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(NSUInteger)arg2;
- (void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(NSUInteger)arg2;
- (void)_sortStrokesAboveOrBelow;
- (void)_didEndCreatingSpace;
- (void)projectPath:(CGPathRef)arg1 toEndOfFrame:(CGRect)arg2;
- (void)_addSpacingViewsWithFrame:(CGRect)arg1;
- (void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (void)_layoutViewsIfNecessary;
- (void)dismissSpacingResizeHandles;
- (void)commitSpacingResize;
- (void)_dragLollipop:(id)arg1;
- (double)_initalBufferBetweenLollipops;
- (void)didScroll:(CGPoint)arg1;
- (id)initWithSelectionController:(id)arg1;

@end

