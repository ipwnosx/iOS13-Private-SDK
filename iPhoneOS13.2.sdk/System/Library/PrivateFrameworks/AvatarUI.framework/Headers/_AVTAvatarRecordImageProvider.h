//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTAvatarImageRenderer, AVTUIEnvironment;
@protocol AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface _AVTAvatarRecordImageProvider : NSObject
{
    BOOL _allowPreFlight;
    id <AVTImageCache> _peristentCache;
    id <AVTImageCache> _volatileCache;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
    AVTAvatarConfigurationImageRenderer *_configurationRenderer;
    AVTAvatarImageRenderer *_avatarRenderer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTTaskScheduler> _renderingScheduler;
}

+ (void)makePersistentImageCache:(out id )arg1 volatileImageCache:(out id )arg2 withEnvironment:(id)arg3;
@property(readonly, nonatomic) BOOL allowPreFlight; // @synthesize allowPreFlight=_allowPreFlight;
@property(readonly, nonatomic) id <AVTTaskScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) AVTAvatarImageRenderer *avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
@property(readonly, nonatomic) AVTAvatarConfigurationImageRenderer *configurationRenderer; // @synthesize configurationRenderer=_configurationRenderer;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <AVTImageCache> volatileCache; // @synthesize volatileCache=_volatileCache;
@property(readonly, nonatomic) id <AVTImageCache> peristentCache; // @synthesize peristentCache=_peristentCache;
// - (void).cxx_destruct;
- (CDUnknownBlockType)_providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(BOOL)arg4;
- (CDUnknownBlockType)_providerForRecord:(id)arg1 scope:(id)arg2;
- (CDUnknownBlockType)providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(BOOL)arg4;
- (CDUnknownBlockType)providerForRecord:(id)arg1 scope:(id)arg2;
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 configurationRenderer:(id)arg5 avatarRenderer:(id)arg6 allowPreFlight:(BOOL)arg7 environment:(id)arg8;
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 allowPreFlight:(BOOL)arg3 environment:(id)arg4;
- (id)initWithEnvironment:(id)arg1;

@end

