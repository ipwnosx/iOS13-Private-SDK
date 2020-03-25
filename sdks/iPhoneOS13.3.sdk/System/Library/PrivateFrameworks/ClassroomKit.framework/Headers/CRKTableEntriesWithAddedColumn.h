//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSArray;
@protocol CRKTableEntries;

@interface CRKTableEntriesWithAddedColumn : NSObject <CRKTableEntries>
{
    id <CRKTableEntries> mOrigin;
    NSUInteger mIndex;
    NSArray *mEntries;
}

// - (void).cxx_destruct;
- (id)entryAtRow:(NSUInteger)arg1 column:(NSUInteger)arg2;
- (NSUInteger)columnCount;
- (NSUInteger)rowCount;
- (id)initWithOrigin:(id)arg1 index:(NSUInteger)arg2 entries:(id)arg3;

@end
