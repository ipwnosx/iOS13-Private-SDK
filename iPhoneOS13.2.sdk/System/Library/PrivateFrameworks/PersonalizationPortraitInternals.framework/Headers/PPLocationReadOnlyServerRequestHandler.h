//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPLocationReadOnlyServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager, _PASBundleIdResolver;
@protocol PPLocationClientProtocol;

@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol>
{
    id <PPLocationClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
// - (void).cxx_destruct;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)locationRecordsWithQuery:(id)arg1 queryId:(NSUInteger)arg2;
- (void)rankedLocationsWithQuery:(id)arg1 queryId:(NSUInteger)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;
- (id)init;

@end

