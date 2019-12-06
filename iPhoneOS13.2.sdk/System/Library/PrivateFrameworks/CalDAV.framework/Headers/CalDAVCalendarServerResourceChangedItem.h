//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSMutableSet;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem
{
    NSMutableSet *_created;
    NSMutableSet *_updated;
    NSMutableSet *_deleted;
    NSMutableSet *_collectionChanges;
    NSMutableSet *_collectionUpdates;
    ICSDateValue *_dtstamp;
}

@property(retain, nonatomic) ICSDateValue *dtstamp; // @synthesize dtstamp=_dtstamp;
@property(retain, nonatomic) NSMutableSet *collectionUpdates; // @synthesize collectionUpdates=_collectionUpdates;
@property(retain, nonatomic) NSMutableSet *collectionChanges; // @synthesize collectionChanges=_collectionChanges;
@property(retain, nonatomic) NSMutableSet *deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSMutableSet *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSMutableSet *created; // @synthesize created=_created;
// - (void).cxx_destruct;
- (id)copyParseRules;
- (void)setDtstampItem:(id)arg1;
- (void)addCollectionUpdates:(id)arg1;
- (void)addCollectionChanges:(id)arg1;
- (void)addDeleted:(id)arg1;
- (void)addUpdated:(id)arg1;
- (void)addCreated:(id)arg1;
- (id)init;

@end

