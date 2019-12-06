//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPMediaItemReporting-Protocol.h>

@class NSError, NSObject, NSString, NSURL, TVPResourceLoadingRequest, TVPSecureKeyRequest;
@protocol TVPMediaItem;

@protocol TVPMediaItem <NSObject, TVPMediaItemReporting>
- (void)performMediaItemMetadataTransactionWithBlock:(void (^)(void))arg1;
- (void)removeMediaItemMetadataForProperty:(NSString *)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(NSString *)arg2;
- (id)mediaItemMetadataForProperty:(NSString *)arg1;
- (BOOL)hasTrait:(NSString *)arg1;
- (BOOL)isEqualToMediaItem:(NSObject<TVPMediaItem> *)arg1;
- (NSURL *)mediaItemURL;

@optional
- (BOOL)shouldRetryPlaybackForError:(NSError *)arg1;
- (NSError *)replacementErrorForPlaybackError:(NSError *)arg1;
- (void)cleanUpMediaItem;
- (BOOL)loadResourceForRequest:(TVPResourceLoadingRequest *)arg1;
- (void)loadStreamingKeyForRequest:(TVPSecureKeyRequest *)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)prepareForLoadingWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end

