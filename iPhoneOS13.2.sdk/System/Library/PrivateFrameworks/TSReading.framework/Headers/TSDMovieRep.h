//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>
#import <TSReading/TSKAVPlayerControllerDelegate-Protocol.h>

@class AVAsset, AVPlayerLayer, CALayer, TSDButtonKnob, TSDFrameRep, TSDMovieInfo, TSKAVPlayerController;

@interface TSDMovieRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDTilingLayerDelegate>
{
    TSKAVPlayerController *mPlayerController;
    BOOL mCurrentlyObservingPlayerLayer;
    BOOL mPlayerLayerShouldBeDisplayed;
    AVPlayerLayer *mPlayerLayer;
    CALayer *mLayerToStroke;
    CALayer *mMovieReflectionLayer;
    CALayer *mMovieReflectionMaskLayer;
    AVPlayerLayer *mReflectionPlayerLayer;
    CALayer *mReflectionPlayerStrokeMaskLayer;
    BOOL mPreventDisposeOfPlayerLayer;
    CALayer *mPlayerStrokeLayer;
    CALayer *mReflectionPlayerStrokeLayer;
    TSDFrameRep *mReflectionFrameRep;
    CALayer *mReflectionFrameMaskLayer;
    AVAsset *mAssetForPlayability;
    BOOL mDidCheckPlayability;
    BOOL mIsPlayable;
    TSDButtonKnob *mPlayButtonKnob;
    BOOL mPlayButtonKnobVisible;
    BOOL mDidCancelUpdatingPlayButtonVisibility;
    BOOL mInReadMode;
    CGImageRef mAlternatePosterImage;
    NSUInteger mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
    BOOL mNeedsTeardownPlayerController;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
@property(nonatomic) CGImageRef alternatePosterImage; // @synthesize alternatePosterImage=mAlternatePosterImage;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable; // @synthesize playable=mIsPlayable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidBegin;
@property(readonly, nonatomic) float volume;
- (void)dynamicVisibleTimeChangeDidEnd;
- (void)dynamicVisibleTimeUpdateToValue:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dynamicVisibleTimeChangeDidBegin;
@property(readonly, nonatomic) double visibleTime;
- (BOOL)isDraggable;
- (BOOL)canResetMediaSize;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (void)p_updateEndTime;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)p_teardownPlayerControllerIfNeeded;
- (void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
- (void)p_teardownPlayerController;
- (void)p_setupPlayerControllerIfNecessary;
- (BOOL)p_shouldPlayerControllerExistThroughoutSelection;
- (void)p_togglePlaying;
- (void)p_playForKnob;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (id)playerController;
- (void)p_updatePlayButtonVisibility;
@property(readonly, nonatomic) BOOL p_playButtonFitsInFrame;
- (void)p_cancelUpdatingUIStateForMoviePlayability;
- (void)p_stopUpdatingUIStateForMoviePlayability;
- (void)p_updateUIStateForMoviePlayability;
@property(readonly, nonatomic) TSDButtonKnob *p_playButtonKnob;
- (BOOL)shouldShowMediaReplaceUI;
- (void)willEndReadMode;
- (void)willBeginReadMode;
- (void)willBeRemoved;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
- (NSUInteger)enabledKnobMask;
- (void)addKnobsToArray:(id)arg1;
- (void)p_addPlayButtonToKnobs:(id)arg1;
- (void)screenScaleDidChange;
- (void)p_updateRepeatMode;
- (BOOL)handleSingleTapAtPoint:(CGPoint)arg1;
- (BOOL)wantsToHandleTapsWhenLocked;
@property(readonly, nonatomic) BOOL shouldSingleTapPlay;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)processChangedProperty:(int)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawInLayerContext:(CGContextRef )arg1;
- (void)drawInContextWithoutEffects:(CGContextRef )arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)p_drawInContext:(CGContextRef )arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 forShadowOrHitTest:(BOOL)arg6;
- (void)p_drawPosterImageInContext:(CGContextRef )arg1;
- (void)p_updateMovieReflectionMaskLayer;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(CGContextRef )arg1 reflectionSize:(CGSize)arg2;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_applyBasicStrokeToLayer:(id)arg1 layer:(id)arg2 bounds:(CGRect)arg3;
- (void)p_drawStrokeInContext:(CGContextRef )arg1;
- (void)p_drawReflectionStrokeInContext:(CGContextRef )arg1;
- (void)p_commonDrawStrokeInContext:(CGContextRef )arg1;
- (void)i_updateFrameRep;
- (void)p_updateReflectionFrameRep;
- (void)updateFromLayout;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)p_placeReflectionPlayerLayer:(CGRect)arg1 transform:(CGAffineTransform)arg2;
- (void)p_setPositionAndBoundsIfDifferent:(id)arg1 position:(CGPoint)arg2 bounds:(CGRect)arg3;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)p_arrangeLayerVisibility:(id)arg1;
- (CGRect)p_strokeFrameForLayerFrame:(CGRect)arg1;
- (void)p_setupStrokeLayers:(BOOL)arg1 needsMaskLayer:(BOOL)arg2 isFrame:(BOOL)arg3;
- (void)p_checkAndsyncTilingLayerState:(BOOL)arg1;
- (void)p_setupPlayerStrokeLayers:(BOOL)arg1;
- (BOOL)p_needsTilingLayerForStroke:(id)arg1;
- (void)setShapeReflectionPlayerStrokeLayer:(id)arg1;
- (void)p_setupTilingReflectionPlayerStrokeLayer;
- (void)p_setupShapeReflectionPlayerStrokeLayer;
- (id)reflectionPlayerStrokeLayer;
- (id)p_tilingLayerForReflectionStroke;
- (id)p_shapeLayerForReflectionStroke;
- (void)p_setupShapePlayerStrokeLayer;
- (void)p_setupTilingPlayerStrokeLayer;
- (id)playerStrokeLayer;
- (id)p_tilingLayerForPlayerStroke;
- (id)p_shapeLayerForPlayerStroke;
- (void)drawLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (void)p_setupPlayerLayerIfNecessary;
- (void)p_setupReflectionPlayerLayerIfNecessary;
- (void)createReflectionLayer;
- (void)disposeReflectionLayer;
- (void)p_showReflectionLayer;
- (void)p_hideReflectionLayer;
- (void)p_disposeReflectionStrokeLayers;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (void)p_createReflectionPlayerStrokeMaskLayer;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)dealloc;
- (id)movieLayout;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

