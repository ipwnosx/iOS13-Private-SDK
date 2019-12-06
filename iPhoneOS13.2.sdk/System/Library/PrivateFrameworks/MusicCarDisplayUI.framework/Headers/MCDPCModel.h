//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicCarDisplayUI/MCDNowPlayingContentManagerDelegate-Protocol.h>

@class MCDPCItem, MCDPlayableContentPlaybackManager, MPWeakTimer, NSIndexPath, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCDPCModel : NSObject <MCDNowPlayingContentManagerDelegate>
{
    BOOL _currentPlayingApp;
    BOOL _didFinishInitialLoad;
    unsigned int _supportedAPIMask;
    NSString *_bundleID;
    MCDPCItem *_rootItem;
    MCDPlayableContentPlaybackManager *_playableContentPlaybackManager;
    id /* CDUnknownBlockType */ _playbackCompletion;
    id /* CDUnknownBlockType */ _containerCompletion;
    NSIndexPath *_selectedIndexPath;
    NSMutableDictionary *_items;
    NSMutableDictionary *_beginLoadingBlocks;
    MPWeakTimer *_beginLoadingTimeoutTimer;
    MPWeakTimer *_playbackProgressTimeoutTimer;
    NSObject<OS_dispatch_queue> *_mediaRemoteNotificationQueue;
    NSObject<OS_dispatch_queue> *_mediaRemoteItemQueue;
    CGSize _imageSize;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteItemQueue; // @synthesize mediaRemoteItemQueue=_mediaRemoteItemQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteNotificationQueue; // @synthesize mediaRemoteNotificationQueue=_mediaRemoteNotificationQueue;
@property(retain, nonatomic) MPWeakTimer *playbackProgressTimeoutTimer; // @synthesize playbackProgressTimeoutTimer=_playbackProgressTimeoutTimer;
@property(retain, nonatomic) MPWeakTimer *beginLoadingTimeoutTimer; // @synthesize beginLoadingTimeoutTimer=_beginLoadingTimeoutTimer;
@property(retain, nonatomic) NSMutableDictionary *beginLoadingBlocks; // @synthesize beginLoadingBlocks=_beginLoadingBlocks;
@property(nonatomic) unsigned int supportedAPIMask; // @synthesize supportedAPIMask=_supportedAPIMask;
@property(nonatomic) BOOL didFinishInitialLoad; // @synthesize didFinishInitialLoad=_didFinishInitialLoad;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) id /* CDUnknownBlockType */ containerCompletion; // @synthesize containerCompletion=_containerCompletion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackCompletion; // @synthesize playbackCompletion=_playbackCompletion;
@property(nonatomic, getter=isCurrentPlayingApp) BOOL currentPlayingApp; // @synthesize currentPlayingApp=_currentPlayingApp;
@property(retain, nonatomic) MCDPlayableContentPlaybackManager *playableContentPlaybackManager; // @synthesize playableContentPlaybackManager=_playableContentPlaybackManager;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) MCDPCItem *rootItem; // @synthesize rootItem=_rootItem;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (id)itemsFromMRContentItems:(id)arg1;
- (void)_invalidatePlaybackProgressTimeoutTimer;
- (void)_setupPlaybackProgressTimeoutTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateBeginLoadingTimeoutTimer;
- (void)_setupBeginLoadingTimeoutTimerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_errorForNotification:(id)arg1;
- (void)_finishPlaybackNotification:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(NSRange *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_finishBeginLoadingNotification:(id)arg1;
- (void)beginLoadingItemAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)containerForRoot;
@property(readonly, nonatomic) NSString *appTitle;
- (void)_browsableContentDidRegisterNotification:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_registerNotifications;
- (void)_registerForClientContent;
- (void)contentManager:(id)arg1 itemDidChange:(id)arg2 response:(id)arg3;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;

@end

