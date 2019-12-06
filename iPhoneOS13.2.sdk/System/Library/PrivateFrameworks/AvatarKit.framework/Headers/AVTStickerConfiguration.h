//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPoseAnimation, AVTStickerCamera, NSArray, NSDictionary, NSString;

@interface AVTStickerConfiguration : NSObject
{
    BOOL _preRendered;
    BOOL _hasLoadedFromConfiguration;
    float _rate;
    float _scale;
    NSString *_name;
    NSString *_localizedName;
    AVTAvatarPoseAnimation *_poseAnimation;
    NSArray *_props;
    NSArray *_shaderModifiers;
    AVTStickerCamera *_camera;
    double _snapshotFrame;
    double _duration;
    NSArray *_morpherOverrides;
    NSArray *_presetOverrides;
    NSUInteger _stickerVersion;
    NSDictionary *_configurationDictionary;
    NSString *_assetsPath;
    CGSize _size;
}

+ (id)unavailableAnimojiNamesForStickerPack:(id)arg1;
+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2;
+ (id)stickerConfigurationsForMemojiInStickerPack:(id)arg1;
+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1;
+ (id)stickerConfigurationsForPuppetNamed:(id)arg1;
+ (id)stickerConfigurationsForMemoji;
@property(nonatomic) BOOL hasLoadedFromConfiguration; // @synthesize hasLoadedFromConfiguration=_hasLoadedFromConfiguration;
@property(retain, nonatomic) NSString *assetsPath; // @synthesize assetsPath=_assetsPath;
@property(retain, nonatomic) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
@property(readonly, nonatomic) NSUInteger stickerVersion; // @synthesize stickerVersion=_stickerVersion;
@property(readonly, nonatomic) NSArray *presetOverrides; // @synthesize presetOverrides=_presetOverrides;
@property(readonly, nonatomic) NSArray *morpherOverrides; // @synthesize morpherOverrides=_morpherOverrides;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double snapshotFrame; // @synthesize snapshotFrame=_snapshotFrame;
@property(readonly, nonatomic) BOOL preRendered; // @synthesize preRendered=_preRendered;
@property(retain, nonatomic) AVTStickerCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) NSArray *shaderModifiers; // @synthesize shaderModifiers=_shaderModifiers;
@property(retain, nonatomic) NSArray *props; // @synthesize props=_props;
@property(retain, nonatomic) AVTAvatarPoseAnimation *poseAnimation; // @synthesize poseAnimation=_poseAnimation;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)unload;
- (void)loadIfNeeded;
@property(readonly, nonatomic) NSString *emojiRepresentation;
- (void)setupOptions:(id)arg1;
- (id)initWithName:(id)arg1 poseAnimation:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6;
- (id)initWithConfigDictionary:(id)arg1 assetsPath:(id)arg2;
- (id)initWithConfigurationAtPath:(id)arg1;

@end

