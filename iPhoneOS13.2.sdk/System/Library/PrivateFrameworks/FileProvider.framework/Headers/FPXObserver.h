//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItemID, FPXDomainContext, FPXExtensionContext, NSFileProviderExtension;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPXObserver : NSObject
{
    FPItemID *_observedItemID;
    FPXDomainContext *_domainContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderExtension *_strongVendorInstance;
    FPXExtensionContext *_strongExtensionContext;
    BOOL _invalidated;
}

@property(readonly, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
// - (void).cxx_destruct;
- (void)verifyVendorToken:(id)arg1;
- (void)invalidate;
- (id)updateForProviderItem:(id)arg1;
- (void)_fixupFavoriteRank:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;
- (id)init;

@end

