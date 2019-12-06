//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileTransitionAnimationCoordinator-Protocol.h>

@class PXBasicTileAnimationOptions;

@interface PXPhotosDetailsHeaderTileTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>
{
    PXBasicTileAnimationOptions *__basicAnimationOptions;
}

@property(readonly, nonatomic) PXBasicTileAnimationOptions *_basicAnimationOptions; // @synthesize _basicAnimationOptions=__basicAnimationOptions;
// - (void).cxx_destruct;
//  (BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
//  (BOOL)getFinalGeometry:(out struct PXTileGeometry )arg1 finalUserData:(out id )arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
//  (BOOL)getInitialGeometry:(out struct PXTileGeometry )arg1 initialUserData:(out id )arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
//  (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (id)init;

@end

