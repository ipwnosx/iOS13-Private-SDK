//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;

@end
