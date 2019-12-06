//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>


@class FPItem, NSOperationQueue, NSProgress, NSSet, NSURL;

@interface FPFetchPublishingURLOperation : FPActionOperation <NSFilePresenter>
{
    FPItem *_item;
    BOOL _isFilePresenter;
    NSOperationQueue *_operationQueue;
    NSURL *_itemURL;
    NSProgress *_remoteCancellableProgress;
    NSProgress *_itemUploadProgress;
    id /* CDUnknownBlockType */ _fetchCompletionBlock;
    id /* CDUnknownBlockType */ __t_filePresenterStarted;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ _t_filePresenterStarted; // @synthesize _t_filePresenterStarted=__t_filePresenterStarted;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (void)cancel;
- (void)_tryFetchingSharingURL;
- (void)_setupFilePresenterAndWaitForUpload;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)initWithItem:(id)arg1;

@end

