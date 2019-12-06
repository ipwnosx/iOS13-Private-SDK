//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate-Protocol.h>

@class WebBookmarksXPCConnection;
@protocol WebBookmarksClientDelegateProtocol;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection *_connection;
    id <WebBookmarksClientDelegateProtocol> _delegate;
}

@property(nonatomic) __weak id <WebBookmarksClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didFinishFetching;
- (void)didUpdateProgressWithMessage:(id)arg1;
- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;
- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;
- (void)clearReadingListArchiveWithUUID:(id)arg1;
- (void)clearAllReadingListArchives;
- (void)startReadingListFetcher;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (id)init;

@end

