//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>


@class BRGlobalProgressProxy, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    id /* CDUnknownBlockType */ _uploadAllFilesCompletionBlock;
    NSMutableDictionary *_errorsByContainerID;
    NSMutableArray *_hiddenContainersWithError;
    NSOperationQueue *_opQueue;
    BOOL _shouldKeepDataLocal;
}

@property BOOL shouldKeepDataLocal; // @synthesize shouldKeepDataLocal=_shouldKeepDataLocal;
@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) id /* CDUnknownBlockType */ uploadAllFilesCompletionBlock; // @synthesize uploadAllFilesCompletionBlock=_uploadAllFilesCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)evictAllFilesInGroup:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (id)init;

@end

