//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs
{
    NSMutableArray *_deletedItemIDs;
    NSMutableArray *_updatedItems;
    NSMutableDictionary *_replacedItemsByFormerID;
}

@property(retain) NSMutableDictionary *replacedItemsByFormerID; // @synthesize replacedItemsByFormerID=_replacedItemsByFormerID;
@property(retain) NSMutableArray *updatedItems; // @synthesize updatedItems=_updatedItems;
@property(retain) NSMutableArray *deletedItemIDs; // @synthesize deletedItemIDs=_deletedItemIDs;
- (_Bool)containsChanges;

@end
