//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TSDRep, TSUNoCopyDictionary;

@interface TSDTextureSet : NSObject <NSCopying>
{
    CGPoint mCenter;
    CGRect mBounds;
    CGPoint mOriginalPosition;
    BOOL mIsBaked;
    BOOL mShouldIncludeFinalTexturesInVisibleSet;
    BOOL mShouldTransformUsingTextureCenter;
    NSUInteger mChunkCount;
    NSMutableArray *mTextures;
    NSMutableArray *mAllTextures;
    TSUNoCopyDictionary *mStageIndexForTexture;
    NSMutableDictionary *mFinalTextureForStage;
    NSMutableDictionary *mBoundingRectForStage;
    NSMutableDictionary *mContentRectForStage;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    NSDictionary *mBakedAttributes;
    NSRange * mActiveChunkIndices;
    CALayer *mLayer;
    BOOL mIsMagicMove;
    double mTextureOpacity;
    CGRect mTextureContentRect;
    double mTextureAngle;
    long long mTextureZOrder;
    BOOL mIsBackground;
    CALayer *mAlternateLayer;
    TSDRep *mRep;
    CGColorSpaceRef mColorSpace;
    long long mMaxStageIndex;
    long long _stageIndex;
}

@property(readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property TSDRep *rep; // @synthesize rep=mRep;
@property(nonatomic) long long textureZOrder; // @synthesize textureZOrder=mTextureZOrder;
@property(nonatomic) double textureOpacity; // @synthesize textureOpacity=mTextureOpacity;
@property(nonatomic) double textureAngle; // @synthesize textureAngle=mTextureAngle;
@property(nonatomic) CGRect textureContentRect; // @synthesize textureContentRect=mTextureContentRect;
@property(nonatomic) BOOL shouldTransformUsingTextureCenter; // @synthesize shouldTransformUsingTextureCenter=mShouldTransformUsingTextureCenter;
@property(nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; // @synthesize shouldIncludeFinalTexturesInVisibleSet=mShouldIncludeFinalTexturesInVisibleSet;
@property(nonatomic) CGPoint originalPosition; // @synthesize originalPosition=mOriginalPosition;
@property(readonly, nonatomic) long long maxStageIndex; // @synthesize maxStageIndex=mMaxStageIndex;
@property(nonatomic) BOOL isMagicMove; // @synthesize isMagicMove=mIsMagicMove;
@property(nonatomic) BOOL isBaked; // @synthesize isBaked=mIsBaked;
@property(nonatomic) BOOL isBackground; // @synthesize isBackground=mIsBackground;
@property(retain, nonatomic) NSDictionary *contentRectForStage; // @synthesize contentRectForStage=mContentRectForStage;
@property(nonatomic) CGColorSpaceRef colorSpace; // @synthesize colorSpace=mColorSpace;
@property(readonly, nonatomic) NSUInteger chunkCount; // @synthesize chunkCount=mChunkCount;
@property(nonatomic) CGPoint center; // @synthesize center=mCenter;
@property(retain, nonatomic) NSDictionary *boundingRectForStage; // @synthesize boundingRectForStage=mBoundingRectForStage;
@property(readonly, nonatomic) CGRect boundingRect; // @synthesize boundingRect=mBounds;
@property(retain, nonatomic) CALayer *alternateLayer; // @synthesize alternateLayer=mAlternateLayer;
@property(readonly, nonatomic) NSArray *allTextures; // @synthesize allTextures=mAllTextures;
- (id)description;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(CGSize)arg2;
@property(readonly, nonatomic) BOOL isRenderable;
- (void)renderIntoContext:(CGContextRef )arg1;
@property(readonly, nonatomic) CGRect frame;
- (void)setContentRect:(CGRect)arg1 forStage:(long long)arg2;
- (void)setBoundingRect:(CGRect)arg1 forStage:(long long)arg2;
- (BOOL)isBackgroundTexture:(id)arg1;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(BOOL)arg3 shouldBake:(BOOL)arg4 applyScaleOnly:(BOOL)arg5 ignoreScale:(BOOL)arg6 shouldCheckActionKeys:(BOOL)arg7;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2;
- (void)p_resetAttributesWithViewScale:(double)arg1;
- (void)resetAnchorPoint;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (void)setLayerGeometryFromRep:(id)arg1;
- (void)hideLayersOfFinalTextures;
- (id)finalTextureForStage:(long long)arg1 reverse:(BOOL)arg2;
- (long long)stageIndexForTexture:(id)arg1;
- (id)newFlattenedTexture;
- (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(CGRect)arg2;
- (id)firstVisibleTextureForTextureType:(int)arg1;
- (void)removeRenderable:(id)arg1;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(BOOL)arg2 shouldFlatten:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *visibleTextures;
- (void)renderLayerContentsIfNeeded;
- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(BOOL)arg3;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)addRenderable:(id)arg1;
- (CGRect)contentRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2;
- (CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2;
@property(readonly, nonatomic) CALayer *layer;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (void)teardown;
- (id)init;

@end

