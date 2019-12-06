//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AvatarUI/AVTStickerBackendDelegate-Protocol.h>
#import <AvatarUI/AVTStickerRecentsOverlayDelegate-Protocol.h>

@class AVTClippableImageStore, AVTSerialTaskScheduler, AVTStickerConfigurationProvider, AVTStickerGenerator, AVTStickerRecentsLayout, AVTStickerRecentsMigrator, AVTStickerRecentsOverlayView, AVTUIEnvironment, AVTUIStickerGeneratorPool, CALayer, NSArray, NSObject, UICollectionView, UICollectionViewFlowLayout;
@protocol AVTAvatarRecord, AVTAvatarStoreInternal, AVTResourceCache, AVTStickerRecentsItem, AVTStickerRecentsViewControllerDelegate, NSObject, OS_dispatch_queue;

@interface AVTStickerRecentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTStickerBackendDelegate, AVTStickerRecentsOverlayDelegate>
{
    BOOL _hasFetchedDefaultMemoji;
    id <AVTStickerRecentsViewControllerDelegate> _delegate;
    AVTStickerRecentsMigrator *_stickerRecentsMigrator;
    AVTStickerRecentsOverlayView *_overlayView;
    id <NSObject> _avatarStoreChangeObserver;
    id <AVTAvatarRecord> _defaultMemoji;
    AVTClippableImageStore *_imageStore;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    id <AVTAvatarStoreInternal> _avatarStore;
    AVTUIEnvironment *_environment;
    id <AVTResourceCache> _cache;
    AVTStickerGenerator *_stickerGenerator;
    NSObject<OS_dispatch_queue> *_recentsWorkQueue;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    AVTStickerConfigurationProvider *_configurationProvider;
    AVTSerialTaskScheduler *_taskScheduler;
    AVTUIStickerGeneratorPool *_generatorPool;
    AVTStickerRecentsLayout *_stickerRecentsLayout;
    id <AVTStickerRecentsItem> _buttonItem;
    NSArray *_stickerItems;
    NSArray *_displayItems;
    CALayer *_edgeMaskLayer;
}

+ (id)stickerRecentsControllerForStore:(id)arg1;
+ (id)stickerRecentsController;
+ (id)imageStoreWithEnvironment:(id)arg1;
+ (id)stickerCacheWithEnvironment:(id)arg1;
+ (id)stickerForRecentItem:(id)arg1;
+ (id)layoutForSize:(CGSize)arg1;
@property(retain, nonatomic) CALayer *edgeMaskLayer; // @synthesize edgeMaskLayer=_edgeMaskLayer;
@property(retain, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic) NSArray *stickerItems; // @synthesize stickerItems=_stickerItems;
@property(retain, nonatomic) id <AVTStickerRecentsItem> buttonItem; // @synthesize buttonItem=_buttonItem;
@property(readonly, nonatomic) AVTStickerRecentsLayout *stickerRecentsLayout; // @synthesize stickerRecentsLayout=_stickerRecentsLayout;
@property(retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // @synthesize generatorPool=_generatorPool;
@property(retain, nonatomic) AVTSerialTaskScheduler *taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(retain, nonatomic) AVTStickerConfigurationProvider *configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // @synthesize encodingQueue=_encodingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recentsWorkQueue; // @synthesize recentsWorkQueue=_recentsWorkQueue;
@property(readonly, nonatomic) AVTStickerGenerator *stickerGenerator; // @synthesize stickerGenerator=_stickerGenerator;
@property(readonly, nonatomic) id <AVTResourceCache> cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTAvatarStoreInternal> avatarStore; // @synthesize avatarStore=_avatarStore;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) AVTClippableImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property(retain, nonatomic) id <AVTAvatarRecord> defaultMemoji; // @synthesize defaultMemoji=_defaultMemoji;
@property(nonatomic) BOOL hasFetchedDefaultMemoji; // @synthesize hasFetchedDefaultMemoji=_hasFetchedDefaultMemoji;
@property(retain, nonatomic) id <NSObject> avatarStoreChangeObserver; // @synthesize avatarStoreChangeObserver=_avatarStoreChangeObserver;
@property(retain, nonatomic) AVTStickerRecentsOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) AVTStickerRecentsMigrator *stickerRecentsMigrator; // @synthesize stickerRecentsMigrator=_stickerRecentsMigrator;
@property(nonatomic) __weak id <AVTStickerRecentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)overlayDidTapContinueButton:(id)arg1;
- (void)overlayDidTapCloseButton:(id)arg1;
- (void)overlayDidTapContentView:(id)arg1;
- (void)recentStickersDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (UIEdgeInsets)edgeInsetsForContainerSize:(CGSize)arg1;
- (void)updateItemSizeForContainerSize:(CGSize)arg1;
- (void)dismissOverlayViewAnimated:(BOOL)arg1;
- (id)recentStickersWithCount:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateDisplayItems;
- (void)buildRecentsItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)placeholderItems;
- (void)determineOverlayTypeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchDefaultMemojiIfNeeded;
- (void)endObservingAvatarStoreChanges;
- (void)beginObservingAvatarStoreChanges;
- (void)setupRenderingDependentPieces;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;

@end

