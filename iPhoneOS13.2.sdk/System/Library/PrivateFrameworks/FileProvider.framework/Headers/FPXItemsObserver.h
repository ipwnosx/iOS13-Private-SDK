//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPXObserver.h>


@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver>
{
    NSMutableArray *_items;
    id /* CDUnknownBlockType */ _finishedBlock;
    NSData *_syncAnchor;
}

@property(copy) NSData *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(copy) id /* CDUnknownBlockType */ finishedBlock; // @synthesize finishedBlock=_finishedBlock;
// - (void).cxx_destruct;
- (void)finishEnumeratingWithError:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;
- (void)didEnumerateItems:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;

@end

