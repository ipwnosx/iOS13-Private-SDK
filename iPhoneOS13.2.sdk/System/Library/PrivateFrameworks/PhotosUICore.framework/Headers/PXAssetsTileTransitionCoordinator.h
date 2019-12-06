//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileTransitionAnimationCoordinator-Protocol.h>

@class NSArray, NSIndexSet, PXAssetsTilingLayout, PXBasicTileAnimationOptions, PXSectionedChangeDetailsRepository, PXTilingChange;

@interface PXAssetsTileTransitionCoordinator : NSObject <PXTileTransitionAnimationCoordinator>
{
    BOOL _treatRemovalsAsDeletes;
    BOOL _delayInsertions;
    BOOL __shouldCrossfade;
    PXTilingChange *__tilingChange;
    PXBasicTileAnimationOptions *__basicAnimationOptions;
    PXSectionedChangeDetailsRepository *__changeHistory;
    NSArray *__changeDetails;
    NSIndexSet *__kindsWithDisabledAnimation;
    NSIndexSet *__kindsCoveringContentTiles;
    NSIndexSet *__kindsCenteredOnContentTiles;
    PXAssetsTilingLayout *__fromLayout;
    PXAssetsTilingLayout *__toLayout;
}

+ (id)transitionCoordinatorForChange:(id)arg1 changeHistory:(id)arg2;
@property(readonly, nonatomic) PXAssetsTilingLayout *_toLayout; // @synthesize _toLayout=__toLayout;
@property(readonly, nonatomic) PXAssetsTilingLayout *_fromLayout; // @synthesize _fromLayout=__fromLayout;
@property(readonly, nonatomic) NSIndexSet *_kindsCenteredOnContentTiles; // @synthesize _kindsCenteredOnContentTiles=__kindsCenteredOnContentTiles;
@property(readonly, nonatomic) NSIndexSet *_kindsCoveringContentTiles; // @synthesize _kindsCoveringContentTiles=__kindsCoveringContentTiles;
@property(readonly, nonatomic) NSIndexSet *_kindsWithDisabledAnimation; // @synthesize _kindsWithDisabledAnimation=__kindsWithDisabledAnimation;
@property(readonly, nonatomic) NSArray *_changeDetails; // @synthesize _changeDetails=__changeDetails;
@property(readonly, nonatomic) PXSectionedChangeDetailsRepository *_changeHistory; // @synthesize _changeHistory=__changeHistory;
@property(readonly, nonatomic) BOOL _shouldCrossfade; // @synthesize _shouldCrossfade=__shouldCrossfade;
@property(readonly, nonatomic) PXBasicTileAnimationOptions *_basicAnimationOptions; // @synthesize _basicAnimationOptions=__basicAnimationOptions;
@property(readonly, nonatomic) PXTilingChange *_tilingChange; // @synthesize _tilingChange=__tilingChange;
@property(nonatomic) BOOL delayInsertions; // @synthesize delayInsertions=_delayInsertions;
@property(nonatomic) BOOL treatRemovalsAsDeletes; // @synthesize treatRemovalsAsDeletes=_treatRemovalsAsDeletes;
// - (void).cxx_destruct;
- (void)enableAnimationsForTileKind:(NSUInteger)arg1;
- (void)disableAnimationsForTileKind:(NSUInteger)arg1;
//  (BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
//  (BOOL)getFinalGeometry:(out struct PXTileGeometry )arg1 finalUserData:(out id )arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
//  (BOOL)getInitialGeometry:(out struct PXTileGeometry )arg1 initialUserData:(out id )arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
//  (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (id)initWithTilingChange:(id)arg1 changeHistory:(id)arg2;

@end

