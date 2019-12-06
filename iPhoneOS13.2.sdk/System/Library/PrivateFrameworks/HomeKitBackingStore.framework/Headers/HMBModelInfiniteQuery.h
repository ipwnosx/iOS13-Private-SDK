//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModelFiniteQuery.h>

@class NSString;

@interface HMBModelInfiniteQuery : HMBModelFiniteQuery
{
    NSString *_sequenceArgumentName;
}

+ (id)queryWithSQLPredicate:(id)arg1 sequenceArgumentName:(id)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;
@property(readonly, copy) NSString *sequenceArgumentName; // @synthesize sequenceArgumentName=_sequenceArgumentName;
// - (void).cxx_destruct;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 sequenceArgumentName:(id)arg3 maximumRowsPerSelect:(NSUInteger)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7;

@end

