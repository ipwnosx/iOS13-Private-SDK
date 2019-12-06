//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DChartAllSceneObjectDelegate-Protocol.h>

@class TSCH3DSceneObject;

__attribute__((visibility("hidden")))
@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate>
{
    TSCH3DSceneObject *mCurrentSceneObject;
    tvec2_3b141483 mCurrentElement;
}

@property(nonatomic) tvec2_3b141483 currentElement; // @synthesize currentElement=mCurrentElement;
@property(retain, nonatomic) TSCH3DSceneObject *currentSceneObject; // @synthesize currentSceneObject=mCurrentSceneObject;
- (id).cxx_construct;
- (BOOL)willSubmitElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willRenderElement:(id)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)arg1 sceneObject:(id)arg2;
// - (struct ElementRenderPass)renderPassForElement:(id)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElement:(id)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)updateExternalLabelAttribute:(id)arg1 sceneObject:(id)arg2 labelRenderInfo:(id)arg3;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(id)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(NSUInteger)arg3 elementIndex:(NSUInteger)arg4 forSceneObject:(id)arg5;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)setOffset:(const tvec3_17f03ce0 )arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 )arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
// - (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (void)dealloc;

@end

