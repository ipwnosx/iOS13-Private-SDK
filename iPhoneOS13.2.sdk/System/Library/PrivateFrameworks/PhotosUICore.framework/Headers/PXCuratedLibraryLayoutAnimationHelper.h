//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAnimationDelegate-Protocol.h>

@class NSDictionary, PXCuratedLibraryLayout;

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject <PXGAnimationDelegate>
{
    BOOL _wantsPresentationAdjustment;
    BOOL _wantsAnimationWithSpriteTransfer;
    NSDictionary *_userData;
    PXCuratedLibraryLayout *_layout;
}

+ (id)createTransitionIfNeededForLayout:(id)arg1 context:(long long)arg2;
+ (id)createAnimationIfNeededForLayout:(id)arg1 context:(long long)arg2 userData:(id)arg3;
@property(readonly, nonatomic) BOOL wantsAnimationWithSpriteTransfer; // @synthesize wantsAnimationWithSpriteTransfer=_wantsAnimationWithSpriteTransfer;
@property(readonly, nonatomic) BOOL wantsPresentationAdjustment; // @synthesize wantsPresentationAdjustment=_wantsPresentationAdjustment;
@property(readonly) __weak PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
// - (void).cxx_destruct;
// - (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 )arg2 styles:(inout CDStruct_506f5052 )arg3 infos:(inout CDStruct_9d1ebe49 )arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
// - (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 )arg2 styles:(inout CDStruct_506f5052 )arg3 infos:(inout CDStruct_9d1ebe49 )arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3;
@property(readonly, nonatomic) BOOL wantsDoubleSidedAnimations;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) long long animationCurve;
- (id)initWithLayout:(id)arg1;
- (id)init;

@end

