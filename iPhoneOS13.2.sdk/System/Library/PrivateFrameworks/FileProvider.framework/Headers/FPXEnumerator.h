//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPXEnumerator-Protocol.h>

@class FPItemID, FPXDomainContext, NSString;
@protocol FPXEnumeratorObserver, NSFileProviderEnumerator;

@interface FPXEnumerator : NSObject <FPXEnumerator>
{
    FPXDomainContext *_domainContext;
    id <NSFileProviderEnumerator> _vendorEnumerator;
    FPItemID *_observedItemID;
    BOOL _invalidated;
    BOOL _forceFileURLs;
    id <FPXEnumeratorObserver> _observer;
}

@property(readonly) id <FPXEnumeratorObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (void)keepAliveConnectionForRegisteredObserver:(CDUnknownBlockType)arg1;
- (void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2;
@property(readonly) FPItemID *observedItemID;
- (void)enumerateChangesFromToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enumerateItemsFromPage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)currentSyncAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceAddFileURLsForItems:(id)arg1;
- (void)forceItemUpdate:(id)arg1;
- (void)invalidateVendorEnumeration;
- (void)invalidate;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 observer:(id)arg4 forceFileURLs:(BOOL)arg5;

@end

