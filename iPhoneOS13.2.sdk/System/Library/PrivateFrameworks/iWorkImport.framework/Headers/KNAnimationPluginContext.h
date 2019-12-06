//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/KNAnimationPluginContext-Protocol.h>

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, NSString, TSDAnimationSet, TSDGLState, TSDMetalContext, TSDMetalTextureRenderer, TSDRep;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    BOOL _isMotionBlurred;
    BOOL _isPreview;
    BOOL _isMovieExport;
    BOOL _isWarmingUp;
    NSArray *_textures;
    TSDMetalTextureRenderer *_metalTextureRenderer;
    TSDAnimationSet *_animationSet;
    NSArray *_scaledTextures;
    NSArray *_tags;
    NSUInteger _direction;
    double _duration;
    double _percent;
    KNAnimatedBuild *_animatedBuild;
    NSDictionary *_transitionAttributes;
    NSArray *_magicMoveMatches;
    TSDGLState *_GLState;
    TSDMetalContext *_metalContext;
    TSDRep *_rep;
    long long _rendererType;
    KNAnimationRandomGenerator *_randomGenerator;
    CGRect _boundingRectOnCanvas;
    CGRect _boundingRect;
    CGRect _drawableFrame;
    CGRect _animationFrame;
}

@property(retain, nonatomic) KNAnimationRandomGenerator *randomGenerator; // @synthesize randomGenerator=_randomGenerator;
@property(nonatomic) long long rendererType; // @synthesize rendererType=_rendererType;
@property(nonatomic) __weak TSDRep *rep; // @synthesize rep=_rep;
@property(nonatomic) BOOL isWarmingUp; // @synthesize isWarmingUp=_isWarmingUp;
@property(nonatomic) CGRect animationFrame; // @synthesize animationFrame=_animationFrame;
@property(nonatomic) CGRect drawableFrame; // @synthesize drawableFrame=_drawableFrame;
@property(retain, nonatomic) TSDMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) BOOL isMovieExport; // @synthesize isMovieExport=_isMovieExport;
@property(nonatomic) BOOL isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) __weak NSArray *magicMoveMatches; // @synthesize magicMoveMatches=_magicMoveMatches;
@property(nonatomic) __weak NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(nonatomic) __weak KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
@property(nonatomic) CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) CGRect boundingRectOnCanvas; // @synthesize boundingRectOnCanvas=_boundingRectOnCanvas;
@property(nonatomic) BOOL isMotionBlurred; // @synthesize isMotionBlurred=_isMotionBlurred;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *scaledTextures; // @synthesize scaledTextures=_scaledTextures;
@property(retain, nonatomic) TSDAnimationSet *animationSet; // @synthesize animationSet=_animationSet;
@property(retain, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer; // @synthesize metalTextureRenderer=_metalTextureRenderer;
@property(retain, nonatomic) NSArray *textures; // @synthesize textures=_textures;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasLiveTextureSources;
@property(readonly, nonatomic) BOOL isMetalRenderer;
@property(readonly, nonatomic) BOOL isOpenGLRenderer;
@property(readonly, nonatomic) BOOL isFrameRenderer;
@property(readonly, nonatomic) BOOL isMagicMove;
@property(readonly, nonatomic) BOOL isTransition;
@property(readonly, nonatomic) BOOL isBuild;

@end

