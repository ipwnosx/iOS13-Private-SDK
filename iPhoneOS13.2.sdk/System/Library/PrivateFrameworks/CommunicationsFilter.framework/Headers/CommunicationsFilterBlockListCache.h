//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockListCache : NSObject
{
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

- (void)_blockListChanged:(id)arg1;
- (void)syncListEmptyState;
- (void)setResponse:(BOOL)arg1 forItem:(id)arg2;
- (void)removeItemFromCache:(id)arg1;
- (long long)cachedResponseForItem:(id)arg1;
- (id)init;

@end

