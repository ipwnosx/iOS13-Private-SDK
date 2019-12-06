//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SACFClientFlowUpdateScriptsCommand.h>

#import <SiriClientFlow/AFServiceCommand-Protocol.h>
#import <SiriClientFlow/CFScriptDownloadDelegate-Protocol.h>

@class CFScriptDownloadManager, NSObject, NSString;
@protocol CFScripting, OS_dispatch_queue;

@interface CFUpdateScriptsCommandHandler : SACFClientFlowUpdateScriptsCommand <AFServiceCommand, CFScriptDownloadDelegate>
{
    BOOL _scriptUpdateSuccess;
    id <CFScripting> _clientScripter;
    NSString *_scriptsCachePath;
    NSUInteger _scriptsUpdateCount;
    NSObject<OS_dispatch_queue> *_updateScriptsQueue;
    CFScriptDownloadManager *_downloadManager;
    id /* CDUnknownBlockType */ _updateScriptsCompletion;
}

@property(copy) id /* CDUnknownBlockType */ updateScriptsCompletion; // @synthesize updateScriptsCompletion=_updateScriptsCompletion;
@property(retain) CFScriptDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain) NSObject<OS_dispatch_queue> *updateScriptsQueue; // @synthesize updateScriptsQueue=_updateScriptsQueue;
@property BOOL scriptUpdateSuccess; // @synthesize scriptUpdateSuccess=_scriptUpdateSuccess;
@property NSUInteger scriptsUpdateCount; // @synthesize scriptsUpdateCount=_scriptsUpdateCount;
@property(retain) NSString *scriptsCachePath; // @synthesize scriptsCachePath=_scriptsCachePath;
@property(retain) id <CFScripting> clientScripter; // @synthesize clientScripter=_clientScripter;
// - (void).cxx_destruct;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;
- (id)cachePath;
- (void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;
- (void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;
- (void)downloadedScript:(id)arg1;
- (void)_updateScripts:(id)arg1 remaningAttempts:(long long)arg2;
- (void)_updateScriptsCompletedForScriptIdentifier:(id)arg1 success:(BOOL)arg2;
- (void)_updateScriptCacheForScriptArchiveAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateScriptCacheForScript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldRetryForError:(id)arg1;

@end

