//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSItemScoringContext-Protocol.h>

@interface CLSPHAssetScoringContext : NSObject <CLSItemScoringContext>
{
    BOOL _shouldEmphasizeShared;
    BOOL _shouldEmphasizeAdjusted;
    BOOL _shouldEmphasizePanorama;
    BOOL _shouldEmphasizeLive;
    BOOL _shouldEmphasizeBurst;
    BOOL _shouldEmphasizeSDOF;
    BOOL _shouldEmphasizeReframe;
    short _audioClassificationsToEmphasize;
    double _viewCountThreshold;
    double _playCountThreshold;
    double _aestheticScoreThresholdToBeAwesome;
}

@property(nonatomic) double aestheticScoreThresholdToBeAwesome; // @synthesize aestheticScoreThresholdToBeAwesome=_aestheticScoreThresholdToBeAwesome;
@property(nonatomic) short audioClassificationsToEmphasize; // @synthesize audioClassificationsToEmphasize=_audioClassificationsToEmphasize;
@property(nonatomic) BOOL shouldEmphasizeReframe; // @synthesize shouldEmphasizeReframe=_shouldEmphasizeReframe;
@property(nonatomic) BOOL shouldEmphasizeSDOF; // @synthesize shouldEmphasizeSDOF=_shouldEmphasizeSDOF;
@property(nonatomic) BOOL shouldEmphasizeBurst; // @synthesize shouldEmphasizeBurst=_shouldEmphasizeBurst;
@property(nonatomic) BOOL shouldEmphasizeLive; // @synthesize shouldEmphasizeLive=_shouldEmphasizeLive;
@property(nonatomic) BOOL shouldEmphasizePanorama; // @synthesize shouldEmphasizePanorama=_shouldEmphasizePanorama;
@property(nonatomic) BOOL shouldEmphasizeAdjusted; // @synthesize shouldEmphasizeAdjusted=_shouldEmphasizeAdjusted;
@property(nonatomic) BOOL shouldEmphasizeShared; // @synthesize shouldEmphasizeShared=_shouldEmphasizeShared;
@property(nonatomic) double playCountThreshold; // @synthesize playCountThreshold=_playCountThreshold;
@property(nonatomic) double viewCountThreshold; // @synthesize viewCountThreshold=_viewCountThreshold;
- (id)init;

@end

