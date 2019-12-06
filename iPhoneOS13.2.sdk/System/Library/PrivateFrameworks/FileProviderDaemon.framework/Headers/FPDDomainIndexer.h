//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDDomain, FPDExtension, NSDate, NSError, NSString, NSURL;
@protocol FPDDomainIndexerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FPDDomainIndexer : NSObject
{
    NSString *_domainIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    BOOL _needsIndexing;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    NSUInteger _batchIndexedCount;
    NSUInteger _batchIndexedCountSinceLastIndexing;
    NSUInteger _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    BOOL _needsAuthentication;
    id <FPDDomainIndexerDelegate> _delegate;
    FPDDomain *_domain;
    FPDExtension *_extension;
}

@property(nonatomic) __weak FPDExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) __weak FPDDomain *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <FPDDomainIndexerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
// - (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (void)setIndexingEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_signalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropIndexWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)dropIndexWithError:(id )arg1;
- (id)localSpotlightIndexer;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)canContinueIndexing;
- (void)indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerAnchor:(id)arg1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)arg1;
- (void)_handleOneBatchCompletionWithError:(id)arg1 hasMoreChanges:(BOOL)arg2;
- (BOOL)readNeedsAuthFromDisk;
- (void)persistsNeedsAuthOnDisk;
- (void)clearNeedsAuthOnDisk;
- (BOOL)readNeedsIndexingFromDisk;
- (void)clearNeedsIndexingOnDisk;
- (void)persistNeedsIndexingOnDisk;
- (void)invalidate;
- (void)_cancelTimer;
- (void)startWithSyncAnchor:(id)arg1;
- (id)description;
- (id)initWithExtension:(id)arg1 domain:(id)arg2 enabled:(BOOL)arg3;

@end

