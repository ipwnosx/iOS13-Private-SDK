//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPXObserver.h>


@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver>
{
    NSMutableArray *_changedItems;
    NSMutableArray *_deletedItemIDs;
    NSData *_originalSyncAnchor;
    id /* CDUnknownBlockType */ _finishedBlock;
}

@property(copy) id /* CDUnknownBlockType */ finishedBlock; // @synthesize finishedBlock=_finishedBlock;
// - (void).cxx_destruct;
- (void)finishEnumeratingWithError:(id)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(BOOL)arg2;
- (void)didUpdateItems:(id)arg1;
- (void)didDeleteItemsWithIdentifiers:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 previousChangeToken:(id)arg3;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;

@end

