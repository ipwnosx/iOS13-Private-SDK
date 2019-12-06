//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSSearchAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;
    NSMutableDictionary *_searchConnections;
}

+ (id)searchAgent:(BOOL)arg1;
@property(retain, nonatomic) NSMutableDictionary *searchConnections; // @synthesize searchConnections=_searchConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
// - (void).cxx_destruct;
- (BOOL)handleCommand:(const char )arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleEngagement:(id)arg1 forConnection:(id)arg2;
- (void)startSimpleQuery:(id)arg1;
- (void)cancelSimpleQuery:(id)arg1;
- (void)startQuery:(id)arg1;
- (void)cancelQuery:(id)arg1;
- (id)searchConnection:(id)arg1;
- (BOOL)lostClientConnection:(id)arg1 error:(id)arg2;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)arg1;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1;

@end

