//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
{
    NSMutableDictionary *_pregeneratedIdMappings;
}

// - (void).cxx_destruct;
- (void)removePersistentIDFromIdMapping:(long long)arg1;
- (long long)nextPersistentIDForImportItem:(shared_ptr_de333b55)arg1;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;

@end

