//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SSBDatabaseStatus : NSObject
{
//     struct DatabaseStatus _databaseStatus;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)nextPollingTimeOfDatabaseAtIndex:(NSUInteger)arg1;
- (id)lastUpdateTimeOfDatabaseAtIndex:(NSUInteger)arg1;
- (unsigned int)hashCountOfDatabaseAtIndex:(NSUInteger)arg1;
- (NSUInteger)sizeOfDatabaseAtIndex:(NSUInteger)arg1;
- (id)nameOfDatabaseAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger databaseCount;
// - (id)initWithDatabaseStatus:(struct DatabaseStatus)arg1;

@end

