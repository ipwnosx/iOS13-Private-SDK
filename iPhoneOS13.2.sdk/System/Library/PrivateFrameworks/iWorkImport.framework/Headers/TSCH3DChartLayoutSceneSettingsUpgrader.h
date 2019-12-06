//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class NSValue, TSCH3DChartLayout;

__attribute__((visibility("hidden")))
@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader
{
    TSCH3DChartLayout *mChartLayout;
    BOOL mIsMutatedForSceneSettings;
    NSValue *mInfoGeometryOffset;
    BOOL hasConstantDepth;
}

@property(nonatomic) BOOL hasConstantDepth; // @synthesize hasConstantDepth;
- (void)upgradeForSpice:(BOOL)arg1 naturalSize:(CGSize)arg2;
- (void)updateInfoGeometryIfNecessary;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2;
- (CGRect)oldResizingFrame;
// - (id)sceneResetWithLayoutSettings:(CDStruct_b1c75024)arg1;
// - (CDStruct_b1c75024)oldLayoutSettings;
- (void)dealloc;

@end

