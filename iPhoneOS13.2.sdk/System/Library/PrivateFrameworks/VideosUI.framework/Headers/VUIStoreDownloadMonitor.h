//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/SSDownloadManagerObserver-Protocol.h>

@class NSMutableArray, SSDownload, SSDownloadManager, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUIStoreDownloadMonitor : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager *_downloadManager;
    SSDownload *_download;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_completionHandlers;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) SSDownload *download; // @synthesize download=_download;
@property(retain, nonatomic) SSDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
// - (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)waitForDownloadToBecomePlayableWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDownload:(id)arg1 downloadManager:(id)arg2;

@end

