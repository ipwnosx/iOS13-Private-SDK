//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
// - (void).cxx_destruct;
- (void)_insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(BOOL)arg3;
- (void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2;
- (void)addListChangeItem:(id)arg1;
- (id)initWithListChangeItem:(id)arg1;

@end

