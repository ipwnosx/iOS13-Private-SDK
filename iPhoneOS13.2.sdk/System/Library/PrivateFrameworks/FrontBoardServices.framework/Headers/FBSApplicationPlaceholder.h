//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSBundleInfo.h>

@class FBSApplicationLibrary, FBSApplicationPlaceholderProgress, LSApplicationProxy, NSMutableSet, NSObject;
@protocol FBSApplicationPlaceholderProgress, OS_dispatch_queue;

@interface FBSApplicationPlaceholder : FBSBundleInfo
{
    LSApplicationProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSApplicationPlaceholderProgress *_queue_progress;
    NSMutableSet *_queue_observers;
    FBSApplicationLibrary *_appLibrary;
}

+ (id)_callOutQueue;
+ (id)_sharedQueue;
@property(nonatomic) __weak FBSApplicationLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (NSUInteger)installPhase;
- (NSUInteger)installState;
- (NSUInteger)installType;
- (void)_queue_noteChangedSignificantly:(id)arg1;
- (void)_noteChangedSignificantly;
- (void)_reloadProgress;
- (void)_queue_setProxy:(id)arg1 force:(BOOL)arg2;
- (void)_setProxy:(id)arg1 force:(BOOL)arg2;
@property(retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
- (void)_resumeWithResult:(CDUnknownBlockType)arg1;
- (void)_pauseWithResult:(CDUnknownBlockType)arg1;
- (void)_cancelWithResult:(CDUnknownBlockType)arg1;
- (void)_prioritizeWithResult:(CDUnknownBlockType)arg1;
- (BOOL)_performAction:(NSUInteger)arg1 withResult:(CDUnknownBlockType)arg2;
- (BOOL)_canPerformAction:(NSUInteger)arg1;
- (BOOL)_queue_canPerformAction:(NSUInteger)arg1;
- (NSUInteger)_queue_supportedActions;
- (BOOL)_queue_isCloudDemoted;
- (void)_reloadFromProxy:(id)arg1;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (void)_dispatchToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)resume;
- (BOOL)pause;
- (BOOL)cancel;
- (BOOL)prioritize;
- (double)percentComplete;
- (BOOL)isRestricted;
- (BOOL)cancelWithResult:(CDUnknownBlockType)arg1;
- (BOOL)resumeWithResult:(CDUnknownBlockType)arg1;
- (BOOL)pauseWithResult:(CDUnknownBlockType)arg1;
- (BOOL)prioritizeWithResult:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property(readonly, nonatomic, getter=isResumable) BOOL resumable;
@property(readonly, nonatomic, getter=isPausable) BOOL pausable;
@property(readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property(readonly, nonatomic) id <FBSApplicationPlaceholderProgress> progress;
- (void)dealloc;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

@end

