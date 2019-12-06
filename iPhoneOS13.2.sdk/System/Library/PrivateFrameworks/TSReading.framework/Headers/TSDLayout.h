//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDAbstractLayout.h>

#import <TSReading/TSDAttachmentLayout-Protocol.h>
#import <TSReading/TSKSearchTarget-Protocol.h>

@class NSMutableSet, NSObject, NSSet, TSDLayoutGeometry;
@protocol TSDInfo;

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget, TSDAttachmentLayout>
{
    NSObject<TSDInfo> *mInfo;
    int mLayoutState;
    CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    CGPoint mBaseCapturedAlignmentFrameOriginForInline;
    CGRect mDirtyRect;
    struct {
        unsigned int position:1;
        unsigned int size:1;
    } mInvalidFlags;
    TSDLayoutGeometry *mBaseGeometry;
    CGRect mInitialBoundsForStandardKnobs;
    CGPoint mCapturedInfoGeometryPositionForInline;
    CGPoint mCapturedAlignmentFrameOriginForInline;
    NSMutableSet *mConnectedLayouts;
    BOOL mHasFinishedIterativePositioning;
    id mIterativePositioningState;
}

+ (id)descendentWrappablesOfLayout:(id)arg1;
@property(readonly, nonatomic) BOOL hasFinishedIterativePositioning; // @synthesize hasFinishedIterativePositioning=mHasFinishedIterativePositioning;
@property(retain, nonatomic) id iterativePositioningState; // @synthesize iterativePositioningState=mIterativePositioningState;
@property(readonly, nonatomic) NSSet *connectedLayouts; // @synthesize connectedLayouts=mConnectedLayouts;
@property(readonly, nonatomic) int layoutState; // @synthesize layoutState=mLayoutState;
@property(readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // @synthesize originalGeometry=mBaseGeometry;
@property(readonly, nonatomic) NSObject<TSDInfo> *info; // @synthesize info=mInfo;
- (void)p_invalidateConnectedLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (void)addConnectedLayout:(id)arg1;
- (BOOL)allowsConnections;
- (CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (CGRect)rectForSelection:(id)arg1;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (void)p_recursiveInvalidate;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)p_registerWithLayoutController:(id)arg1;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (CGRect)i_takeDirtyRect;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
@property(readonly, nonatomic) BOOL attachmentLayoutDisplacedByDropCap;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (BOOL)wantsRoundedInlinePosition;
// - (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary )arg1 columnWidth:(double)arg2;
- (double)inlineCenteredAlignmentOffset;
- (double)inlineVerticalOffset;
- (id)additionalGuides;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shouldDisplayGuides;
- (BOOL)orderedBefore:(id)arg1;
- (CGSize)maximumFrameSizeForChild:(id)arg1;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (CGPoint)calculatePointFromSearchReference:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)searchTarget;
- (void)processChangedProperty:(int)arg1;
- (double)scaleForInlineClampingUnrotatedSize:(CGSize)arg1 withGeometry:(id)arg2;
- (id)computeLayoutGeometry;
- (id)computeInfoGeometryDuringResize;
- (CGPoint)centerForConnecting;
- (CGPoint)centerForRotation;
- (CGRect)boundsForStandardKnobs;
- (void)validateFromLastInterimPosition;
- (BOOL)canFlip;
- (CGAffineTransform)originalPureTransformInRoot;
- (CGAffineTransform)pureTransformInRoot;
- (id)inspectorGeometry;
- (id)pureGeometryInRoot;
- (id)pureGeometry;
- (id)originalPureGeometry;
- (id)initialInfoGeometry;
- (CGRect)initialBoundsForStandardKnobs;
- (BOOL)isBeingManipulated;
- (void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2;
- (CGSize)maximumSizeForChildLayout:(id)arg1;
- (CGSize)minimumSize;
- (void)beginResize;
@property(readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property(readonly, nonatomic) BOOL resizeMayChangeAspectRatio;
- (void)endRotate;
- (void)takeRotationFromTracker:(id)arg1;
- (void)beginRotate;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1;
- (CGAffineTransform)originalTransformForProvidingGuides;
- (CGAffineTransform)originalTransformInRoot;
- (void)endDrag;
- (void)dragBy:(CGPoint)arg1;
- (void)dragByUnscaled:(CGPoint)arg1;
- (void)beginDrag;
- (BOOL)isBeingTransformed;
- (void)pauseDynamicTransformation;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
@property(readonly, nonatomic) BOOL isStrokeBeingManipulated;
- (id)stroke;
- (BOOL)isInTopLevelContainerForEditing;
- (BOOL)isInGroup;
- (BOOL)shouldBeDisplayedInShowMode;
- (CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (Class)repClassOverride;
- (void)processChanges:(id)arg1;
- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;
- (id)layoutGeometryFromInfo;
- (id)layoutGeometryFromProvider;
- (id)i_layoutGeometryProvider;
- (CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
@property(readonly, nonatomic) BOOL invalidGeometry;
- (id)layoutController;
- (id)rootLayout;
- (void)wasRemovedFromLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)wasAddedToLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)setParent:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)invalidateChildren;
- (void)invalidateExteriorWrap;
- (void)invalidateFrame;
- (BOOL)dependentsRelyOnSize;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidate;
- (void)finishIterativePositioning;
- (BOOL)shouldValidate;
@property(copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)setAdjustedInterimPositionY:(double)arg1;
- (void)setAdjustedInterimPositionX:(double)arg1;

@end

