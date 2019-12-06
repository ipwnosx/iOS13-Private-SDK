//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSString;

@interface GEOLocationShifterPersistence : NSObject
{
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}

+ (id)sharedPersister;
// - (void).cxx_destruct;
- (void)getAllEntries:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)removeAllEntriesSync;
- (void)removeAllEntries;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
// - (void)_findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 usingFunction:(/* void * CDUnknownFunctionPointerType */)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
// - (void)findExactResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
// - (void)findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeResponse:(id)arg1;
- (void)tearDown;
- (BOOL)_setup:(id)arg1;
- (id)initWithDBFilePath:(id)arg1;
- (id)init;

@end

