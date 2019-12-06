//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGDatabaseJournalFile;
@protocol OS_dispatch_queue;

@interface SGDatabaseJournal : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    NSUInteger _serialNumber;
    NSString *_uuid;
    BOOL _journaling;
    BOOL _inMemory;
    SGDatabaseJournalFile *_currentFile;
}

+ (id)_allowedTypesForQueryKeyedArchives;
+ (CDUnknownBlockType)_binderForDictionary:(id)arg1;
+ (id)journalForInMemoryDb;
+ (id)journalWithName:(id)arg1;
@property(readonly, nonatomic) BOOL journaling; // @synthesize journaling=_journaling;
// - (void).cxx_destruct;
- (BOOL)stopJournaling;
- (BOOL)startJournaling;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)executeQueriesOnDatabase:(id)arg1;
- (BOOL)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL )arg3;
- (void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3;

@end

