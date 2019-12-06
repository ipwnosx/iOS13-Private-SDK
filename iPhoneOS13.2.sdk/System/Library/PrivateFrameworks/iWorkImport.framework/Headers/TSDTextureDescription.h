//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol TSDAnimationSession;

__attribute__((visibility("hidden")))
@interface TSDTextureDescription : NSObject <NSCopying>
{
    unsigned int _isMagicMove:1;
    unsigned int _includesActionBuilds:1;
    unsigned int _shouldAddFinal:1;
    unsigned int _shouldAddMasks:1;
    unsigned int _shouldAddMagicMoveObjectOnly:1;
    unsigned int _shouldNotAddContainedReps:1;
    unsigned int _shouldNotAddShapeAttributes:1;
    unsigned int _shouldNotAddText:1;
    unsigned int _shouldSeparateReflection:1;
    unsigned int _shouldSeparateShadow:1;
    unsigned int _shouldSeparateStroke:1;
    unsigned int _shouldAddParameterizedStroke:1;
    unsigned int _shouldReverseStrokeDrawing:1;
    unsigned int _shouldSeparateGroupedTextures:1;
    unsigned int _shouldSeparateText:1;
    unsigned int _shouldIgnoreScaleInSourceImage:1;
    unsigned int _shouldDistortToFit:1;
    unsigned int _shouldForceTextureGeneration:1;
    BOOL _shouldAddNoShapeAttributes;
    int _byGlyphStyle;
    id <TSDAnimationSession> _session;
    NSUInteger _stage;
    NSUInteger _deliveryStyle;
}

+ (id)descriptionWithTextureDescription:(id)arg1;
+ (id)descriptionWithSession:(id)arg1;
@property(nonatomic) int byGlyphStyle; // @synthesize byGlyphStyle=_byGlyphStyle;
@property(nonatomic) NSUInteger deliveryStyle; // @synthesize deliveryStyle=_deliveryStyle;
@property(nonatomic) NSUInteger stage; // @synthesize stage=_stage;
@property(nonatomic) BOOL shouldIgnoreScaleInSourceImage; // @synthesize shouldIgnoreScaleInSourceImage=_shouldIgnoreScaleInSourceImage;
@property(nonatomic) BOOL shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration;
@property(nonatomic) BOOL shouldSeparateText; // @synthesize shouldSeparateText=_shouldSeparateText;
@property(nonatomic) BOOL shouldSeparateGroupedTextures; // @synthesize shouldSeparateGroupedTextures=_shouldSeparateGroupedTextures;
@property(nonatomic) BOOL shouldReverseStrokeDrawing; // @synthesize shouldReverseStrokeDrawing=_shouldReverseStrokeDrawing;
@property(nonatomic) BOOL shouldAddParameterizedStroke; // @synthesize shouldAddParameterizedStroke=_shouldAddParameterizedStroke;
@property(nonatomic) BOOL shouldSeparateStroke; // @synthesize shouldSeparateStroke=_shouldSeparateStroke;
@property(nonatomic) BOOL shouldSeparateShadow; // @synthesize shouldSeparateShadow=_shouldSeparateShadow;
@property(nonatomic) BOOL shouldSeparateReflection; // @synthesize shouldSeparateReflection=_shouldSeparateReflection;
@property(nonatomic) BOOL shouldNotAddText; // @synthesize shouldNotAddText=_shouldNotAddText;
@property(nonatomic) BOOL shouldNotAddShapeAttributes; // @synthesize shouldNotAddShapeAttributes=_shouldAddNoShapeAttributes;
@property(nonatomic) BOOL shouldNotAddContainedReps; // @synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps;
@property(nonatomic) BOOL shouldDistortToFit; // @synthesize shouldDistortToFit=_shouldDistortToFit;
@property(nonatomic) BOOL shouldAddMasks; // @synthesize shouldAddMasks=_shouldAddMasks;
@property(nonatomic) BOOL shouldAddMagicMoveObjectOnly; // @synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly;
@property(nonatomic) BOOL shouldAddFinal; // @synthesize shouldAddFinal=_shouldAddFinal;
@property(nonatomic) BOOL includesActionBuilds; // @synthesize includesActionBuilds=_includesActionBuilds;
@property(nonatomic) BOOL isMagicMove; // @synthesize isMagicMove=_isMagicMove;
@property(nonatomic) __weak id <TSDAnimationSession> session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)reset;
- (NSUInteger)hash;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

