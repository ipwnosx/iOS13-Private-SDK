//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseRow.h>

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow
{
    NSArray *_arrayRepresentation;
}

// - (void).cxx_destruct;
- (id)valueForColumnName:(id)arg1;
- (void)getBlobBytes:(const void *)arg1 outLength:(int )arg2 forColumnName:(id)arg3;
- (id)numberForColumnName:(id)arg1;
- (id)stringForColumnName:(id)arg1;
- (const char )cStringForColumnName:(id)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnName:(id)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)_numberOrZeroForColumnIndex:(NSUInteger)arg1;
- (id)arrayRepresentation;
- (id)dictionaryRepresentation;
- (id)valueForColumnIndex:(NSUInteger)arg1;
- (void)getBlobBytes:(const void *)arg1 outLength:(int )arg2 forColumnIndex:(NSUInteger)arg3;
- (id)numberForColumnIndex:(NSUInteger)arg1;
- (id)stringForColumnIndex:(NSUInteger)arg1;
- (const char )cStringForColumnIndex:(NSUInteger)arg1;
- (long long)int64ForColumnIndex:(NSUInteger)arg1;
- (int)intForColumnIndex:(NSUInteger)arg1;
- (double)doubleForColumnIndex:(NSUInteger)arg1;
- (id)dataForColumnIndex:(NSUInteger)arg1;
- (NSUInteger)columnCount;
- (id)initWithParentResult:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

