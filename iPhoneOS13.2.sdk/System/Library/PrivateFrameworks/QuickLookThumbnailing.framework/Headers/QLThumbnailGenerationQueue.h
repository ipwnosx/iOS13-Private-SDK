//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface QLThumbnailGenerationQueue : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_queuedURLs;
}

+ (id)sharedInstance;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *queuedURLs; // @synthesize queuedURLs=_queuedURLs;
// - (void).cxx_destruct;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

