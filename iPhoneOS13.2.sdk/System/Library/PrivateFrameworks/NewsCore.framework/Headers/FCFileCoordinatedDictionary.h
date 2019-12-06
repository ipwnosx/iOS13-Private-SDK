//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FCAsyncSerialQueue, NSOperationQueue, NSSet, NSURL;

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_fileURL;
    NSSet *_allowedClasses;
    NSOperationQueue *_accessQueue;
    FCAsyncSerialQueue *_accessSynchronizationQueue;
}

@property(readonly, nonatomic) FCAsyncSerialQueue *accessSynchronizationQueue; // @synthesize accessSynchronizationQueue=_accessSynchronizationQueue;
@property(readonly, nonatomic) NSOperationQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, copy, nonatomic) NSSet *allowedClasses; // @synthesize allowedClasses=_allowedClasses;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
// - (void).cxx_destruct;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (id)init;

@end

